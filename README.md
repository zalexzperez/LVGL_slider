Release v0.1 has the display objected created by the LVGL library using the lv_tft_espi_create() function.
However, quickly changing objects exhibit image flickering / tearing, due to a relatively poor display performance for the task, even with the highest possible SPI frequency set (80MHz) for this hardware (ESP32-S3):

![flickering_slider](https://github.com/user-attachments/assets/ea5c19c0-1726-4c0b-83c1-bd37fefa88da)

After using two buffers and DMA (v0.2 release):
![slider_DMA](https://github.com/user-attachments/assets/e57bc454-f36c-455e-b61f-17c1c2337c0c)



In other projects where the TFT_eSPI library is utilized directly, the programmer can use something called Sprites, which are graphics buffers that minimize flicker and tearing effects.
Such a feature is not present in the LVGL -> TFT_espi integration.

After checking LVGL documentation on [how to speed up the UI](https://docs.lvgl.io/master/intro/index.html#how-to-speed-up-my-ui), this example project will attempt to implement the same slider using two buffers and a flushing function with DMA, to get a smooth motion for quickly moving objects, like the slider in this program.

