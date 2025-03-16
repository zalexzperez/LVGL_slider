# Release v0.1
Display created by the LVGL library using the lv_tft_espi_create() function.
However, quickly changing objects exhibit image flickering / tearing, due to a relatively poor display performance for the task, even with the highest possible SPI frequency set (80MHz) for this hardware (ESP32-S3):

![flickering_slider](https://github.com/user-attachments/assets/ea5c19c0-1726-4c0b-83c1-bd37fefa88da)

# Release v0.2
After using two buffers and DMA
![slider_DMA](https://github.com/user-attachments/assets/e57bc454-f36c-455e-b61f-17c1c2337c0c)

After checking LVGL documentation on [how to speed up the UI](https://docs.lvgl.io/master/intro/index.html#how-to-speed-up-my-ui), this example project will attempt to implement the same slider using two buffers and a flushing function with DMA, to get a smooth motion for quickly moving objects, like the slider in this program.

# Release v0.3
- Grabbed UI from [this ESP-IDF repo](https://github.com/zalexzperez/espidf-lcd-st7789)
- Updated LVGL to v9.2.0. 
- Resized buffer sizes to that of the aforementioned ESPI-IDF repo.

## Result:

![Arduino-LVGL-slider](https://github.com/user-attachments/assets/ee5427ab-56d1-48c9-ab86-9184c65ac324)


