#include <Arduino.h>
#include "TFT_eSPI.h"
#include "lvgl.h"
#include "ui/ui.h"

// Limit tasks to run on the ESP32’s application CPU (CPU1)
#if CONFIG_FREERTOS_UNICORE
static const BaseType_t app_cpu = 0;
#else
static const BaseType_t app_cpu = 1;
#endif

// Function to create a FreeRTOS task
BaseType_t create_task(TaskFunction_t task_function, const char *task_name, uint32_t stack_size, void *param, UBaseType_t priority, TaskHandle_t *task_handle = NULL);

// Function to flush display
void IRAM_ATTR my_disp_flush(lv_display_t *display, const lv_area_t *area, uint8_t *px_map);

void gui_task(void *pvParameters);

TFT_eSPI tft = TFT_eSPI(); // load TFT service
#define TFT_HOR_RES 320
#define TFT_VER_RES 172

/* LVGL draw into this buffer, 1/10 screen size usually works well. The size is in bytes */
#define BUFFER_SIZE (TFT_HOR_RES * TFT_VER_RES * sizeof(uint16_t) / 8)

// Function to flush display
void IRAM_ATTR my_disp_flush(lv_display_t *display, const lv_area_t *area, uint8_t *px_map);

void setup()
{
    Serial.begin(500000);
    const uint8_t DISPLAY_BKLIGHT_PIN = 48;
    // Initialize display backlight pin
    pinMode(DISPLAY_BKLIGHT_PIN, OUTPUT);
    digitalWrite(DISPLAY_BKLIGHT_PIN, HIGH);

    // Create a FreeRTOS task that manages the GUI
    create_task(gui_task, "GUI task", 8192, NULL, 1, NULL);
}

void loop()
{
    vTaskDelay(1000 / portTICK_PERIOD_MS);
}

BaseType_t create_task(TaskFunction_t task_function, const char *task_name, uint32_t stack_size, void *param, UBaseType_t priority, TaskHandle_t *task_handle)
{
    return xTaskCreatePinnedToCore(
        task_function, // Function to be called
        task_name,     // Name of task
        stack_size,    // Stack size (bytes in ESP32)
        param,         // Parameter to pass to function
        priority,      // Task priority (0 to configMAX_PRIORITIES - 1)
        task_handle,   // Task handle
        app_cpu        // Run on core 1 (change to 0 for core 0)
    );
}

void gui_task(void *pvParameters)
{
    // Initialize LVGL library
    lv_init();

    /* Set a tick source so that LVGL will know how much time elapsed. */
    lv_tick_set_cb(xTaskGetTickCount);

    /* Manually created display */
    tft.begin();        /* TFT init */
    tft.setRotation(1); /* Landscape orientation */
    tft.initDMA();
    lv_display_t *display = lv_display_create(TFT_HOR_RES, TFT_VER_RES);
    lv_display_set_flush_cb(display, my_disp_flush);

    uint32_t *buf1 = (uint32_t *)malloc(BUFFER_SIZE / 2 * sizeof(uint32_t));
    uint32_t *buf2 = (uint32_t *)malloc(BUFFER_SIZE / 2 * sizeof(uint32_t));

    lv_display_set_buffers(display, buf1, buf2, BUFFER_SIZE, LV_DISPLAY_RENDER_MODE_PARTIAL);

    ui_init(); // Initialize EEZ UI

    while (1)
    {
        uint32_t time_till_next = 5;

        // Timer handler needs to be called periodically to handle the tasks of LVGL
        time_till_next = lv_timer_handler(); // lv_task_handler() is aparently lvgl v8 only
        ui_tick();

        if (time_till_next != LV_NO_TIMER_READY)             // Handle LV_NO_TIMER_READY (-1)
            vTaskDelay(time_till_next / portTICK_PERIOD_MS); // Delay to avoid unnecessary polling
    }
}

void IRAM_ATTR my_disp_flush(lv_display_t *display, const lv_area_t *area, uint8_t *px_map)
{
    uint32_t w = (area->x2 - area->x1 + 1);
    uint32_t h = (area->y2 - area->y1 + 1);

    uint16_t *buf16 = (uint16_t *)px_map; // It's a 16 bit (RGB565) display

    tft.setAddrWindow(area->x1, area->y1, w, h);
    tft.startWrite();

    tft.setSwapBytes(true);
    tft.pushPixelsDMA(buf16, w * h); // Push line to screen
    tft.endWrite();

    lv_disp_flush_ready(display);
}
