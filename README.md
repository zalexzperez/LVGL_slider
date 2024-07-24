Code in the first commit has the display objected created by the LVGL library using the lv_tft_espi_create() function.
However, quickly changing objects exhibit image flickering / tearing, due to a relatively poor display performance for the task, even with the highest possible SPI frequency set (80MHz) for this hardware (ESP32-S3):

![flickering_slider](https://github.com/user-attachments/assets/65a86dd1-9779-48a9-a8d5-788b87a23b91)



In other projects where the TFT_eSPI library is utilized directly, the programmer can use something called Sprites, which are graphics buffers that minimize flicker and tearing effects.
Such a feature is not present in the LVGL -> TFT_espi integration.

After checking LVGL documentation on [how to speed up the UI](https://docs.lvgl.io/master/intro/index.html#how-to-speed-up-my-ui), this program will attempt to implement the same slider using two display buffers and flushing with DMA.

