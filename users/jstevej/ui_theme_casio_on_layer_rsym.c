#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_UI_THEME_CASIO_ON_LAYER_RSYM
#define LV_ATTRIBUTE_IMG_UI_THEME_CASIO_ON_LAYER_RSYM
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_UI_THEME_CASIO_ON_LAYER_RSYM uint8_t ui_theme_casio_on_layer_rsym_map[] = {
#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
  /*Pixel format: Red: 3 bit, Green: 3 bit, Blue: 2 bit*/
  0x92, 0x96, 0x96, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0xb6, 0x96, 0x92, 0x92, 0x92, 0x92, 0xb6, 0x92, 
  0xb6, 0xb7, 0xb7, 0xb7, 0xb6, 0xb6, 0xb7, 0xb6, 0xb6, 0xb6, 0x96, 0xb6, 0xb6, 0xb6, 0xb6, 0xb6, 0x96, 
  0xb7, 0xbb, 0xdb, 0xbb, 0xb7, 0xb6, 0x72, 0x4d, 0x4d, 0x4d, 0x6d, 0x92, 0xb7, 0xdb, 0xdb, 0xb6, 0xbb, 
  0xdb, 0xdb, 0xbb, 0xdb, 0x96, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x6d, 0xbb, 0xdb, 0xdb, 0xdb, 
  0xdb, 0xdb, 0xdb, 0xb7, 0x49, 0x49, 0x49, 0x6d, 0x92, 0x6d, 0x49, 0x49, 0x49, 0x72, 0xdb, 0xdb, 0xdb, 
  0xdb, 0xdb, 0xbb, 0x6d, 0x49, 0x49, 0x4d, 0xdb, 0xdf, 0xbb, 0x4d, 0x49, 0x49, 0x4d, 0xdb, 0xdb, 0xdb, 
  0xdf, 0xdf, 0xdf, 0x49, 0x49, 0x49, 0x92, 0xdf, 0xdb, 0xdb, 0x72, 0x49, 0x49, 0x49, 0xdb, 0xdf, 0xdb, 
  0xdb, 0xdb, 0xb6, 0x49, 0x49, 0x49, 0x96, 0xdb, 0xdb, 0xdf, 0x6d, 0x49, 0x49, 0x4d, 0xdb, 0xdb, 0xff, 
  0xdb, 0xdb, 0x96, 0x49, 0x49, 0x49, 0xb6, 0xdb, 0xdb, 0xdf, 0x4d, 0x49, 0x49, 0x72, 0xdb, 0xdb, 0xdf, 
  0xdb, 0xdb, 0x92, 0x49, 0x49, 0x49, 0xb6, 0xdb, 0xdf, 0x92, 0x49, 0x49, 0x4d, 0xdf, 0xdb, 0xdb, 0xff, 
  0xdf, 0xdb, 0x92, 0x49, 0x49, 0x49, 0xb7, 0xb6, 0x72, 0x49, 0x49, 0x6d, 0xdb, 0xdb, 0xdb, 0xdb, 0xdf, 
  0xdb, 0xdb, 0x92, 0x49, 0x49, 0x49, 0xb7, 0x49, 0x49, 0x49, 0x4d, 0xb6, 0xdb, 0xdb, 0xff, 0xdb, 0xdb, 
  0xdb, 0xdb, 0x92, 0x49, 0x49, 0x49, 0xb7, 0x49, 0x49, 0x49, 0x49, 0x49, 0x6d, 0xbb, 0xdb, 0xdb, 0xdf, 
  0xdf, 0xdb, 0x92, 0x49, 0x49, 0x49, 0xb6, 0xdb, 0xdb, 0x92, 0x4d, 0x49, 0x49, 0x4d, 0xb6, 0xdb, 0xdb, 
  0xdb, 0xff, 0x92, 0x49, 0x49, 0x49, 0xb6, 0xdf, 0xdf, 0xdf, 0xb6, 0x4d, 0x49, 0x49, 0x4d, 0xdb, 0xdb, 
  0xdb, 0xdb, 0x92, 0x49, 0x49, 0x49, 0xb6, 0xdb, 0xdb, 0xff, 0xdf, 0x72, 0x49, 0x49, 0x49, 0xb6, 0xdb, 
  0xff, 0xdb, 0x92, 0x49, 0x49, 0x49, 0xb6, 0xff, 0xdb, 0xdb, 0xdb, 0xb6, 0x49, 0x49, 0x49, 0x92, 0xdb, 
  0xff, 0xdb, 0x92, 0x49, 0x49, 0x49, 0xb6, 0xdb, 0xdb, 0xdf, 0xdb, 0x96, 0x49, 0x49, 0x49, 0x96, 0xdf, 
  0xdb, 0xdb, 0x92, 0x49, 0x49, 0x49, 0xb6, 0xdb, 0xff, 0xff, 0xdb, 0x72, 0x49, 0x49, 0x49, 0xb6, 0xdb, 
  0xdb, 0xff, 0x92, 0x49, 0x49, 0x49, 0x92, 0xdb, 0xdb, 0xdb, 0x92, 0x49, 0x49, 0x49, 0x6d, 0xdf, 0xdb, 
  0xdb, 0xdb, 0x92, 0x49, 0x49, 0x49, 0x49, 0x4d, 0x6d, 0x4d, 0x49, 0x49, 0x49, 0x4d, 0xbb, 0xdf, 0xdb, 
  0xdf, 0xdf, 0x92, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x6d, 0xbb, 0xdb, 0xff, 0xdf, 
  0xdb, 0xdb, 0x92, 0x49, 0x49, 0x49, 0x96, 0x96, 0x92, 0x92, 0x92, 0xbb, 0xdf, 0xdb, 0xdf, 0xdb, 0xdb, 
  0xdb, 0xdb, 0x92, 0x49, 0x49, 0x49, 0xbb, 0xff, 0xdb, 0xdb, 0xff, 0xdb, 0xdb, 0xdb, 0xdb, 0xdf, 0xdb, 
  0xdb, 0xff, 0x92, 0x49, 0x49, 0x49, 0xb7, 0xdb, 0xdb, 0xdb, 0xdf, 0xff, 0xdb, 0xdb, 0xdb, 0xdf, 0xdb, 
  0xdb, 0xdf, 0x92, 0x49, 0x49, 0x49, 0xb6, 0xdb, 0xdf, 0xdb, 0xdf, 0xdb, 0xdf, 0xdb, 0xdf, 0xdb, 0xdb, 
  0xdf, 0xdb, 0x92, 0x49, 0x49, 0x49, 0xb7, 0xdf, 0xdb, 0xdb, 0xdf, 0xdb, 0xdb, 0xdb, 0xff, 0xdb, 0xdb, 
  0xdb, 0xdf, 0xbb, 0xb6, 0xb7, 0xb6, 0xdb, 0xdb, 0xdf, 0xdb, 0xdb, 0xff, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 
  0xdb, 0xdb, 0xdb, 0xdb, 0xbb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xbb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Red: 5 bit, Green: 6 bit, Blue: 5 bit*/
  0x50, 0x84, 0x91, 0x8c, 0xb1, 0x8c, 0x71, 0x8c, 0x50, 0x84, 0x71, 0x8c, 0x50, 0x84, 0x70, 0x84, 0x50, 0x84, 0x14, 0xa5, 0xb2, 0x94, 0x50, 0x84, 0x50, 0x84, 0x91, 0x8c, 0x70, 0x84, 0xf3, 0x9c, 0x50, 0x84, 
  0x13, 0x9d, 0x54, 0xa5, 0x54, 0xa5, 0x95, 0xad, 0x34, 0xa5, 0x34, 0xa5, 0x95, 0xad, 0x34, 0xa5, 0x13, 0x9d, 0x13, 0x9d, 0xd2, 0x94, 0x34, 0xa5, 0x34, 0xa5, 0x34, 0xa5, 0xf2, 0x94, 0xf2, 0x94, 0xd2, 0x94, 
  0x74, 0xa5, 0xb6, 0xb5, 0xf7, 0xbd, 0xb5, 0xad, 0x74, 0xa5, 0x13, 0x9d, 0xad, 0x6b, 0xca, 0x52, 0x89, 0x4a, 0xa9, 0x4a, 0x0a, 0x53, 0x0f, 0x7c, 0x74, 0xa5, 0xd6, 0xb5, 0xf7, 0xbd, 0x53, 0x9d, 0xd6, 0xb5, 
  0x99, 0xce, 0x17, 0xbe, 0xd6, 0xb5, 0xf6, 0xb5, 0xb1, 0x8c, 0x68, 0x42, 0x47, 0x3a, 0x47, 0x3a, 0x47, 0x3a, 0x47, 0x3a, 0x47, 0x3a, 0x47, 0x3a, 0x0a, 0x53, 0xb6, 0xb5, 0xf6, 0xb5, 0x37, 0xbe, 0x38, 0xc6, 
  0x58, 0xc6, 0x78, 0xc6, 0x37, 0xbe, 0x74, 0xa5, 0x68, 0x42, 0x67, 0x3a, 0x67, 0x3a, 0x0a, 0x53, 0x2f, 0x7c, 0x2b, 0x5b, 0x67, 0x3a, 0x67, 0x3a, 0x67, 0x3a, 0xad, 0x6b, 0x16, 0xb6, 0x78, 0xc6, 0x17, 0xbe, 
  0x58, 0xc6, 0x58, 0xc6, 0xd5, 0xad, 0x6c, 0x63, 0x68, 0x42, 0x68, 0x42, 0xc9, 0x4a, 0x58, 0xc6, 0xba, 0xd6, 0xf6, 0xb5, 0xea, 0x52, 0x68, 0x42, 0x68, 0x42, 0xa8, 0x42, 0x99, 0xce, 0x37, 0xbe, 0x78, 0xc6, 
  0x99, 0xce, 0x99, 0xce, 0x99, 0xce, 0x88, 0x42, 0x68, 0x42, 0x68, 0x42, 0x2f, 0x7c, 0xb9, 0xce, 0x58, 0xc6, 0x37, 0xbe, 0xcd, 0x6b, 0x68, 0x42, 0x68, 0x42, 0x68, 0x42, 0x17, 0xbe, 0xb9, 0xce, 0x78, 0xc6, 
  0x99, 0xce, 0x58, 0xc6, 0x54, 0xa5, 0x68, 0x42, 0x68, 0x42, 0x68, 0x42, 0xf2, 0x94, 0x78, 0xc6, 0x58, 0xc6, 0xb9, 0xce, 0x6c, 0x63, 0x68, 0x42, 0x68, 0x42, 0xa8, 0x42, 0x37, 0xbe, 0x78, 0xc6, 0xfb, 0xde, 
  0x37, 0xbe, 0x99, 0xce, 0xb1, 0x8c, 0x68, 0x42, 0x68, 0x42, 0x68, 0x42, 0x54, 0xa5, 0x57, 0xbe, 0x57, 0xbe, 0xb9, 0xce, 0xc9, 0x4a, 0x68, 0x42, 0x68, 0x42, 0xee, 0x73, 0x58, 0xc6, 0x58, 0xc6, 0xb9, 0xce, 
  0x37, 0xbe, 0x58, 0xc6, 0x70, 0x84, 0x68, 0x42, 0x68, 0x42, 0x68, 0x42, 0x74, 0xa5, 0x78, 0xc6, 0xba, 0xd6, 0x4f, 0x7c, 0x68, 0x42, 0x68, 0x42, 0xea, 0x52, 0x99, 0xce, 0x78, 0xc6, 0x16, 0xb6, 0xda, 0xd6, 
  0x99, 0xce, 0x99, 0xce, 0x2f, 0x7c, 0x68, 0x42, 0x68, 0x42, 0x68, 0x42, 0x74, 0xa5, 0x12, 0x95, 0xcd, 0x6b, 0x68, 0x42, 0x68, 0x42, 0x2b, 0x5b, 0x37, 0xbe, 0x57, 0xbe, 0x78, 0xc6, 0x99, 0xce, 0x99, 0xce, 
  0x78, 0xc6, 0x99, 0xce, 0x4f, 0x7c, 0x68, 0x42, 0x68, 0x42, 0x68, 0x42, 0x94, 0xa5, 0x68, 0x42, 0x68, 0x42, 0x68, 0x42, 0xc9, 0x4a, 0x12, 0x95, 0x58, 0xc6, 0x17, 0xbe, 0xfb, 0xde, 0x78, 0xc6, 0x58, 0xc6, 
  0x99, 0xce, 0x37, 0xbe, 0x2f, 0x7c, 0x68, 0x42, 0x68, 0x42, 0x68, 0x42, 0x94, 0xa5, 0x68, 0x42, 0x68, 0x42, 0x68, 0x42, 0x68, 0x42, 0x68, 0x42, 0x2a, 0x53, 0x95, 0xad, 0x78, 0xc6, 0x58, 0xc6, 0xb9, 0xce, 
  0xda, 0xd6, 0x78, 0xc6, 0x4f, 0x7c, 0x68, 0x42, 0x68, 0x42, 0x68, 0x42, 0x33, 0x9d, 0x99, 0xce, 0xf6, 0xb5, 0x4f, 0x7c, 0x88, 0x42, 0x68, 0x42, 0x68, 0x42, 0xa8, 0x42, 0x74, 0xa5, 0x78, 0xc6, 0x99, 0xce, 
  0x16, 0xb6, 0x1b, 0xdf, 0x70, 0x84, 0x68, 0x42, 0x68, 0x42, 0x68, 0x42, 0x54, 0xa5, 0x99, 0xce, 0x99, 0xce, 0xba, 0xd6, 0x13, 0x9d, 0x88, 0x42, 0x68, 0x42, 0x68, 0x42, 0xea, 0x52, 0x99, 0xce, 0x99, 0xce, 
  0x37, 0xbe, 0x99, 0xce, 0x4f, 0x7c, 0x68, 0x42, 0x68, 0x42, 0x68, 0x42, 0x53, 0x9d, 0x37, 0xbe, 0x37, 0xbe, 0xfa, 0xd6, 0xba, 0xd6, 0xee, 0x73, 0x68, 0x42, 0x68, 0x42, 0x68, 0x42, 0x74, 0xa5, 0x37, 0xbe, 
  0xda, 0xd6, 0x58, 0xc6, 0x70, 0x84, 0x68, 0x42, 0x68, 0x42, 0x68, 0x42, 0x53, 0x9d, 0xfb, 0xde, 0x57, 0xbe, 0x58, 0xc6, 0x78, 0xc6, 0x13, 0x9d, 0x68, 0x42, 0x68, 0x42, 0x68, 0x42, 0x90, 0x84, 0x16, 0xb6, 
  0x3c, 0xe7, 0x58, 0xc6, 0x2f, 0x7c, 0x68, 0x42, 0x68, 0x42, 0x68, 0x42, 0x54, 0xa5, 0x37, 0xbe, 0x37, 0xbe, 0xba, 0xd6, 0x37, 0xbe, 0xd1, 0x8c, 0x68, 0x42, 0x68, 0x42, 0x68, 0x42, 0x90, 0x84, 0x99, 0xce, 
  0x57, 0xbe, 0x78, 0xc6, 0x70, 0x84, 0x68, 0x42, 0x68, 0x42, 0x68, 0x42, 0x74, 0xa5, 0x78, 0xc6, 0xfb, 0xde, 0xda, 0xd6, 0x58, 0xc6, 0xac, 0x63, 0x68, 0x42, 0x68, 0x42, 0x68, 0x42, 0x33, 0x9d, 0x37, 0xbe, 
  0x37, 0xbe, 0xda, 0xd6, 0x4f, 0x7c, 0x68, 0x42, 0x68, 0x42, 0x68, 0x42, 0x70, 0x84, 0x78, 0xc6, 0x37, 0xbe, 0x78, 0xc6, 0x70, 0x84, 0x88, 0x42, 0x68, 0x42, 0x68, 0x42, 0x2b, 0x5b, 0xba, 0xd6, 0x58, 0xc6, 
  0x37, 0xbe, 0x58, 0xc6, 0x4f, 0x7c, 0x68, 0x42, 0x68, 0x42, 0x68, 0x42, 0x68, 0x42, 0x88, 0x42, 0x0a, 0x53, 0xa9, 0x4a, 0x68, 0x42, 0x68, 0x42, 0x68, 0x42, 0xa9, 0x4a, 0x94, 0xa5, 0x99, 0xce, 0x58, 0xc6, 
  0x99, 0xce, 0xb9, 0xce, 0x70, 0x84, 0x68, 0x42, 0x68, 0x42, 0x68, 0x42, 0x68, 0x42, 0x68, 0x42, 0x68, 0x42, 0x68, 0x42, 0x68, 0x42, 0x68, 0x42, 0x4b, 0x5b, 0xb5, 0xad, 0x16, 0xb6, 0xda, 0xd6, 0xb9, 0xce, 
  0x99, 0xce, 0x37, 0xbe, 0x4f, 0x7c, 0x68, 0x42, 0x68, 0x42, 0x68, 0x42, 0xd1, 0x8c, 0xb1, 0x8c, 0x4f, 0x7c, 0x2f, 0x7c, 0x90, 0x84, 0xd5, 0xad, 0xb9, 0xce, 0x17, 0xbe, 0xb9, 0xce, 0x37, 0xbe, 0x78, 0xc6, 
  0x78, 0xc6, 0x78, 0xc6, 0x4f, 0x7c, 0x68, 0x42, 0x68, 0x42, 0x68, 0x42, 0x95, 0xad, 0xfa, 0xd6, 0x58, 0xc6, 0x16, 0xb6, 0xda, 0xd6, 0x78, 0xc6, 0x78, 0xc6, 0x58, 0xc6, 0x58, 0xc6, 0xba, 0xd6, 0x57, 0xbe, 
  0x99, 0xce, 0xda, 0xd6, 0x2f, 0x7c, 0x68, 0x42, 0x68, 0x42, 0x68, 0x42, 0x94, 0xa5, 0x58, 0xc6, 0x58, 0xc6, 0x78, 0xc6, 0x99, 0xce, 0x3c, 0xe7, 0x58, 0xc6, 0x78, 0xc6, 0x99, 0xce, 0x99, 0xce, 0x99, 0xce, 
  0x58, 0xc6, 0x99, 0xce, 0x2f, 0x7c, 0x68, 0x42, 0x68, 0x42, 0x68, 0x42, 0x54, 0xa5, 0x78, 0xc6, 0xb9, 0xce, 0x57, 0xbe, 0x99, 0xce, 0x58, 0xc6, 0xba, 0xd6, 0x58, 0xc6, 0xda, 0xd6, 0x58, 0xc6, 0x37, 0xbe, 
  0x99, 0xce, 0x37, 0xbe, 0x2f, 0x7c, 0x68, 0x42, 0x68, 0x42, 0x68, 0x42, 0x94, 0xa5, 0x99, 0xce, 0x57, 0xbe, 0x78, 0xc6, 0xba, 0xd6, 0x58, 0xc6, 0x37, 0xbe, 0x37, 0xbe, 0xda, 0xd6, 0x78, 0xc6, 0x58, 0xc6, 
  0xf6, 0xb5, 0xda, 0xd6, 0xb5, 0xad, 0x74, 0xa5, 0x75, 0xad, 0x53, 0x9d, 0x17, 0xbe, 0x58, 0xc6, 0xba, 0xd6, 0x17, 0xbe, 0x58, 0xc6, 0xda, 0xd6, 0x37, 0xbe, 0x58, 0xc6, 0x78, 0xc6, 0x99, 0xce, 0x16, 0xb6, 
  0xf6, 0xb5, 0x17, 0xbe, 0xf6, 0xb5, 0xf6, 0xb5, 0xb5, 0xad, 0x58, 0xc6, 0x17, 0xbe, 0x58, 0xc6, 0x17, 0xbe, 0xf6, 0xb5, 0x58, 0xc6, 0xf6, 0xb5, 0x37, 0xbe, 0xf6, 0xb5, 0xf6, 0xb5, 0x17, 0xbe, 0x79, 0xce, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format: Red: 5 bit, Green: 6 bit, Blue: 5 bit BUT the 2 bytes are swapped*/
  0x84, 0x50, 0x8c, 0x91, 0x8c, 0xb1, 0x8c, 0x71, 0x84, 0x50, 0x8c, 0x71, 0x84, 0x50, 0x84, 0x70, 0x84, 0x50, 0xa5, 0x14, 0x94, 0xb2, 0x84, 0x50, 0x84, 0x50, 0x8c, 0x91, 0x84, 0x70, 0x9c, 0xf3, 0x84, 0x50, 
  0x9d, 0x13, 0xa5, 0x54, 0xa5, 0x54, 0xad, 0x95, 0xa5, 0x34, 0xa5, 0x34, 0xad, 0x95, 0xa5, 0x34, 0x9d, 0x13, 0x9d, 0x13, 0x94, 0xd2, 0xa5, 0x34, 0xa5, 0x34, 0xa5, 0x34, 0x94, 0xf2, 0x94, 0xf2, 0x94, 0xd2, 
  0xa5, 0x74, 0xb5, 0xb6, 0xbd, 0xf7, 0xad, 0xb5, 0xa5, 0x74, 0x9d, 0x13, 0x6b, 0xad, 0x52, 0xca, 0x4a, 0x89, 0x4a, 0xa9, 0x53, 0x0a, 0x7c, 0x0f, 0xa5, 0x74, 0xb5, 0xd6, 0xbd, 0xf7, 0x9d, 0x53, 0xb5, 0xd6, 
  0xce, 0x99, 0xbe, 0x17, 0xb5, 0xd6, 0xb5, 0xf6, 0x8c, 0xb1, 0x42, 0x68, 0x3a, 0x47, 0x3a, 0x47, 0x3a, 0x47, 0x3a, 0x47, 0x3a, 0x47, 0x3a, 0x47, 0x53, 0x0a, 0xb5, 0xb6, 0xb5, 0xf6, 0xbe, 0x37, 0xc6, 0x38, 
  0xc6, 0x58, 0xc6, 0x78, 0xbe, 0x37, 0xa5, 0x74, 0x42, 0x68, 0x3a, 0x67, 0x3a, 0x67, 0x53, 0x0a, 0x7c, 0x2f, 0x5b, 0x2b, 0x3a, 0x67, 0x3a, 0x67, 0x3a, 0x67, 0x6b, 0xad, 0xb6, 0x16, 0xc6, 0x78, 0xbe, 0x17, 
  0xc6, 0x58, 0xc6, 0x58, 0xad, 0xd5, 0x63, 0x6c, 0x42, 0x68, 0x42, 0x68, 0x4a, 0xc9, 0xc6, 0x58, 0xd6, 0xba, 0xb5, 0xf6, 0x52, 0xea, 0x42, 0x68, 0x42, 0x68, 0x42, 0xa8, 0xce, 0x99, 0xbe, 0x37, 0xc6, 0x78, 
  0xce, 0x99, 0xce, 0x99, 0xce, 0x99, 0x42, 0x88, 0x42, 0x68, 0x42, 0x68, 0x7c, 0x2f, 0xce, 0xb9, 0xc6, 0x58, 0xbe, 0x37, 0x6b, 0xcd, 0x42, 0x68, 0x42, 0x68, 0x42, 0x68, 0xbe, 0x17, 0xce, 0xb9, 0xc6, 0x78, 
  0xce, 0x99, 0xc6, 0x58, 0xa5, 0x54, 0x42, 0x68, 0x42, 0x68, 0x42, 0x68, 0x94, 0xf2, 0xc6, 0x78, 0xc6, 0x58, 0xce, 0xb9, 0x63, 0x6c, 0x42, 0x68, 0x42, 0x68, 0x42, 0xa8, 0xbe, 0x37, 0xc6, 0x78, 0xde, 0xfb, 
  0xbe, 0x37, 0xce, 0x99, 0x8c, 0xb1, 0x42, 0x68, 0x42, 0x68, 0x42, 0x68, 0xa5, 0x54, 0xbe, 0x57, 0xbe, 0x57, 0xce, 0xb9, 0x4a, 0xc9, 0x42, 0x68, 0x42, 0x68, 0x73, 0xee, 0xc6, 0x58, 0xc6, 0x58, 0xce, 0xb9, 
  0xbe, 0x37, 0xc6, 0x58, 0x84, 0x70, 0x42, 0x68, 0x42, 0x68, 0x42, 0x68, 0xa5, 0x74, 0xc6, 0x78, 0xd6, 0xba, 0x7c, 0x4f, 0x42, 0x68, 0x42, 0x68, 0x52, 0xea, 0xce, 0x99, 0xc6, 0x78, 0xb6, 0x16, 0xd6, 0xda, 
  0xce, 0x99, 0xce, 0x99, 0x7c, 0x2f, 0x42, 0x68, 0x42, 0x68, 0x42, 0x68, 0xa5, 0x74, 0x95, 0x12, 0x6b, 0xcd, 0x42, 0x68, 0x42, 0x68, 0x5b, 0x2b, 0xbe, 0x37, 0xbe, 0x57, 0xc6, 0x78, 0xce, 0x99, 0xce, 0x99, 
  0xc6, 0x78, 0xce, 0x99, 0x7c, 0x4f, 0x42, 0x68, 0x42, 0x68, 0x42, 0x68, 0xa5, 0x94, 0x42, 0x68, 0x42, 0x68, 0x42, 0x68, 0x4a, 0xc9, 0x95, 0x12, 0xc6, 0x58, 0xbe, 0x17, 0xde, 0xfb, 0xc6, 0x78, 0xc6, 0x58, 
  0xce, 0x99, 0xbe, 0x37, 0x7c, 0x2f, 0x42, 0x68, 0x42, 0x68, 0x42, 0x68, 0xa5, 0x94, 0x42, 0x68, 0x42, 0x68, 0x42, 0x68, 0x42, 0x68, 0x42, 0x68, 0x53, 0x2a, 0xad, 0x95, 0xc6, 0x78, 0xc6, 0x58, 0xce, 0xb9, 
  0xd6, 0xda, 0xc6, 0x78, 0x7c, 0x4f, 0x42, 0x68, 0x42, 0x68, 0x42, 0x68, 0x9d, 0x33, 0xce, 0x99, 0xb5, 0xf6, 0x7c, 0x4f, 0x42, 0x88, 0x42, 0x68, 0x42, 0x68, 0x42, 0xa8, 0xa5, 0x74, 0xc6, 0x78, 0xce, 0x99, 
  0xb6, 0x16, 0xdf, 0x1b, 0x84, 0x70, 0x42, 0x68, 0x42, 0x68, 0x42, 0x68, 0xa5, 0x54, 0xce, 0x99, 0xce, 0x99, 0xd6, 0xba, 0x9d, 0x13, 0x42, 0x88, 0x42, 0x68, 0x42, 0x68, 0x52, 0xea, 0xce, 0x99, 0xce, 0x99, 
  0xbe, 0x37, 0xce, 0x99, 0x7c, 0x4f, 0x42, 0x68, 0x42, 0x68, 0x42, 0x68, 0x9d, 0x53, 0xbe, 0x37, 0xbe, 0x37, 0xd6, 0xfa, 0xd6, 0xba, 0x73, 0xee, 0x42, 0x68, 0x42, 0x68, 0x42, 0x68, 0xa5, 0x74, 0xbe, 0x37, 
  0xd6, 0xda, 0xc6, 0x58, 0x84, 0x70, 0x42, 0x68, 0x42, 0x68, 0x42, 0x68, 0x9d, 0x53, 0xde, 0xfb, 0xbe, 0x57, 0xc6, 0x58, 0xc6, 0x78, 0x9d, 0x13, 0x42, 0x68, 0x42, 0x68, 0x42, 0x68, 0x84, 0x90, 0xb6, 0x16, 
  0xe7, 0x3c, 0xc6, 0x58, 0x7c, 0x2f, 0x42, 0x68, 0x42, 0x68, 0x42, 0x68, 0xa5, 0x54, 0xbe, 0x37, 0xbe, 0x37, 0xd6, 0xba, 0xbe, 0x37, 0x8c, 0xd1, 0x42, 0x68, 0x42, 0x68, 0x42, 0x68, 0x84, 0x90, 0xce, 0x99, 
  0xbe, 0x57, 0xc6, 0x78, 0x84, 0x70, 0x42, 0x68, 0x42, 0x68, 0x42, 0x68, 0xa5, 0x74, 0xc6, 0x78, 0xde, 0xfb, 0xd6, 0xda, 0xc6, 0x58, 0x63, 0xac, 0x42, 0x68, 0x42, 0x68, 0x42, 0x68, 0x9d, 0x33, 0xbe, 0x37, 
  0xbe, 0x37, 0xd6, 0xda, 0x7c, 0x4f, 0x42, 0x68, 0x42, 0x68, 0x42, 0x68, 0x84, 0x70, 0xc6, 0x78, 0xbe, 0x37, 0xc6, 0x78, 0x84, 0x70, 0x42, 0x88, 0x42, 0x68, 0x42, 0x68, 0x5b, 0x2b, 0xd6, 0xba, 0xc6, 0x58, 
  0xbe, 0x37, 0xc6, 0x58, 0x7c, 0x4f, 0x42, 0x68, 0x42, 0x68, 0x42, 0x68, 0x42, 0x68, 0x42, 0x88, 0x53, 0x0a, 0x4a, 0xa9, 0x42, 0x68, 0x42, 0x68, 0x42, 0x68, 0x4a, 0xa9, 0xa5, 0x94, 0xce, 0x99, 0xc6, 0x58, 
  0xce, 0x99, 0xce, 0xb9, 0x84, 0x70, 0x42, 0x68, 0x42, 0x68, 0x42, 0x68, 0x42, 0x68, 0x42, 0x68, 0x42, 0x68, 0x42, 0x68, 0x42, 0x68, 0x42, 0x68, 0x5b, 0x4b, 0xad, 0xb5, 0xb6, 0x16, 0xd6, 0xda, 0xce, 0xb9, 
  0xce, 0x99, 0xbe, 0x37, 0x7c, 0x4f, 0x42, 0x68, 0x42, 0x68, 0x42, 0x68, 0x8c, 0xd1, 0x8c, 0xb1, 0x7c, 0x4f, 0x7c, 0x2f, 0x84, 0x90, 0xad, 0xd5, 0xce, 0xb9, 0xbe, 0x17, 0xce, 0xb9, 0xbe, 0x37, 0xc6, 0x78, 
  0xc6, 0x78, 0xc6, 0x78, 0x7c, 0x4f, 0x42, 0x68, 0x42, 0x68, 0x42, 0x68, 0xad, 0x95, 0xd6, 0xfa, 0xc6, 0x58, 0xb6, 0x16, 0xd6, 0xda, 0xc6, 0x78, 0xc6, 0x78, 0xc6, 0x58, 0xc6, 0x58, 0xd6, 0xba, 0xbe, 0x57, 
  0xce, 0x99, 0xd6, 0xda, 0x7c, 0x2f, 0x42, 0x68, 0x42, 0x68, 0x42, 0x68, 0xa5, 0x94, 0xc6, 0x58, 0xc6, 0x58, 0xc6, 0x78, 0xce, 0x99, 0xe7, 0x3c, 0xc6, 0x58, 0xc6, 0x78, 0xce, 0x99, 0xce, 0x99, 0xce, 0x99, 
  0xc6, 0x58, 0xce, 0x99, 0x7c, 0x2f, 0x42, 0x68, 0x42, 0x68, 0x42, 0x68, 0xa5, 0x54, 0xc6, 0x78, 0xce, 0xb9, 0xbe, 0x57, 0xce, 0x99, 0xc6, 0x58, 0xd6, 0xba, 0xc6, 0x58, 0xd6, 0xda, 0xc6, 0x58, 0xbe, 0x37, 
  0xce, 0x99, 0xbe, 0x37, 0x7c, 0x2f, 0x42, 0x68, 0x42, 0x68, 0x42, 0x68, 0xa5, 0x94, 0xce, 0x99, 0xbe, 0x57, 0xc6, 0x78, 0xd6, 0xba, 0xc6, 0x58, 0xbe, 0x37, 0xbe, 0x37, 0xd6, 0xda, 0xc6, 0x78, 0xc6, 0x58, 
  0xb5, 0xf6, 0xd6, 0xda, 0xad, 0xb5, 0xa5, 0x74, 0xad, 0x75, 0x9d, 0x53, 0xbe, 0x17, 0xc6, 0x58, 0xd6, 0xba, 0xbe, 0x17, 0xc6, 0x58, 0xd6, 0xda, 0xbe, 0x37, 0xc6, 0x58, 0xc6, 0x78, 0xce, 0x99, 0xb6, 0x16, 
  0xb5, 0xf6, 0xbe, 0x17, 0xb5, 0xf6, 0xb5, 0xf6, 0xad, 0xb5, 0xc6, 0x58, 0xbe, 0x17, 0xc6, 0x58, 0xbe, 0x17, 0xb5, 0xf6, 0xc6, 0x58, 0xb5, 0xf6, 0xbe, 0x37, 0xb5, 0xf6, 0xb5, 0xf6, 0xbe, 0x17, 0xce, 0x79, 
#endif
#if LV_COLOR_DEPTH == 32
  /*Pixel format: Fix 0xFF: 8 bit, Red: 8 bit, Green: 8 bit, Blue: 8 bit*/
  0x7f, 0x87, 0x7f, 0xff, 0x8a, 0x91, 0x8a, 0xff, 0x8b, 0x92, 0x8b, 0xff, 0x86, 0x8d, 0x86, 0xff, 0x80, 0x88, 0x80, 0xff, 0x87, 0x8d, 0x87, 0xff, 0x80, 0x88, 0x80, 0xff, 0x82, 0x8a, 0x82, 0xff, 0x81, 0x89, 0x81, 0xff, 0x9c, 0x9f, 0x9c, 0xff, 0x8d, 0x93, 0x8d, 0xff, 0x7e, 0x87, 0x7e, 0xff, 0x82, 0x89, 0x82, 0xff, 0x88, 0x8e, 0x88, 0xff, 0x83, 0x8a, 0x83, 0xff, 0x99, 0x9d, 0x99, 0xff, 0x81, 0x89, 0x81, 0xff, 
  0x97, 0x9f, 0x97, 0xff, 0xa2, 0xa8, 0xa2, 0xff, 0xa3, 0xa9, 0xa3, 0xff, 0xa9, 0xae, 0xa9, 0xff, 0x9d, 0xa5, 0x9d, 0xff, 0x9c, 0xa4, 0x9c, 0xff, 0xa9, 0xaf, 0xa9, 0xff, 0x9c, 0xa4, 0x9c, 0xff, 0x97, 0x9f, 0x97, 0xff, 0x96, 0x9e, 0x96, 0xff, 0x8c, 0x97, 0x8c, 0xff, 0x9d, 0xa4, 0x9d, 0xff, 0x9d, 0xa4, 0x9d, 0xff, 0x9c, 0xa3, 0x9c, 0xff, 0x93, 0x9c, 0x93, 0xff, 0x93, 0x9b, 0x93, 0xff, 0x8f, 0x98, 0x8f, 0xff, 
  0xa0, 0xab, 0xa0, 0xff, 0xac, 0xb4, 0xac, 0xff, 0xb4, 0xbb, 0xb4, 0xff, 0xab, 0xb3, 0xab, 0xff, 0xa1, 0xab, 0xa1, 0xff, 0x99, 0xa1, 0x99, 0xff, 0x69, 0x75, 0x69, 0xff, 0x4c, 0x59, 0x4c, 0xff, 0x44, 0x51, 0x44, 0xff, 0x44, 0x52, 0x44, 0xff, 0x52, 0x5f, 0x52, 0xff, 0x76, 0x81, 0x76, 0xff, 0xa3, 0xac, 0xa3, 0xff, 0xb0, 0xb7, 0xb0, 0xff, 0xb4, 0xbb, 0xb4, 0xff, 0x9b, 0xa6, 0x9b, 0xff, 0xaf, 0xb7, 0xaf, 0xff, 
  0xc9, 0xcf, 0xc9, 0xff, 0xb5, 0xbf, 0xb5, 0xff, 0xad, 0xb8, 0xad, 0xff, 0xb3, 0xbd, 0xb3, 0xff, 0x87, 0x95, 0x87, 0xff, 0x3e, 0x4d, 0x3e, 0xff, 0x38, 0x47, 0x38, 0xff, 0x38, 0x47, 0x38, 0xff, 0x38, 0x47, 0x38, 0xff, 0x38, 0x47, 0x38, 0xff, 0x38, 0x47, 0x38, 0xff, 0x38, 0x47, 0x38, 0xff, 0x52, 0x60, 0x52, 0xff, 0xac, 0xb5, 0xac, 0xff, 0xb1, 0xbb, 0xb1, 0xff, 0xb9, 0xc2, 0xb9, 0xff, 0xbe, 0xc5, 0xbe, 0xff, 
  0xbc, 0xc6, 0xbc, 0xff, 0xc3, 0xcb, 0xc3, 0xff, 0xb8, 0xc2, 0xb8, 0xff, 0xa2, 0xad, 0xa2, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3b, 0x4a, 0x3b, 0xff, 0x3b, 0x4a, 0x3b, 0xff, 0x51, 0x5f, 0x51, 0xff, 0x74, 0x82, 0x74, 0xff, 0x55, 0x63, 0x55, 0xff, 0x3b, 0x4a, 0x3b, 0xff, 0x3b, 0x4a, 0x3b, 0xff, 0x3b, 0x4a, 0x3b, 0xff, 0x66, 0x74, 0x66, 0xff, 0xb3, 0xbe, 0xb3, 0xff, 0xc0, 0xca, 0xc0, 0xff, 0xb6, 0xc0, 0xb6, 0xff, 
  0xbd, 0xc8, 0xbd, 0xff, 0xbc, 0xc7, 0xbc, 0xff, 0xab, 0xb9, 0xab, 0xff, 0x5e, 0x6d, 0x5e, 0xff, 0x3c, 0x4c, 0x3c, 0xff, 0x3c, 0x4c, 0x3c, 0xff, 0x4b, 0x59, 0x4b, 0xff, 0xbd, 0xc6, 0xbd, 0xff, 0xcd, 0xd5, 0xcd, 0xff, 0xae, 0xbb, 0xae, 0xff, 0x4c, 0x5b, 0x4c, 0xff, 0x3c, 0x4c, 0x3c, 0xff, 0x3c, 0x4c, 0x3c, 0xff, 0x42, 0x52, 0x42, 0xff, 0xc4, 0xce, 0xc4, 0xff, 0xb8, 0xc3, 0xb8, 0xff, 0xc3, 0xcc, 0xc3, 0xff, 
  0xc8, 0xd1, 0xc8, 0xff, 0xc7, 0xd0, 0xc7, 0xff, 0xc8, 0xd0, 0xc8, 0xff, 0x3f, 0x4e, 0x3f, 0xff, 0x3d, 0x4c, 0x3d, 0xff, 0x3d, 0x4c, 0x3d, 0xff, 0x77, 0x84, 0x77, 0xff, 0xcb, 0xd3, 0xcb, 0xff, 0xbd, 0xc7, 0xbd, 0xff, 0xb8, 0xc3, 0xb8, 0xff, 0x68, 0x76, 0x68, 0xff, 0x3d, 0x4c, 0x3d, 0xff, 0x3d, 0x4c, 0x3d, 0xff, 0x3d, 0x4c, 0x3d, 0xff, 0xb7, 0xc1, 0xb7, 0xff, 0xcb, 0xd3, 0xcb, 0xff, 0xc3, 0xcd, 0xc3, 0xff, 
  0xc6, 0xcf, 0xc6, 0xff, 0xbe, 0xc9, 0xbe, 0xff, 0x9c, 0xa8, 0x9c, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x8e, 0x9b, 0x8e, 0xff, 0xc0, 0xca, 0xc0, 0xff, 0xbd, 0xc7, 0xbd, 0xff, 0xca, 0xd3, 0xca, 0xff, 0x5e, 0x6d, 0x5e, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x43, 0x53, 0x43, 0xff, 0xb6, 0xc2, 0xb6, 0xff, 0xc2, 0xcc, 0xc2, 0xff, 0xd4, 0xdb, 0xd4, 0xff, 
  0xb7, 0xc3, 0xb7, 0xff, 0xc5, 0xce, 0xc5, 0xff, 0x85, 0x93, 0x85, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x9d, 0xa8, 0x9d, 0xff, 0xba, 0xc6, 0xba, 0xff, 0xbb, 0xc6, 0xbb, 0xff, 0xcb, 0xd2, 0xcb, 0xff, 0x46, 0x56, 0x46, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x6c, 0x7a, 0x6c, 0xff, 0xbc, 0xc7, 0xbc, 0xff, 0xbe, 0xc9, 0xbe, 0xff, 0xca, 0xd3, 0xca, 0xff, 
  0xb7, 0xc3, 0xb7, 0xff, 0xbf, 0xc9, 0xbf, 0xff, 0x80, 0x8d, 0x80, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x9f, 0xac, 0x9f, 0xff, 0xbf, 0xca, 0xbf, 0xff, 0xcc, 0xd4, 0xcc, 0xff, 0x78, 0x86, 0x78, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x4c, 0x5c, 0x4c, 0xff, 0xc7, 0xd0, 0xc7, 0xff, 0xc0, 0xca, 0xc0, 0xff, 0xb3, 0xbf, 0xb3, 0xff, 0xd1, 0xd9, 0xd1, 0xff, 
  0xc7, 0xd1, 0xc7, 0xff, 0xc6, 0xcf, 0xc6, 0xff, 0x76, 0x84, 0x76, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0xa2, 0xac, 0xa2, 0xff, 0x92, 0xa0, 0x92, 0xff, 0x6b, 0x79, 0x6b, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x56, 0x65, 0x56, 0xff, 0xb9, 0xc2, 0xb9, 0xff, 0xbb, 0xc6, 0xbb, 0xff, 0xc0, 0xca, 0xc0, 0xff, 0xc5, 0xcf, 0xc5, 0xff, 0xc8, 0xd1, 0xc8, 0xff, 
  0xc0, 0xca, 0xc0, 0xff, 0xc6, 0xcf, 0xc6, 0xff, 0x7a, 0x88, 0x7a, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0xa3, 0xae, 0xa3, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x46, 0x57, 0x46, 0xff, 0x93, 0xa0, 0x93, 0xff, 0xbd, 0xc8, 0xbd, 0xff, 0xb5, 0xc1, 0xb5, 0xff, 0xd6, 0xdd, 0xd6, 0xff, 0xc0, 0xca, 0xc0, 0xff, 0xbe, 0xc8, 0xbe, 0xff, 
  0xc4, 0xce, 0xc4, 0xff, 0xb7, 0xc3, 0xb7, 0xff, 0x76, 0x84, 0x76, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0xa3, 0xae, 0xa3, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x53, 0x62, 0x53, 0xff, 0xa6, 0xb1, 0xa6, 0xff, 0xc2, 0xcc, 0xc2, 0xff, 0xbe, 0xc8, 0xbe, 0xff, 0xca, 0xd3, 0xca, 0xff, 
  0xcf, 0xd7, 0xcf, 0xff, 0xc1, 0xcb, 0xc1, 0xff, 0x77, 0x86, 0x77, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x96, 0xa4, 0x96, 0xff, 0xc5, 0xcf, 0xc5, 0xff, 0xb3, 0xbd, 0xb3, 0xff, 0x78, 0x86, 0x78, 0xff, 0x3f, 0x50, 0x3f, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x42, 0x52, 0x42, 0xff, 0x9f, 0xac, 0x9f, 0xff, 0xc0, 0xca, 0xc0, 0xff, 0xc4, 0xce, 0xc4, 0xff, 
  0xb2, 0xbf, 0xb2, 0xff, 0xd9, 0xe0, 0xd9, 0xff, 0x7e, 0x8b, 0x7e, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x9c, 0xa9, 0x9c, 0xff, 0xc6, 0xd0, 0xc6, 0xff, 0xc7, 0xd1, 0xc7, 0xff, 0xcd, 0xd5, 0xcd, 0xff, 0x95, 0xa1, 0x95, 0xff, 0x3f, 0x50, 0x3f, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x4e, 0x5d, 0x4e, 0xff, 0xc6, 0xcf, 0xc6, 0xff, 0xc4, 0xce, 0xc4, 0xff, 
  0xb9, 0xc5, 0xb9, 0xff, 0xc6, 0xcf, 0xc6, 0xff, 0x78, 0x86, 0x78, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x9b, 0xa8, 0x9b, 0xff, 0xb9, 0xc5, 0xb9, 0xff, 0xb7, 0xc3, 0xb7, 0xff, 0xd3, 0xda, 0xd3, 0xff, 0xcd, 0xd5, 0xcd, 0xff, 0x6e, 0x7c, 0x6e, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x9f, 0xaa, 0x9f, 0xff, 0xb9, 0xc5, 0xb9, 0xff, 
  0xd1, 0xd9, 0xd1, 0xff, 0xbd, 0xc8, 0xbd, 0xff, 0x7d, 0x8a, 0x7d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x9b, 0xa8, 0x9b, 0xff, 0xd5, 0xdc, 0xd5, 0xff, 0xbb, 0xc7, 0xbb, 0xff, 0xbc, 0xc8, 0xbc, 0xff, 0xc0, 0xcb, 0xc0, 0xff, 0x94, 0xa1, 0x94, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x81, 0x8e, 0x81, 0xff, 0xb2, 0xbf, 0xb2, 0xff, 
  0xdc, 0xe2, 0xdc, 0xff, 0xbd, 0xc8, 0xbd, 0xff, 0x75, 0x84, 0x75, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x9c, 0xa8, 0x9c, 0xff, 0xba, 0xc5, 0xba, 0xff, 0xb9, 0xc5, 0xb9, 0xff, 0xcd, 0xd5, 0xcd, 0xff, 0xb7, 0xc3, 0xb7, 0xff, 0x89, 0x97, 0x89, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x83, 0x90, 0x83, 0xff, 0xc8, 0xd1, 0xc8, 0xff, 
  0xbb, 0xc6, 0xbb, 0xff, 0xc3, 0xcd, 0xc3, 0xff, 0x7c, 0x8a, 0x7c, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x9e, 0xaa, 0x9e, 0xff, 0xc2, 0xcc, 0xc2, 0xff, 0xd5, 0xdc, 0xd5, 0xff, 0xd0, 0xd8, 0xd0, 0xff, 0xbd, 0xc8, 0xbd, 0xff, 0x63, 0x73, 0x63, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x98, 0xa5, 0x98, 0xff, 0xb7, 0xc3, 0xb7, 0xff, 
  0xb9, 0xc4, 0xb9, 0xff, 0xd1, 0xd9, 0xd1, 0xff, 0x78, 0x87, 0x78, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x80, 0x8d, 0x80, 0xff, 0xc3, 0xcb, 0xc3, 0xff, 0xb6, 0xc2, 0xb6, 0xff, 0xc3, 0xcd, 0xc3, 0xff, 0x7e, 0x8b, 0x7e, 0xff, 0x3e, 0x4e, 0x3e, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x54, 0x63, 0x54, 0xff, 0xcc, 0xd4, 0xcc, 0xff, 0xbd, 0xc8, 0xbd, 0xff, 
  0xb8, 0xc4, 0xb8, 0xff, 0xbf, 0xc9, 0xbf, 0xff, 0x79, 0x87, 0x79, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x42, 0x51, 0x42, 0xff, 0x50, 0x60, 0x50, 0xff, 0x45, 0x55, 0x45, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x45, 0x55, 0x45, 0xff, 0xa3, 0xb0, 0xa3, 0xff, 0xc7, 0xd0, 0xc7, 0xff, 0xbf, 0xc9, 0xbf, 0xff, 
  0xc8, 0xd1, 0xc8, 0xff, 0xc8, 0xd2, 0xc8, 0xff, 0x7d, 0x8a, 0x7d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x58, 0x67, 0x58, 0xff, 0xaa, 0xb5, 0xaa, 0xff, 0xb2, 0xbf, 0xb2, 0xff, 0xd0, 0xd8, 0xd0, 0xff, 0xca, 0xd3, 0xca, 0xff, 
  0xc4, 0xce, 0xc4, 0xff, 0xba, 0xc5, 0xba, 0xff, 0x7a, 0x88, 0x7a, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x89, 0x97, 0x89, 0xff, 0x86, 0x95, 0x86, 0xff, 0x78, 0x86, 0x78, 0xff, 0x74, 0x82, 0x74, 0xff, 0x80, 0x8e, 0x80, 0xff, 0xab, 0xb6, 0xab, 0xff, 0xca, 0xd3, 0xca, 0xff, 0xb4, 0xc1, 0xb4, 0xff, 0xc8, 0xd2, 0xc8, 0xff, 0xb7, 0xc3, 0xb7, 0xff, 0xc0, 0xca, 0xc0, 0xff, 
  0xc1, 0xcb, 0xc1, 0xff, 0xc3, 0xcd, 0xc3, 0xff, 0x79, 0x87, 0x79, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0xa5, 0xb0, 0xa5, 0xff, 0xd2, 0xda, 0xd2, 0xff, 0xbe, 0xc8, 0xbe, 0xff, 0xb1, 0xbe, 0xb1, 0xff, 0xd1, 0xd9, 0xd1, 0xff, 0xc0, 0xca, 0xc0, 0xff, 0xc0, 0xcb, 0xc0, 0xff, 0xbf, 0xc9, 0xbf, 0xff, 0xbd, 0xc8, 0xbd, 0xff, 0xcc, 0xd4, 0xcc, 0xff, 0xbb, 0xc7, 0xbb, 0xff, 
  0xc5, 0xcf, 0xc5, 0xff, 0xd1, 0xd9, 0xd1, 0xff, 0x76, 0x85, 0x76, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0xa2, 0xaf, 0xa2, 0xff, 0xbc, 0xc7, 0xbc, 0xff, 0xbf, 0xc9, 0xbf, 0xff, 0xbf, 0xca, 0xbf, 0xff, 0xc8, 0xd1, 0xc8, 0xff, 0xdf, 0xe4, 0xdf, 0xff, 0xbe, 0xc8, 0xbe, 0xff, 0xc2, 0xcc, 0xc2, 0xff, 0xc4, 0xce, 0xc4, 0xff, 0xc7, 0xd1, 0xc7, 0xff, 0xc6, 0xcf, 0xc6, 0xff, 
  0xbc, 0xc7, 0xbc, 0xff, 0xc6, 0xd0, 0xc6, 0xff, 0x78, 0x85, 0x78, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x3d, 0x4d, 0x3d, 0xff, 0x9c, 0xa8, 0x9c, 0xff, 0xbf, 0xca, 0xbf, 0xff, 0xcb, 0xd3, 0xcb, 0xff, 0xba, 0xc6, 0xba, 0xff, 0xc7, 0xd1, 0xc7, 0xff, 0xbe, 0xc9, 0xbe, 0xff, 0xcc, 0xd4, 0xcc, 0xff, 0xbc, 0xc7, 0xbc, 0xff, 0xce, 0xd6, 0xce, 0xff, 0xbd, 0xc8, 0xbd, 0xff, 0xb6, 0xc2, 0xb6, 0xff, 
  0xc9, 0xd1, 0xc9, 0xff, 0xb8, 0xc3, 0xb8, 0xff, 0x75, 0x82, 0x75, 0xff, 0x3c, 0x4c, 0x3c, 0xff, 0x3c, 0x4c, 0x3c, 0xff, 0x3c, 0x4c, 0x3c, 0xff, 0xa3, 0xae, 0xa3, 0xff, 0xc6, 0xd0, 0xc6, 0xff, 0xbb, 0xc6, 0xbb, 0xff, 0xbf, 0xca, 0xbf, 0xff, 0xcc, 0xd3, 0xcc, 0xff, 0xbc, 0xc6, 0xbc, 0xff, 0xb8, 0xc4, 0xb8, 0xff, 0xba, 0xc5, 0xba, 0xff, 0xd3, 0xd9, 0xd3, 0xff, 0xc0, 0xca, 0xc0, 0xff, 0xbd, 0xc8, 0xbd, 0xff, 
  0xb1, 0xbd, 0xb1, 0xff, 0xcf, 0xd6, 0xcf, 0xff, 0xa8, 0xb4, 0xa8, 0xff, 0x9f, 0xaa, 0x9f, 0xff, 0xa5, 0xad, 0xa5, 0xff, 0x9b, 0xa6, 0x9b, 0xff, 0xb7, 0xbf, 0xb7, 0xff, 0xbc, 0xc6, 0xbc, 0xff, 0xcd, 0xd4, 0xcd, 0xff, 0xb5, 0xc1, 0xb5, 0xff, 0xbf, 0xc8, 0xbf, 0xff, 0xd1, 0xd8, 0xd1, 0xff, 0xba, 0xc4, 0xba, 0xff, 0xbc, 0xc6, 0xbc, 0xff, 0xc2, 0xca, 0xc2, 0xff, 0xc8, 0xcf, 0xc8, 0xff, 0xb2, 0xbe, 0xb2, 0xff, 
  0xb3, 0xbd, 0xb3, 0xff, 0xb6, 0xbf, 0xb6, 0xff, 0xb3, 0xbc, 0xb3, 0xff, 0xb1, 0xbb, 0xb1, 0xff, 0xa9, 0xb5, 0xa9, 0xff, 0xbe, 0xc7, 0xbe, 0xff, 0xb7, 0xc0, 0xb7, 0xff, 0xbe, 0xc6, 0xbe, 0xff, 0xb6, 0xbf, 0xb6, 0xff, 0xb1, 0xbb, 0xb1, 0xff, 0xc0, 0xc8, 0xc0, 0xff, 0xae, 0xba, 0xae, 0xff, 0xbb, 0xc3, 0xbb, 0xff, 0xb0, 0xbb, 0xb0, 0xff, 0xb3, 0xbd, 0xb3, 0xff, 0xb8, 0xc1, 0xb8, 0xff, 0xc4, 0xcb, 0xc4, 0xff, 
#endif
};

const lv_img_dsc_t ui_theme_casio_on_layer_rsym = {
  .header.cf = LV_IMG_CF_TRUE_COLOR,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 17,
  .header.h = 29,
  .data_size = 493 * LV_COLOR_SIZE / 8,
  .data = ui_theme_casio_on_layer_rsym_map,
};
