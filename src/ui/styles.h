#ifndef EEZ_LVGL_UI_STYLES_H
#define EEZ_LVGL_UI_STYLES_H

#include <lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

// Style: slider_styles
lv_style_t *get_style_slider_styles_MAIN_DEFAULT();
lv_style_t *get_style_slider_styles_INDICATOR_DEFAULT();
lv_style_t *get_style_slider_styles_KNOB_DEFAULT();
void add_style_slider_styles(lv_obj_t *obj);
void remove_style_slider_styles(lv_obj_t *obj);

// Style: slider_style_0
lv_style_t *get_style_slider_style_0_MAIN_DEFAULT();
lv_style_t *get_style_slider_style_0_INDICATOR_DEFAULT();
lv_style_t *get_style_slider_style_0_KNOB_DEFAULT();
void add_style_slider_style_0(lv_obj_t *obj);
void remove_style_slider_style_0(lv_obj_t *obj);

// Style: slider_style_0t
lv_style_t *get_style_slider_style_0t_INDICATOR_DEFAULT();
lv_style_t *get_style_slider_style_0t_MAIN_DEFAULT();
lv_style_t *get_style_slider_style_0t_KNOB_DEFAULT();
void add_style_slider_style_0t(lv_obj_t *obj);
void remove_style_slider_style_0t(lv_obj_t *obj);

// Style: ASD
lv_style_t *get_style_asd_MAIN_DEFAULT();
lv_style_t *get_style_asd_INDICATOR_DEFAULT();
lv_style_t *get_style_asd_KNOB_DEFAULT();
void add_style_asd(lv_obj_t *obj);
void remove_style_asd(lv_obj_t *obj);

// Style: slider_style_2
lv_style_t *get_style_slider_style_2_MAIN_DEFAULT();
lv_style_t *get_style_slider_style_2_INDICATOR_DEFAULT();
lv_style_t *get_style_slider_style_2_KNOB_DEFAULT();
void add_style_slider_style_2(lv_obj_t *obj);
void remove_style_slider_style_2(lv_obj_t *obj);



#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_STYLES_H*/