
#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#elif defined(LV_BUILD_TEST)
#include "../lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_DUST
#define LV_ATTRIBUTE_IMG_DUST
#endif

static const
LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_DUST
uint8_t img_slider_knob_map[] = {

    0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x0a,0x00,0x00,0x00,0x0c,0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x0c,0x00,0x00,0x00,0x0a,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x01,0xff,0xff,0xff,0x00,
    0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x0c,0x00,0x00,0x00,0x13,0x00,0x00,0x00,0x1b,0x00,0x00,0x00,0x22,0x00,0x00,0x00,0x26,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x26,0x00,0x00,0x00,0x22,0x00,0x00,0x00,0x1b,0x00,0x00,0x00,0x13,0x00,0x00,0x00,0x0c,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x01,
    0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x0c,0x00,0x00,0x00,0x1a,0x00,0x00,0x00,0x28,0x00,0x00,0x00,0x36,0x00,0x00,0x00,0x44,0x00,0x00,0x00,0x4d,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x4d,0x00,0x00,0x00,0x44,0x00,0x00,0x00,0x36,0x00,0x00,0x00,0x28,0x00,0x00,0x00,0x1a,0x00,0x00,0x00,0x0c,0x00,0x00,0x00,0x03,
    0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x13,0x00,0x00,0x00,0x28,0x00,0x00,0x00,0x3c,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x66,0x00,0x00,0x00,0x74,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x74,0x00,0x00,0x00,0x66,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x3c,0x00,0x00,0x00,0x28,0x00,0x00,0x00,0x13,0x00,0x00,0x00,0x05,
    0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x1a,0x00,0x00,0x00,0x35,0x00,0x00,0x00,0x51,0x00,0x00,0x00,0x6d,0x00,0x00,0x00,0x89,0x00,0x00,0x00,0x9b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x9b,0x00,0x00,0x00,0x89,0x00,0x00,0x00,0x6d,0x00,0x00,0x00,0x51,0x00,0x00,0x00,0x35,0x00,0x00,0x00,0x1a,0x00,0x00,0x00,0x08,
    0x00,0x00,0x00,0x0a,0x00,0x00,0x00,0x21,0x00,0x00,0x00,0x43,0x00,0x00,0x00,0x66,0x00,0x00,0x00,0x89,0x00,0x00,0x00,0xac,0x00,0x00,0x00,0xc4,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xc4,0x00,0x00,0x00,0xac,0x00,0x00,0x00,0x89,0x00,0x00,0x00,0x66,0x00,0x00,0x00,0x43,0x00,0x00,0x00,0x21,0x00,0x00,0x00,0x0a,
    0x00,0x00,0x00,0x0c,0x00,0x00,0x00,0x26,0x00,0x00,0x00,0x4d,0x00,0x00,0x00,0x74,0x00,0x00,0x00,0x9b,0x00,0x00,0x00,0xc4,0x21,0x21,0x21,0xe3,0x85,0x85,0x85,0xf7,0x91,0x91,0x91,0xf8,0x91,0x91,0x91,0xf8,0x91,0x91,0x91,0xf8,0x91,0x91,0x91,0xf8,0x91,0x91,0x91,0xf8,0x91,0x91,0x91,0xf8,0x91,0x91,0x91,0xf8,0x85,0x85,0x85,0xf7,0x21,0x21,0x21,0xe3,0x00,0x00,0x00,0xc4,0x00,0x00,0x00,0x9b,0x00,0x00,0x00,0x74,0x00,0x00,0x00,0x4d,0x00,0x00,0x00,0x26,0x00,0x00,0x00,0x0c,
    0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xcf,0x98,0x98,0x98,0xf8,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0x98,0x98,0x98,0xf8,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x0d,
    0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xcf,0xab,0xab,0xab,0xfa,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xab,0xab,0xab,0xfa,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x0d,
    0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xcf,0xab,0xab,0xab,0xfa,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xab,0xab,0xab,0xfa,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x0d,
    0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xcf,0xab,0xab,0xab,0xfa,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xab,0xab,0xab,0xfa,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x0d,
    0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xcf,0xab,0xab,0xab,0xfa,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xab,0xab,0xab,0xfa,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x0d,
    0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xcf,0xab,0xab,0xab,0xfa,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xab,0xab,0xab,0xfa,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x0d,
    0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xcf,0xab,0xab,0xab,0xfa,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xab,0xab,0xab,0xfa,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x0d,
    0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xcf,0xab,0xab,0xab,0xfa,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xab,0xab,0xab,0xfa,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x0d,
    0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xcf,0xab,0xab,0xab,0xfa,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xab,0xab,0xab,0xfa,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x0d,
    0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xcf,0xab,0xab,0xab,0xfa,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xab,0xab,0xab,0xfa,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x0d,
    0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xcf,0xab,0xab,0xab,0xfa,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xab,0xab,0xab,0xfa,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x0d,
    0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xcf,0xab,0xab,0xab,0xfa,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xab,0xab,0xab,0xfa,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x0d,
    0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xcf,0xab,0xab,0xab,0xfa,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xab,0xab,0xab,0xfa,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x0d,
    0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xcf,0xab,0xab,0xab,0xfa,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xab,0xab,0xab,0xfa,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x0d,
    0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xcf,0xab,0xab,0xab,0xfa,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xab,0xab,0xab,0xfa,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x0d,
    0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xcf,0xab,0xab,0xab,0xfa,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xab,0xab,0xab,0xfa,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x0d,
    0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xcf,0xab,0xab,0xab,0xfa,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xab,0xab,0xab,0xfa,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x0d,
    0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xcf,0xab,0xab,0xab,0xfa,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xab,0xab,0xab,0xfa,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x0d,
    0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xcf,0xab,0xab,0xab,0xfa,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xab,0xab,0xab,0xfa,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x0d,
    0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xcf,0xab,0xab,0xab,0xfa,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xab,0xab,0xab,0xfa,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x0d,
    0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xcf,0xab,0xab,0xab,0xfa,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xab,0xab,0xab,0xfa,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x0d,
    0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xcf,0xab,0xab,0xab,0xfa,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xab,0xab,0xab,0xfa,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x0d,
    0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xcf,0xab,0xab,0xab,0xfa,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xab,0xab,0xab,0xfa,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x0d,
    0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xcf,0xab,0xab,0xab,0xfa,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xab,0xab,0xab,0xfa,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x0d,
    0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xcf,0xab,0xab,0xab,0xfa,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xab,0xab,0xab,0xfa,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x0d,
    0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xcf,0xab,0xab,0xab,0xfa,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xab,0xab,0xab,0xfa,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x0d,
    0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xcf,0xab,0xab,0xab,0xfa,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xab,0xab,0xab,0xfa,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x0d,
    0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xcf,0xab,0xab,0xab,0xfa,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xab,0xab,0xab,0xfa,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x0d,
    0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xcf,0xab,0xab,0xab,0xfa,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xab,0xab,0xab,0xfa,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x0d,
    0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xcf,0xab,0xab,0xab,0xfa,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xab,0xab,0xab,0xfa,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x0d,
    0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xcf,0xab,0xab,0xab,0xfa,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xab,0xab,0xab,0xfa,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x0d,
    0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xcf,0xab,0xab,0xab,0xfa,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xab,0xab,0xab,0xfa,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x0d,
    0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xcf,0xab,0xab,0xab,0xfa,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xab,0xab,0xab,0xfa,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x0d,
    0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xcf,0xab,0xab,0xab,0xfa,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xab,0xab,0xab,0xfa,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x0d,
    0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xcf,0xab,0xab,0xab,0xfa,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xab,0xab,0xab,0xfa,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x0d,
    0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xcf,0xab,0xab,0xab,0xfa,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xab,0xab,0xab,0xfa,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x0d,
    0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xcf,0xab,0xab,0xab,0xfa,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xab,0xab,0xab,0xfa,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x0d,
    0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xcf,0xab,0xab,0xab,0xfa,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xab,0xab,0xab,0xfa,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x0d,
    0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xcf,0xab,0xab,0xab,0xfa,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xab,0xab,0xab,0xfa,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x0d,
    0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xcf,0xab,0xab,0xab,0xfa,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xab,0xab,0xab,0xfa,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x0d,
    0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xcf,0xab,0xab,0xab,0xfa,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xab,0xab,0xab,0xfa,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x0d,
    0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xcf,0xab,0xab,0xab,0xfa,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xab,0xab,0xab,0xfa,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x0d,
    0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xcf,0xab,0xab,0xab,0xfa,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xab,0xab,0xab,0xfa,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x0d,
    0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xcf,0xab,0xab,0xab,0xfa,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xab,0xab,0xab,0xfa,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x0d,
    0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xcf,0xab,0xab,0xab,0xfa,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xab,0xab,0xab,0xfa,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x0d,
    0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xcf,0xab,0xab,0xab,0xfa,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xab,0xab,0xab,0xfa,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x0d,
    0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xcf,0xab,0xab,0xab,0xfa,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xab,0xab,0xab,0xfa,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x0d,
    0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xcf,0x98,0x98,0x98,0xf8,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0xe6,0xe6,0xe6,0xff,0x98,0x98,0x98,0xf8,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x0d,
    0x00,0x00,0x00,0x0c,0x00,0x00,0x00,0x26,0x00,0x00,0x00,0x4d,0x00,0x00,0x00,0x74,0x00,0x00,0x00,0x9b,0x00,0x00,0x00,0xc4,0x21,0x21,0x21,0xe3,0x85,0x85,0x85,0xf7,0x91,0x91,0x91,0xf8,0x91,0x91,0x91,0xf8,0x91,0x91,0x91,0xf8,0x91,0x91,0x91,0xf8,0x91,0x91,0x91,0xf8,0x91,0x91,0x91,0xf8,0x91,0x91,0x91,0xf8,0x85,0x85,0x85,0xf7,0x21,0x21,0x21,0xe3,0x00,0x00,0x00,0xc4,0x00,0x00,0x00,0x9b,0x00,0x00,0x00,0x74,0x00,0x00,0x00,0x4d,0x00,0x00,0x00,0x26,0x00,0x00,0x00,0x0c,
    0x00,0x00,0x00,0x0a,0x00,0x00,0x00,0x21,0x00,0x00,0x00,0x43,0x00,0x00,0x00,0x66,0x00,0x00,0x00,0x89,0x00,0x00,0x00,0xac,0x00,0x00,0x00,0xc4,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xcf,0x00,0x00,0x00,0xc4,0x00,0x00,0x00,0xac,0x00,0x00,0x00,0x89,0x00,0x00,0x00,0x66,0x00,0x00,0x00,0x43,0x00,0x00,0x00,0x21,0x00,0x00,0x00,0x0a,
    0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x1a,0x00,0x00,0x00,0x35,0x00,0x00,0x00,0x51,0x00,0x00,0x00,0x6d,0x00,0x00,0x00,0x89,0x00,0x00,0x00,0x9b,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0xa5,0x00,0x00,0x00,0x9b,0x00,0x00,0x00,0x89,0x00,0x00,0x00,0x6d,0x00,0x00,0x00,0x51,0x00,0x00,0x00,0x35,0x00,0x00,0x00,0x1a,0x00,0x00,0x00,0x08,
    0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x13,0x00,0x00,0x00,0x28,0x00,0x00,0x00,0x3c,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x66,0x00,0x00,0x00,0x74,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x7b,0x00,0x00,0x00,0x74,0x00,0x00,0x00,0x66,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x3c,0x00,0x00,0x00,0x28,0x00,0x00,0x00,0x13,0x00,0x00,0x00,0x05,
    0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x0c,0x00,0x00,0x00,0x1a,0x00,0x00,0x00,0x28,0x00,0x00,0x00,0x36,0x00,0x00,0x00,0x44,0x00,0x00,0x00,0x4d,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0x4d,0x00,0x00,0x00,0x44,0x00,0x00,0x00,0x36,0x00,0x00,0x00,0x28,0x00,0x00,0x00,0x1a,0x00,0x00,0x00,0x0c,0x00,0x00,0x00,0x03,
    0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x0c,0x00,0x00,0x00,0x13,0x00,0x00,0x00,0x1b,0x00,0x00,0x00,0x22,0x00,0x00,0x00,0x26,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x26,0x00,0x00,0x00,0x22,0x00,0x00,0x00,0x1b,0x00,0x00,0x00,0x13,0x00,0x00,0x00,0x0c,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x01,
    0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x0a,0x00,0x00,0x00,0x0c,0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x0c,0x00,0x00,0x00,0x0a,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x01,0xff,0xff,0xff,0x00,

};

const lv_img_dsc_t img_slider_knob = {
  .header.magic = LV_IMAGE_HEADER_MAGIC,
  .header.cf = LV_COLOR_FORMAT_ARGB8888,
  .header.flags = 0,
  .header.w = 23,
  .header.h = 62,
  .header.stride = 92,
  .data_size = 5704,
  .data = img_slider_knob_map,
};

