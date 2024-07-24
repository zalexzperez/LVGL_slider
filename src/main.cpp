/*

  RPM slider (used as a visualization bar only) implemented using LVGL library on an SPI display (172x320
  ST7789 driver) controlled by the TFT_eSPI library and EEZ framework library (EEZ Studio GUI editor).

  There are two FreeRTOS tasks. The first one contains all the display and GUI related code. The other task
  simply sets RPM_percent (0-100%) variable for the slider.

*/

#include <Arduino.h>
#include "TFT_eSPI.h"
#include <lvgl.h>
#include "eez-project/ui.h"
#include "eez-project/vars.h"
#include "eez-project/screens.h"

const uint8_t display_BKL_pin = 48; // Display backlight pin

/* Display parameters */

#define TFT_HOR_RES 172
#define TFT_VER_RES 320
#define TFT_ROTATION LV_DISPLAY_ROTATION_90

/* LVGL draws into this buffer, 1/10 screen size usually works well. The size is in bytes*/

#define DRAW_BUF_SIZE (TFT_HOR_RES * TFT_VER_RES / 10 * (LV_COLOR_DEPTH / 8))
uint32_t draw_buf[DRAW_BUF_SIZE / 4];

#if LV_USE_LOG != 0
void my_print(lv_log_level_t level, const char *buf)
{
    LV_UNUSED(level);
    Serial.println(buf);
    Serial.flush();
}
#endif

// Mutex for the GUI
SemaphoreHandle_t xGuiSemaphore;

/* Function prototypes */

// Function that creates the GUI task
void gui_task_init();
// Function that creates the slider task
void slider_task_init();
// GUI task
static void guiTask(void *pvParameters);
// Slider task
static void sliderTask(void *pvParameters);
// Unused for this project, but still required
void encoder_read(lv_indev_t *drv, lv_indev_data_t *data);

void setup()
{
    Serial.begin(115200);
    delay(1000);

    gui_task_init();
    slider_task_init();

    // Delete setup and loop task
    vTaskDelete(NULL);
}

void loop()
{
    // Nothing will execute here
}

void gui_task_init()
{
    // Create a FreeRTOS task that manages the GUI
    xTaskCreatePinnedToCore(
        guiTask,    // Function to be called
        "GUI task", // Name of task
        4096 * 2,   // Stack size (bytes in ESP32)
        NULL,       // Parameter to pass to function
        1,          // Task priority (0 to configMAX_PRIORITES - 1)
        NULL,       // Task handle
        1           // CPU to run the task
    );
}

void slider_task_init()
{
    // Create a FreeRTOS task that manages the GUI
    xTaskCreatePinnedToCore(
        sliderTask,    // Function to be called
        "Slider task", // Name of task
        2048,          // Stack size (bytes in ESP32)
        NULL,          // Parameter to pass to function
        1,             // Task priority (0 to configMAX_PRIORITES - 1)
        NULL,          // Task handle
        1              // CPU to run the task
    );
}

static void guiTask(void *pvParameters)
{
    // Create GUI mutex
    xGuiSemaphore = xSemaphoreCreateMutex();

    // Initialize LVGL library
    lv_init();

    /* Set a tick source so that LVGL will know how much time elapsed */
    lv_tick_set_cb(xTaskGetTickCount);

    /* Register print function for debugging */
#if LV_USE_LOG != 0
    lv_log_register_print_cb(my_print);
#endif

    lv_display_t *disp;
#if LV_USE_TFT_ESPI
    /*TFT_eSPI can be enabled lv_conf.h to initialize the display in a simple way*/
    disp = lv_tft_espi_create(TFT_HOR_RES, TFT_VER_RES, draw_buf, sizeof(draw_buf));
    lv_display_set_rotation(disp, TFT_ROTATION);
#else
    /*Else create a display yourself*/
    disp = lv_display_create(TFT_HOR_RES, TFT_VER_RES);
    lv_display_set_flush_cb(disp, my_disp_flush);
    lv_display_set_buffers(disp, draw_buf, NULL, sizeof(draw_buf), LV_DISPLAY_RENDER_MODE_PARTIAL);
#endif

    /* Initialize the input device driver. Even though none is used, it's required for lv_timer_handler() */
    lv_indev_t *indev = lv_indev_create();
    lv_indev_set_type(indev, LV_INDEV_TYPE_ENCODER);
    lv_indev_set_read_cb(indev, encoder_read);

    ui_init(); // EEZ GUI init

    // Turn backlight on
    pinMode(display_BKL_pin, OUTPUT);
    digitalWrite(display_BKL_pin, HIGH);

    while (1)
    {
        uint32_t time_till_next = 5;

        if (xSemaphoreTake(xGuiSemaphore, portMAX_DELAY) == pdTRUE)
        {
            // Timer handler needs to be called periodically to handle the tasks of LVGL
            time_till_next = lv_timer_handler(); // lv_task_handler() is aparently lvgl v8 only
            ui_tick();
            xSemaphoreGive(xGuiSemaphore);
        }

        vTaskDelay(time_till_next / portTICK_PERIOD_MS); // Delay to avoid unnecessary polling
    }
}

static void sliderTask(void *pvParameters)
{
    uint32_t RPM = 0;

    while (1)
    {
        set_var_rpm_percent(map(RPM, 0, 6000, 0, 100)); // Map 0-6000RPM to 0-100%
        RPM += 20;
        if (RPM >= 6000)
            RPM = 0;

        vTaskDelay(10 / portTICK_PERIOD_MS);
    }
}

void encoder_read(lv_indev_t *drv, lv_indev_data_t *data)
{
  // Unused
}