#include "styles.h"
#include "images.h"
#include "fonts.h"

#include "ui.h"
#include "screens.h"

//
// Style: slider_styles
//

void init_style_slider_styles_MAIN_DEFAULT(lv_style_t *style) {
    lv_style_set_bg_opa(style, 0);
    lv_style_set_radius(style, 0);
};

lv_style_t *get_style_slider_styles_MAIN_DEFAULT() {
    static lv_style_t *style;
    if (!style) {
        style = lv_malloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_slider_styles_MAIN_DEFAULT(style);
    }
    return style;
};

void init_style_slider_styles_INDICATOR_DEFAULT(lv_style_t *style) {
    lv_style_set_bg_opa(style, 0);
    lv_style_set_radius(style, 0);
};

lv_style_t *get_style_slider_styles_INDICATOR_DEFAULT() {
    static lv_style_t *style;
    if (!style) {
        style = lv_malloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_slider_styles_INDICATOR_DEFAULT(style);
    }
    return style;
};

void init_style_slider_styles_KNOB_DEFAULT(lv_style_t *style) {
    lv_style_set_bg_opa(style, 0);
    lv_style_set_bg_image_src(style, &img_img_slider_knob);
};

lv_style_t *get_style_slider_styles_KNOB_DEFAULT() {
    static lv_style_t *style;
    if (!style) {
        style = lv_malloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_slider_styles_KNOB_DEFAULT(style);
    }
    return style;
};

void add_style_slider_styles(lv_obj_t *obj) {
    lv_obj_add_style(obj, get_style_slider_styles_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_style(obj, get_style_slider_styles_INDICATOR_DEFAULT(), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_add_style(obj, get_style_slider_styles_KNOB_DEFAULT(), LV_PART_KNOB | LV_STATE_DEFAULT);
};

void remove_style_slider_styles(lv_obj_t *obj) {
    lv_obj_remove_style(obj, get_style_slider_styles_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_remove_style(obj, get_style_slider_styles_INDICATOR_DEFAULT(), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_remove_style(obj, get_style_slider_styles_KNOB_DEFAULT(), LV_PART_KNOB | LV_STATE_DEFAULT);
};

//
// Style: slider_style_0
//

void init_style_slider_style_0_MAIN_DEFAULT(lv_style_t *style) {
    init_style_slider_styles_MAIN_DEFAULT(style);
    
    lv_style_set_bg_image_src(style, &img_img_slider_modern_0_background);
};

lv_style_t *get_style_slider_style_0_MAIN_DEFAULT() {
    static lv_style_t *style;
    if (!style) {
        style = lv_malloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_slider_style_0_MAIN_DEFAULT(style);
    }
    return style;
};

void init_style_slider_style_0_INDICATOR_DEFAULT(lv_style_t *style) {
    init_style_slider_styles_INDICATOR_DEFAULT(style);
    
    lv_style_set_bg_image_src(style, &img_img_slider_modern_0_indicator);
};

lv_style_t *get_style_slider_style_0_INDICATOR_DEFAULT() {
    static lv_style_t *style;
    if (!style) {
        style = lv_malloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_slider_style_0_INDICATOR_DEFAULT(style);
    }
    return style;
};

void init_style_slider_style_0_KNOB_DEFAULT(lv_style_t *style) {
    init_style_slider_styles_KNOB_DEFAULT(style);
    
};

lv_style_t *get_style_slider_style_0_KNOB_DEFAULT() {
    static lv_style_t *style;
    if (!style) {
        style = lv_malloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_slider_style_0_KNOB_DEFAULT(style);
    }
    return style;
};

void add_style_slider_style_0(lv_obj_t *obj) {
    lv_obj_add_style(obj, get_style_slider_style_0_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_style(obj, get_style_slider_style_0_INDICATOR_DEFAULT(), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_add_style(obj, get_style_slider_style_0_KNOB_DEFAULT(), LV_PART_KNOB | LV_STATE_DEFAULT);
};

void remove_style_slider_style_0(lv_obj_t *obj) {
    lv_obj_remove_style(obj, get_style_slider_style_0_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_remove_style(obj, get_style_slider_style_0_INDICATOR_DEFAULT(), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_remove_style(obj, get_style_slider_style_0_KNOB_DEFAULT(), LV_PART_KNOB | LV_STATE_DEFAULT);
};

//
// Style: slider_style_0t
//

void init_style_slider_style_0t_INDICATOR_DEFAULT(lv_style_t *style) {
    init_style_slider_style_0_INDICATOR_DEFAULT(style);
    
    lv_style_set_bg_image_src(style, &img_img_slider_modern_0_indicator_t);
};

lv_style_t *get_style_slider_style_0t_INDICATOR_DEFAULT() {
    static lv_style_t *style;
    if (!style) {
        style = lv_malloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_slider_style_0t_INDICATOR_DEFAULT(style);
    }
    return style;
};

void init_style_slider_style_0t_MAIN_DEFAULT(lv_style_t *style) {
    init_style_slider_style_0_MAIN_DEFAULT(style);
    
};

lv_style_t *get_style_slider_style_0t_MAIN_DEFAULT() {
    static lv_style_t *style;
    if (!style) {
        style = lv_malloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_slider_style_0t_MAIN_DEFAULT(style);
    }
    return style;
};

void init_style_slider_style_0t_KNOB_DEFAULT(lv_style_t *style) {
    init_style_slider_style_0_KNOB_DEFAULT(style);
    
};

lv_style_t *get_style_slider_style_0t_KNOB_DEFAULT() {
    static lv_style_t *style;
    if (!style) {
        style = lv_malloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_slider_style_0t_KNOB_DEFAULT(style);
    }
    return style;
};

void add_style_slider_style_0t(lv_obj_t *obj) {
    lv_obj_add_style(obj, get_style_slider_style_0t_INDICATOR_DEFAULT(), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_add_style(obj, get_style_slider_style_0t_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_style(obj, get_style_slider_style_0t_KNOB_DEFAULT(), LV_PART_KNOB | LV_STATE_DEFAULT);
};

void remove_style_slider_style_0t(lv_obj_t *obj) {
    lv_obj_remove_style(obj, get_style_slider_style_0t_INDICATOR_DEFAULT(), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_remove_style(obj, get_style_slider_style_0t_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_remove_style(obj, get_style_slider_style_0t_KNOB_DEFAULT(), LV_PART_KNOB | LV_STATE_DEFAULT);
};

//
// Style: ASD
//

void init_style_asd_MAIN_DEFAULT(lv_style_t *style) {
    lv_style_set_bg_opa(style, 0);
    lv_style_set_radius(style, 0);
};

lv_style_t *get_style_asd_MAIN_DEFAULT() {
    static lv_style_t *style;
    if (!style) {
        style = lv_malloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_asd_MAIN_DEFAULT(style);
    }
    return style;
};

void init_style_asd_INDICATOR_DEFAULT(lv_style_t *style) {
    lv_style_set_bg_opa(style, 0);
    lv_style_set_radius(style, 0);
};

lv_style_t *get_style_asd_INDICATOR_DEFAULT() {
    static lv_style_t *style;
    if (!style) {
        style = lv_malloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_asd_INDICATOR_DEFAULT(style);
    }
    return style;
};

void init_style_asd_KNOB_DEFAULT(lv_style_t *style) {
    lv_style_set_bg_opa(style, 0);
    lv_style_set_bg_image_src(style, &img_img_slider_knob);
};

lv_style_t *get_style_asd_KNOB_DEFAULT() {
    static lv_style_t *style;
    if (!style) {
        style = lv_malloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_asd_KNOB_DEFAULT(style);
    }
    return style;
};

void add_style_asd(lv_obj_t *obj) {
    lv_obj_add_style(obj, get_style_asd_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_style(obj, get_style_asd_INDICATOR_DEFAULT(), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_add_style(obj, get_style_asd_KNOB_DEFAULT(), LV_PART_KNOB | LV_STATE_DEFAULT);
};

void remove_style_asd(lv_obj_t *obj) {
    lv_obj_remove_style(obj, get_style_asd_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_remove_style(obj, get_style_asd_INDICATOR_DEFAULT(), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_remove_style(obj, get_style_asd_KNOB_DEFAULT(), LV_PART_KNOB | LV_STATE_DEFAULT);
};

//
// Style: slider_style_2
//

void init_style_slider_style_2_MAIN_DEFAULT(lv_style_t *style) {
    init_style_asd_MAIN_DEFAULT(style);
    
    lv_style_set_bg_image_src(style, &img_img_slider_porsche_background);
};

lv_style_t *get_style_slider_style_2_MAIN_DEFAULT() {
    static lv_style_t *style;
    if (!style) {
        style = lv_malloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_slider_style_2_MAIN_DEFAULT(style);
    }
    return style;
};

void init_style_slider_style_2_INDICATOR_DEFAULT(lv_style_t *style) {
    init_style_asd_INDICATOR_DEFAULT(style);
    
    lv_style_set_bg_image_src(style, &img_img_slider_porsche_indicator);
};

lv_style_t *get_style_slider_style_2_INDICATOR_DEFAULT() {
    static lv_style_t *style;
    if (!style) {
        style = lv_malloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_slider_style_2_INDICATOR_DEFAULT(style);
    }
    return style;
};

void init_style_slider_style_2_KNOB_DEFAULT(lv_style_t *style) {
    init_style_asd_KNOB_DEFAULT(style);
    
};

lv_style_t *get_style_slider_style_2_KNOB_DEFAULT() {
    static lv_style_t *style;
    if (!style) {
        style = lv_malloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_slider_style_2_KNOB_DEFAULT(style);
    }
    return style;
};

void add_style_slider_style_2(lv_obj_t *obj) {
    lv_obj_add_style(obj, get_style_slider_style_2_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_style(obj, get_style_slider_style_2_INDICATOR_DEFAULT(), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_add_style(obj, get_style_slider_style_2_KNOB_DEFAULT(), LV_PART_KNOB | LV_STATE_DEFAULT);
};

void remove_style_slider_style_2(lv_obj_t *obj) {
    lv_obj_remove_style(obj, get_style_slider_style_2_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_remove_style(obj, get_style_slider_style_2_INDICATOR_DEFAULT(), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_remove_style(obj, get_style_slider_style_2_KNOB_DEFAULT(), LV_PART_KNOB | LV_STATE_DEFAULT);
};

//
//
//

void add_style(lv_obj_t *obj, int32_t styleIndex) {
    typedef void (*AddStyleFunc)(lv_obj_t *obj);
    static const AddStyleFunc add_style_funcs[] = {
        add_style_slider_styles,
        add_style_slider_style_0,
        add_style_slider_style_0t,
        add_style_asd,
        add_style_slider_style_2,
    };
    add_style_funcs[styleIndex](obj);
}

void remove_style(lv_obj_t *obj, int32_t styleIndex) {
    typedef void (*RemoveStyleFunc)(lv_obj_t *obj);
    static const RemoveStyleFunc remove_style_funcs[] = {
        remove_style_slider_styles,
        remove_style_slider_style_0,
        remove_style_slider_style_0t,
        remove_style_asd,
        remove_style_slider_style_2,
    };
    remove_style_funcs[styleIndex](obj);
}

