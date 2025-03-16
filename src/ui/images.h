#ifndef EEZ_LVGL_UI_IMAGES_H
#define EEZ_LVGL_UI_IMAGES_H

#include <lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

extern const lv_img_dsc_t img_img_icon_coolant_temp;
extern const lv_img_dsc_t img_img_slider_knob;
extern const lv_img_dsc_t img_img_slider_modern_0_background;
extern const lv_img_dsc_t img_img_slider_modern_0_indicator;
extern const lv_img_dsc_t img_img_slider_modern_0_indicator_t;
extern const lv_img_dsc_t img_img_units_temp_c;
extern const lv_img_dsc_t img_img_slider_porsche_background;
extern const lv_img_dsc_t img_img_slider_porsche_indicator;

#ifndef EXT_IMG_DESC_T
#define EXT_IMG_DESC_T
typedef struct _ext_img_desc_t {
    const char *name;
    const lv_img_dsc_t *img_dsc;
} ext_img_desc_t;
#endif

extern const ext_img_desc_t images[8];


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_IMAGES_H*/