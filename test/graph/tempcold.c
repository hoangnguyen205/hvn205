#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#else
#include "lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_TEMPCOLD
#define LV_ATTRIBUTE_IMG_TEMPCOLD
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_TEMPCOLD uint8_t tempcold_map[] = {
#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
  /*Pixel format: Blue: 2 bit, Green: 3 bit, Red: 3 bit*/
  0xff, 0xff, 0xff, 0xff, 0xdb, 0xb6, 0x92, 0xb6, 0xdb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0x92, 0x6d, 0x6e, 0x6e, 0x6d, 0x6d, 0xb7, 0xff, 0xdb, 0xb7, 0xb7, 0xb7, 0xff, 
  0xff, 0xff, 0xdb, 0x49, 0xb7, 0xff, 0xff, 0xff, 0x92, 0x6e, 0xdb, 0xdb, 0xb6, 0xb6, 0xb7, 0xff, 
  0xff, 0xff, 0xb6, 0x6d, 0xdb, 0xff, 0xff, 0xff, 0xb7, 0x6e, 0xb7, 0x92, 0x6e, 0x92, 0xdb, 0xff, 
  0xff, 0xff, 0x92, 0x6d, 0xdb, 0xff, 0xff, 0xff, 0xb7, 0x92, 0xdb, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xb6, 0x6d, 0xdb, 0xff, 0xff, 0xff, 0xb7, 0x6e, 0xb7, 0x6e, 0x49, 0x49, 0x49, 0xdb, 
  0xff, 0xff, 0xb6, 0x6d, 0xdb, 0xff, 0xff, 0xff, 0xb7, 0x92, 0xdb, 0xff, 0xdb, 0xdb, 0xff, 0xff, 
  0xff, 0xff, 0xb6, 0x6d, 0xdb, 0xff, 0xff, 0xff, 0xb7, 0x92, 0xdb, 0xb7, 0x92, 0xb6, 0xff, 0xff, 
  0xff, 0xff, 0xb6, 0x6d, 0xdb, 0xff, 0xff, 0xff, 0xb7, 0x6e, 0xb7, 0x92, 0x49, 0x49, 0x6e, 0xdb, 
  0xff, 0xff, 0xb6, 0x6d, 0xdb, 0xff, 0xff, 0xff, 0xb7, 0x92, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xff, 
  0xff, 0xff, 0xb6, 0x6d, 0xdb, 0xff, 0xff, 0xff, 0xb7, 0x92, 0xb7, 0x92, 0x49, 0x6d, 0xdb, 0xff, 
  0xff, 0xff, 0xb6, 0x6d, 0xdb, 0xff, 0xff, 0xff, 0xb7, 0x6e, 0xdb, 0xdb, 0xb6, 0xb6, 0xdb, 0xff, 
  0xff, 0xff, 0xb6, 0x6d, 0xb7, 0x93, 0x73, 0xb7, 0xb6, 0x92, 0xdb, 0xb6, 0x6e, 0x6e, 0x92, 0xdb, 
  0xff, 0xff, 0xb6, 0x6d, 0x92, 0x4e, 0x2a, 0x93, 0x92, 0x92, 0xdb, 0xb6, 0x6e, 0x92, 0xdb, 0xff, 
  0xff, 0xff, 0xb6, 0x6d, 0x92, 0x4f, 0x2a, 0x93, 0x92, 0x92, 0xdb, 0xb7, 0x92, 0x92, 0xdb, 0xff, 
  0xff, 0xff, 0x92, 0x6d, 0x92, 0x4f, 0x2a, 0x93, 0x92, 0x6e, 0xdb, 0xb6, 0x92, 0x92, 0x92, 0xdb, 
  0xff, 0xff, 0x6e, 0x6e, 0x93, 0x4e, 0x2a, 0x93, 0x97, 0x6e, 0x92, 0xb6, 0xb6, 0xb6, 0xb6, 0xff, 
  0xff, 0x6e, 0x6e, 0xb7, 0x73, 0x4a, 0x2a, 0x4f, 0x93, 0x92, 0x6d, 0x92, 0xff, 0xff, 0xff, 0xff, 
  0xb7, 0x6d, 0xb7, 0x6f, 0x2a, 0x2a, 0x2a, 0x4a, 0x6f, 0xb7, 0x92, 0x6d, 0xdb, 0xff, 0xff, 0xff, 
  0x6e, 0x92, 0x6f, 0x4a, 0x2a, 0x2a, 0x2a, 0x2a, 0x73, 0xb7, 0x93, 0x92, 0x92, 0xff, 0xff, 0xff, 
  0x6d, 0xb6, 0x6f, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x93, 0xb7, 0x93, 0x92, 0x92, 0xff, 0xff, 0xff, 
  0x92, 0x6e, 0x93, 0x4a, 0x2a, 0x2a, 0x2a, 0x4a, 0x73, 0xb7, 0x97, 0x6e, 0xb7, 0xff, 0xff, 0xff, 
  0xff, 0x49, 0x92, 0x93, 0x6f, 0x4a, 0x4a, 0x4e, 0x93, 0x93, 0x6e, 0x6e, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xdb, 0x49, 0x49, 0x92, 0xbb, 0xdb, 0xb7, 0x92, 0x4d, 0x6e, 0xdb, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xb6, 0x6d, 0x49, 0x49, 0x49, 0x6e, 0xb7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Blue: 5 bit, Green: 6 bit, Red: 5 bit*/
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9e, 0xf7, 0xf7, 0xbd, 0xb2, 0x94, 0x51, 0x8c, 0x14, 0xa5, 0x7a, 0xd6, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x9e, 0xf7, 0x51, 0x8c, 0xab, 0x5a, 0x0c, 0x63, 0x6d, 0x6b, 0xcb, 0x5a, 0xcb, 0x5a, 0x55, 0xad, 0x3d, 0xef, 0xf7, 0xbd, 0x34, 0xa5, 0x34, 0xa5, 0x75, 0xad, 0xfb, 0xde, 
  0xff, 0xff, 0xff, 0xff, 0xb7, 0xbd, 0x8a, 0x52, 0x96, 0xb5, 0xbe, 0xf7, 0xff, 0xff, 0x7d, 0xef, 0x51, 0x8c, 0x6e, 0x73, 0x79, 0xce, 0xb6, 0xb5, 0xd3, 0x9c, 0xd3, 0x9c, 0x35, 0xad, 0xdb, 0xde, 
  0xff, 0xff, 0xff, 0xff, 0xb2, 0x94, 0xcb, 0x5a, 0x59, 0xce, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x34, 0xa5, 0x8e, 0x73, 0x96, 0xb5, 0x92, 0x94, 0x2d, 0x6b, 0xcf, 0x7b, 0x38, 0xc6, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x92, 0x94, 0xcb, 0x5a, 0x59, 0xce, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x34, 0xa5, 0x8e, 0x73, 0x59, 0xce, 0xfc, 0xe6, 0x9a, 0xd6, 0xba, 0xd6, 0x3c, 0xe7, 0xdf, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x92, 0x94, 0xcb, 0x5a, 0x59, 0xce, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x34, 0xa5, 0x8e, 0x73, 0x35, 0xad, 0x8e, 0x73, 0xe7, 0x39, 0xe7, 0x39, 0x69, 0x4a, 0xb6, 0xb5, 
  0xff, 0xff, 0xff, 0xff, 0x92, 0x94, 0xcb, 0x5a, 0x59, 0xce, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x34, 0xa5, 0x8e, 0x73, 0x38, 0xc6, 0xba, 0xd6, 0x38, 0xc6, 0x59, 0xce, 0x5d, 0xef, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x92, 0x94, 0xcb, 0x5a, 0x59, 0xce, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x34, 0xa5, 0x8e, 0x73, 0xd7, 0xbd, 0x75, 0xad, 0x71, 0x8c, 0xd3, 0x9c, 0xba, 0xd6, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x92, 0x94, 0xcb, 0x5a, 0x59, 0xce, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x34, 0xa5, 0x8e, 0x73, 0x55, 0xad, 0xf0, 0x83, 0x6a, 0x52, 0x6a, 0x52, 0x0c, 0x63, 0x18, 0xc6, 
  0xff, 0xff, 0xff, 0xff, 0x92, 0x94, 0xcb, 0x5a, 0x59, 0xce, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x34, 0xa5, 0x8e, 0x73, 0x18, 0xc6, 0x79, 0xce, 0xd7, 0xbd, 0xd7, 0xbd, 0x18, 0xc6, 0x5d, 0xef, 
  0xff, 0xff, 0xff, 0xff, 0x92, 0x94, 0xcb, 0x5a, 0x59, 0xce, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x34, 0xa5, 0x8e, 0x73, 0x55, 0xad, 0x8e, 0x73, 0xe7, 0x39, 0x8a, 0x52, 0xb6, 0xb5, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x92, 0x94, 0xcb, 0x5a, 0x59, 0xce, 0x7f, 0xf7, 0x5e, 0xef, 0xbf, 0xf7, 0x34, 0xa5, 0x8e, 0x73, 0xd7, 0xbd, 0x96, 0xb5, 0xb3, 0x9c, 0xd3, 0x9c, 0xd7, 0xbd, 0x5d, 0xef, 
  0xff, 0xff, 0xff, 0xff, 0x92, 0x94, 0xcb, 0x5a, 0x16, 0xa5, 0x98, 0x8c, 0xb6, 0x6b, 0x9a, 0xad, 0xb3, 0x94, 0x8e, 0x73, 0x96, 0xb5, 0xb3, 0x9c, 0x6e, 0x73, 0x6e, 0x73, 0xcf, 0x7b, 0x59, 0xce, 
  0xff, 0xff, 0xff, 0xff, 0x92, 0x94, 0xcb, 0x5a, 0x14, 0x84, 0xd4, 0x4a, 0xb2, 0x21, 0x17, 0x7c, 0x53, 0x8c, 0x8e, 0x73, 0x96, 0xb5, 0xb3, 0x9c, 0x8e, 0x73, 0xef, 0x7b, 0xd7, 0xbd, 0xbe, 0xf7, 
  0xff, 0xff, 0xff, 0xff, 0x92, 0x94, 0xcb, 0x5a, 0x14, 0x84, 0xd4, 0x4a, 0x92, 0x21, 0x17, 0x7c, 0x52, 0x8c, 0x8e, 0x73, 0xb7, 0xbd, 0x14, 0xa5, 0x10, 0x84, 0x72, 0x94, 0x7a, 0xd6, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x71, 0x94, 0xcb, 0x5a, 0x14, 0x84, 0xd4, 0x4a, 0x92, 0x21, 0x17, 0x7c, 0x52, 0x8c, 0x8e, 0x73, 0x96, 0xb5, 0xd3, 0x9c, 0xae, 0x73, 0xae, 0x73, 0x10, 0x84, 0x59, 0xce, 
  0xff, 0xff, 0xfc, 0xe6, 0x2c, 0x63, 0x2c, 0x63, 0x55, 0x84, 0xb4, 0x4a, 0xb1, 0x21, 0xf7, 0x73, 0x94, 0x94, 0x4d, 0x6b, 0x30, 0x84, 0xd3, 0x9c, 0x92, 0x94, 0x92, 0x94, 0xd3, 0x9c, 0xbb, 0xde, 
  0x9e, 0xf7, 0x2d, 0x6b, 0x6e, 0x73, 0xb5, 0x94, 0x95, 0x6b, 0x12, 0x3a, 0x91, 0x29, 0x94, 0x4a, 0x57, 0x84, 0x12, 0x84, 0xab, 0x5a, 0x51, 0x8c, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x55, 0xad, 0xab, 0x5a, 0x17, 0x9d, 0x55, 0x63, 0xf2, 0x31, 0xb1, 0x29, 0xb1, 0x29, 0x12, 0x32, 0x55, 0x63, 0xd8, 0x94, 0x52, 0x8c, 0x0c, 0x63, 0x18, 0xc6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x4d, 0x6b, 0x92, 0x94, 0x74, 0x63, 0x12, 0x32, 0xb1, 0x29, 0xb1, 0x29, 0xb1, 0x29, 0xd2, 0x31, 0xd6, 0x73, 0x5a, 0xa5, 0x96, 0x8c, 0xf0, 0x83, 0x72, 0x94, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xec, 0x62, 0xd3, 0x9c, 0x34, 0x5b, 0xf2, 0x31, 0xb1, 0x29, 0xb1, 0x29, 0xb1, 0x29, 0xd2, 0x29, 0xf6, 0x73, 0x7a, 0xad, 0x76, 0x8c, 0x30, 0x84, 0x51, 0x8c, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x51, 0x8c, 0x6d, 0x6b, 0x76, 0x84, 0x93, 0x42, 0xb2, 0x29, 0xb1, 0x29, 0xb1, 0x29, 0x12, 0x32, 0x96, 0x6b, 0x39, 0xa5, 0x95, 0x94, 0x6e, 0x6b, 0x55, 0xad, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xdb, 0xde, 0x8a, 0x52, 0x31, 0x8c, 0x76, 0x8c, 0x35, 0x5b, 0x53, 0x3a, 0x12, 0x32, 0xb4, 0x4a, 0xf7, 0x7b, 0x95, 0x8c, 0x2d, 0x63, 0x6d, 0x6b, 0x3c, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xf8, 0xc5, 0x49, 0x4a, 0x8a, 0x52, 0x93, 0x8c, 0x99, 0xb5, 0xda, 0xb5, 0x78, 0xad, 0x11, 0x84, 0x8a, 0x52, 0x6e, 0x73, 0x9a, 0xd6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x5d, 0xef, 0xf3, 0x9c, 0xab, 0x5a, 0xc7, 0x39, 0xa6, 0x31, 0xe8, 0x41, 0x2c, 0x63, 0x96, 0xb5, 0x9e, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format: Blue: 5 bit, Green: 6 bit, Red: 5 bit BUT the 2 bytes are swapped*/
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0x9e, 0xbd, 0xf7, 0x94, 0xb2, 0x8c, 0x51, 0xa5, 0x14, 0xd6, 0x7a, 0xff, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xf7, 0x9e, 0x8c, 0x51, 0x5a, 0xab, 0x63, 0x0c, 0x6b, 0x6d, 0x5a, 0xcb, 0x5a, 0xcb, 0xad, 0x55, 0xef, 0x3d, 0xbd, 0xf7, 0xa5, 0x34, 0xa5, 0x34, 0xad, 0x75, 0xde, 0xfb, 
  0xff, 0xff, 0xff, 0xff, 0xbd, 0xb7, 0x52, 0x8a, 0xb5, 0x96, 0xf7, 0xbe, 0xff, 0xff, 0xef, 0x7d, 0x8c, 0x51, 0x73, 0x6e, 0xce, 0x79, 0xb5, 0xb6, 0x9c, 0xd3, 0x9c, 0xd3, 0xad, 0x35, 0xde, 0xdb, 
  0xff, 0xff, 0xff, 0xff, 0x94, 0xb2, 0x5a, 0xcb, 0xce, 0x59, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa5, 0x34, 0x73, 0x8e, 0xb5, 0x96, 0x94, 0x92, 0x6b, 0x2d, 0x7b, 0xcf, 0xc6, 0x38, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x94, 0x92, 0x5a, 0xcb, 0xce, 0x59, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa5, 0x34, 0x73, 0x8e, 0xce, 0x59, 0xe6, 0xfc, 0xd6, 0x9a, 0xd6, 0xba, 0xe7, 0x3c, 0xff, 0xdf, 
  0xff, 0xff, 0xff, 0xff, 0x94, 0x92, 0x5a, 0xcb, 0xce, 0x59, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa5, 0x34, 0x73, 0x8e, 0xad, 0x35, 0x73, 0x8e, 0x39, 0xe7, 0x39, 0xe7, 0x4a, 0x69, 0xb5, 0xb6, 
  0xff, 0xff, 0xff, 0xff, 0x94, 0x92, 0x5a, 0xcb, 0xce, 0x59, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa5, 0x34, 0x73, 0x8e, 0xc6, 0x38, 0xd6, 0xba, 0xc6, 0x38, 0xce, 0x59, 0xef, 0x5d, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x94, 0x92, 0x5a, 0xcb, 0xce, 0x59, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa5, 0x34, 0x73, 0x8e, 0xbd, 0xd7, 0xad, 0x75, 0x8c, 0x71, 0x9c, 0xd3, 0xd6, 0xba, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x94, 0x92, 0x5a, 0xcb, 0xce, 0x59, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa5, 0x34, 0x73, 0x8e, 0xad, 0x55, 0x83, 0xf0, 0x52, 0x6a, 0x52, 0x6a, 0x63, 0x0c, 0xc6, 0x18, 
  0xff, 0xff, 0xff, 0xff, 0x94, 0x92, 0x5a, 0xcb, 0xce, 0x59, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa5, 0x34, 0x73, 0x8e, 0xc6, 0x18, 0xce, 0x79, 0xbd, 0xd7, 0xbd, 0xd7, 0xc6, 0x18, 0xef, 0x5d, 
  0xff, 0xff, 0xff, 0xff, 0x94, 0x92, 0x5a, 0xcb, 0xce, 0x59, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa5, 0x34, 0x73, 0x8e, 0xad, 0x55, 0x73, 0x8e, 0x39, 0xe7, 0x52, 0x8a, 0xb5, 0xb6, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x94, 0x92, 0x5a, 0xcb, 0xce, 0x59, 0xf7, 0x7f, 0xef, 0x5e, 0xf7, 0xbf, 0xa5, 0x34, 0x73, 0x8e, 0xbd, 0xd7, 0xb5, 0x96, 0x9c, 0xb3, 0x9c, 0xd3, 0xbd, 0xd7, 0xef, 0x5d, 
  0xff, 0xff, 0xff, 0xff, 0x94, 0x92, 0x5a, 0xcb, 0xa5, 0x16, 0x8c, 0x98, 0x6b, 0xb6, 0xad, 0x9a, 0x94, 0xb3, 0x73, 0x8e, 0xb5, 0x96, 0x9c, 0xb3, 0x73, 0x6e, 0x73, 0x6e, 0x7b, 0xcf, 0xce, 0x59, 
  0xff, 0xff, 0xff, 0xff, 0x94, 0x92, 0x5a, 0xcb, 0x84, 0x14, 0x4a, 0xd4, 0x21, 0xb2, 0x7c, 0x17, 0x8c, 0x53, 0x73, 0x8e, 0xb5, 0x96, 0x9c, 0xb3, 0x73, 0x8e, 0x7b, 0xef, 0xbd, 0xd7, 0xf7, 0xbe, 
  0xff, 0xff, 0xff, 0xff, 0x94, 0x92, 0x5a, 0xcb, 0x84, 0x14, 0x4a, 0xd4, 0x21, 0x92, 0x7c, 0x17, 0x8c, 0x52, 0x73, 0x8e, 0xbd, 0xb7, 0xa5, 0x14, 0x84, 0x10, 0x94, 0x72, 0xd6, 0x7a, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x94, 0x71, 0x5a, 0xcb, 0x84, 0x14, 0x4a, 0xd4, 0x21, 0x92, 0x7c, 0x17, 0x8c, 0x52, 0x73, 0x8e, 0xb5, 0x96, 0x9c, 0xd3, 0x73, 0xae, 0x73, 0xae, 0x84, 0x10, 0xce, 0x59, 
  0xff, 0xff, 0xe6, 0xfc, 0x63, 0x2c, 0x63, 0x2c, 0x84, 0x55, 0x4a, 0xb4, 0x21, 0xb1, 0x73, 0xf7, 0x94, 0x94, 0x6b, 0x4d, 0x84, 0x30, 0x9c, 0xd3, 0x94, 0x92, 0x94, 0x92, 0x9c, 0xd3, 0xde, 0xbb, 
  0xf7, 0x9e, 0x6b, 0x2d, 0x73, 0x6e, 0x94, 0xb5, 0x6b, 0x95, 0x3a, 0x12, 0x29, 0x91, 0x4a, 0x94, 0x84, 0x57, 0x84, 0x12, 0x5a, 0xab, 0x8c, 0x51, 0xff, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xad, 0x55, 0x5a, 0xab, 0x9d, 0x17, 0x63, 0x55, 0x31, 0xf2, 0x29, 0xb1, 0x29, 0xb1, 0x32, 0x12, 0x63, 0x55, 0x94, 0xd8, 0x8c, 0x52, 0x63, 0x0c, 0xc6, 0x18, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x6b, 0x4d, 0x94, 0x92, 0x63, 0x74, 0x32, 0x12, 0x29, 0xb1, 0x29, 0xb1, 0x29, 0xb1, 0x31, 0xd2, 0x73, 0xd6, 0xa5, 0x5a, 0x8c, 0x96, 0x83, 0xf0, 0x94, 0x72, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x62, 0xec, 0x9c, 0xd3, 0x5b, 0x34, 0x31, 0xf2, 0x29, 0xb1, 0x29, 0xb1, 0x29, 0xb1, 0x29, 0xd2, 0x73, 0xf6, 0xad, 0x7a, 0x8c, 0x76, 0x84, 0x30, 0x8c, 0x51, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x8c, 0x51, 0x6b, 0x6d, 0x84, 0x76, 0x42, 0x93, 0x29, 0xb2, 0x29, 0xb1, 0x29, 0xb1, 0x32, 0x12, 0x6b, 0x96, 0xa5, 0x39, 0x94, 0x95, 0x6b, 0x6e, 0xad, 0x55, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xde, 0xdb, 0x52, 0x8a, 0x8c, 0x31, 0x8c, 0x76, 0x5b, 0x35, 0x3a, 0x53, 0x32, 0x12, 0x4a, 0xb4, 0x7b, 0xf7, 0x8c, 0x95, 0x63, 0x2d, 0x6b, 0x6d, 0xe7, 0x3c, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xc5, 0xf8, 0x4a, 0x49, 0x52, 0x8a, 0x8c, 0x93, 0xb5, 0x99, 0xb5, 0xda, 0xad, 0x78, 0x84, 0x11, 0x52, 0x8a, 0x73, 0x6e, 0xd6, 0x9a, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xef, 0x5d, 0x9c, 0xf3, 0x5a, 0xab, 0x39, 0xc7, 0x31, 0xa6, 0x41, 0xe8, 0x63, 0x2c, 0xb5, 0x96, 0xf7, 0x9e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
#endif
#if LV_COLOR_DEPTH == 32
  /*Pixel format: Blue: 8 bit, Green: 8 bit, Red: 8 bit, Fix 0xFF: 8 bit, */
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xf1, 0xf1, 0xff, 0xbc, 0xbc, 0xbc, 0xff, 0x94, 0x94, 0x94, 0xff, 0x89, 0x89, 0x89, 0xff, 0x9f, 0x9f, 0x9f, 0xff, 0xce, 0xce, 0xce, 0xff, 0xf6, 0xf6, 0xf6, 0xff, 0xfe, 0xfe, 0xfe, 0xff, 0xfb, 0xfb, 0xfb, 0xff, 0xfa, 0xfa, 0xfa, 0xff, 0xfa, 0xfa, 0xfa, 0xff, 0xfb, 0xfb, 0xfb, 0xff, 0xfd, 0xfd, 0xfd, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0xf2, 0xf2, 0xff, 0x89, 0x89, 0x89, 0xff, 0x56, 0x56, 0x56, 0xff, 0x62, 0x62, 0x62, 0xff, 0x6c, 0x6c, 0x6c, 0xff, 0x57, 0x57, 0x57, 0xff, 0x59, 0x59, 0x59, 0xff, 0xa8, 0xa8, 0xa8, 0xff, 0xe6, 0xe6, 0xe6, 0xff, 0xbc, 0xbc, 0xbc, 0xff, 0xa4, 0xa4, 0xa4, 0xff, 0xa4, 0xa4, 0xa4, 0xff, 0xac, 0xac, 0xac, 0xff, 0xdc, 0xdc, 0xdc, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb5, 0xb5, 0xb5, 0xff, 0x50, 0x50, 0x50, 0xff, 0xaf, 0xaf, 0xaf, 0xff, 0xf4, 0xf4, 0xf4, 0xff, 0xfd, 0xfd, 0xfd, 0xff, 0xec, 0xec, 0xec, 0xff, 0x88, 0x88, 0x88, 0xff, 0x6e, 0x6e, 0x6e, 0xff, 0xcb, 0xcb, 0xcb, 0xff, 0xb4, 0xb4, 0xb4, 0xff, 0x99, 0x99, 0x99, 0xff, 0x99, 0x99, 0x99, 0xff, 0xa5, 0xa5, 0xa5, 0xff, 0xda, 0xda, 0xda, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x93, 0x93, 0x93, 0xff, 0x59, 0x59, 0x59, 0xff, 0xca, 0xca, 0xca, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa3, 0xa3, 0xa3, 0xff, 0x70, 0x70, 0x70, 0xff, 0xb0, 0xb0, 0xb0, 0xff, 0x8f, 0x8f, 0x8f, 0xff, 0x66, 0x66, 0x66, 0xff, 0x77, 0x77, 0x77, 0xff, 0xc4, 0xc4, 0xc4, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x90, 0x90, 0x90, 0xff, 0x59, 0x59, 0x59, 0xff, 0xca, 0xca, 0xca, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa4, 0xa4, 0xa4, 0xff, 0x71, 0x71, 0x71, 0xff, 0xc8, 0xc8, 0xc8, 0xff, 0xde, 0xde, 0xde, 0xff, 0xd2, 0xd2, 0xd2, 0xff, 0xd4, 0xd4, 0xd4, 0xff, 0xe4, 0xe4, 0xe4, 0xff, 0xf8, 0xf8, 0xf8, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x91, 0x91, 0x91, 0xff, 0x59, 0x59, 0x59, 0xff, 0xca, 0xca, 0xca, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa4, 0xa4, 0xa4, 0xff, 0x70, 0x70, 0x70, 0xff, 0xa6, 0xa6, 0xa6, 0xff, 0x70, 0x70, 0x70, 0xff, 0x3b, 0x3b, 0x3b, 0xff, 0x3b, 0x3b, 0x3b, 0xff, 0x4b, 0x4b, 0x4b, 0xff, 0xb4, 0xb4, 0xb4, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x92, 0x92, 0x92, 0xff, 0x59, 0x59, 0x59, 0xff, 0xca, 0xca, 0xca, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa4, 0xa4, 0xa4, 0xff, 0x71, 0x71, 0x71, 0xff, 0xc4, 0xc4, 0xc4, 0xff, 0xd3, 0xd3, 0xd3, 0xff, 0xc4, 0xc4, 0xc4, 0xff, 0xc9, 0xc9, 0xc9, 0xff, 0xe9, 0xe9, 0xe9, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x91, 0x91, 0x91, 0xff, 0x59, 0x59, 0x59, 0xff, 0xca, 0xca, 0xca, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa4, 0xa4, 0xa4, 0xff, 0x71, 0x71, 0x71, 0xff, 0xb8, 0xb8, 0xb8, 0xff, 0xab, 0xab, 0xab, 0xff, 0x8c, 0x8c, 0x8c, 0xff, 0x98, 0x98, 0x98, 0xff, 0xd3, 0xd3, 0xd3, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x91, 0x91, 0x91, 0xff, 0x5a, 0x5a, 0x5a, 0xff, 0xca, 0xca, 0xca, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa4, 0xa4, 0xa4, 0xff, 0x70, 0x70, 0x70, 0xff, 0xaa, 0xaa, 0xaa, 0xff, 0x80, 0x7e, 0x7e, 0xff, 0x4e, 0x4e, 0x4e, 0xff, 0x4e, 0x4e, 0x4e, 0xff, 0x62, 0x62, 0x62, 0xff, 0xbf, 0xbf, 0xbf, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x91, 0x91, 0x91, 0xff, 0x59, 0x59, 0x59, 0xff, 0xca, 0xca, 0xca, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa4, 0xa4, 0xa4, 0xff, 0x71, 0x71, 0x71, 0xff, 0xc2, 0xc2, 0xc2, 0xff, 0xcb, 0xcb, 0xcb, 0xff, 0xb9, 0xb9, 0xb9, 0xff, 0xba, 0xba, 0xba, 0xff, 0xc2, 0xc2, 0xc2, 0xff, 0xe7, 0xe7, 0xe7, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x91, 0x91, 0x91, 0xff, 0x59, 0x59, 0x59, 0xff, 0xcc, 0xca, 0xca, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa2, 0xa4, 0xa4, 0xff, 0x71, 0x71, 0x71, 0xff, 0xa7, 0xa7, 0xa7, 0xff, 0x71, 0x71, 0x71, 0xff, 0x3c, 0x3c, 0x3c, 0xff, 0x51, 0x51, 0x51, 0xff, 0xb4, 0xb4, 0xb4, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x91, 0x91, 0x91, 0xff, 0x59, 0x59, 0x59, 0xff, 0xc7, 0xc7, 0xc7, 0xff, 0xf5, 0xed, 0xed, 0xff, 0xf3, 0xe7, 0xe7, 0xff, 0xf8, 0xf3, 0xf4, 0xff, 0xa3, 0xa4, 0xa2, 0xff, 0x70, 0x70, 0x70, 0xff, 0xba, 0xba, 0xba, 0xff, 0xb1, 0xb1, 0xb1, 0xff, 0x95, 0x95, 0x95, 0xff, 0x9a, 0x9a, 0x9a, 0xff, 0xb7, 0xb7, 0xb7, 0xff, 0xe8, 0xe8, 0xe8, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x91, 0x91, 0x91, 0xff, 0x59, 0x59, 0x59, 0xff, 0xb4, 0xa2, 0xa1, 0xff, 0xbf, 0x90, 0x88, 0xff, 0xaf, 0x73, 0x67, 0xff, 0xd3, 0xaf, 0xa9, 0xff, 0x9a, 0x95, 0x94, 0xff, 0x71, 0x71, 0x71, 0xff, 0xb1, 0xb1, 0xb1, 0xff, 0x95, 0x95, 0x95, 0xff, 0x6e, 0x6e, 0x6e, 0xff, 0x6e, 0x6e, 0x6e, 0xff, 0x79, 0x79, 0x79, 0xff, 0xc8, 0xc8, 0xc8, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x91, 0x91, 0x91, 0xff, 0x57, 0x59, 0x59, 0xff, 0xa0, 0x82, 0x7d, 0xff, 0xa0, 0x58, 0x4c, 0xff, 0x8d, 0x33, 0x22, 0xff, 0xb9, 0x82, 0x79, 0xff, 0x95, 0x89, 0x89, 0xff, 0x71, 0x71, 0x71, 0xff, 0xb2, 0xb2, 0xb2, 0xff, 0x96, 0x96, 0x96, 0xff, 0x6f, 0x6f, 0x6f, 0xff, 0x7b, 0x7b, 0x7b, 0xff, 0xb7, 0xb7, 0xb7, 0xff, 0xf4, 0xf4, 0xf4, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x91, 0x91, 0x91, 0xff, 0x59, 0x59, 0x59, 0xff, 0xa0, 0x82, 0x7d, 0xff, 0xa1, 0x57, 0x4b, 0xff, 0x8f, 0x32, 0x23, 0xff, 0xba, 0x80, 0x7a, 0xff, 0x94, 0x87, 0x85, 0xff, 0x71, 0x71, 0x71, 0xff, 0xb6, 0xb6, 0xb6, 0xff, 0xa2, 0xa2, 0xa2, 0xff, 0x7f, 0x7f, 0x7f, 0xff, 0x8e, 0x8e, 0x8e, 0xff, 0xcd, 0xcd, 0xcd, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x8c, 0x8e, 0x8e, 0xff, 0x58, 0x58, 0x58, 0xff, 0xa0, 0x82, 0x7d, 0xff, 0xa1, 0x57, 0x4b, 0xff, 0x8d, 0x32, 0x23, 0xff, 0xba, 0x81, 0x78, 0xff, 0x94, 0x87, 0x85, 0xff, 0x70, 0x70, 0x70, 0xff, 0xb1, 0xb1, 0xb1, 0xff, 0x9a, 0x9a, 0x9a, 0xff, 0x74, 0x74, 0x74, 0xff, 0x74, 0x74, 0x74, 0xff, 0x7f, 0x7f, 0x7f, 0xff, 0xca, 0xca, 0xca, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xde, 0xde, 0xde, 0xff, 0x64, 0x64, 0x64, 0xff, 0x64, 0x64, 0x64, 0xff, 0xa8, 0x88, 0x83, 0xff, 0xa0, 0x56, 0x4a, 0xff, 0x8b, 0x33, 0x23, 0xff, 0xb6, 0x7d, 0x74, 0xff, 0xa1, 0x92, 0x8f, 0xff, 0x68, 0x68, 0x68, 0xff, 0x83, 0x83, 0x83, 0xff, 0x99, 0x99, 0x99, 0xff, 0x92, 0x92, 0x92, 0xff, 0x92, 0x92, 0x92, 0xff, 0x9b, 0x9a, 0x9c, 0xff, 0xd5, 0xd5, 0xd5, 0xff, 
  0xef, 0xf0, 0xee, 0xff, 0x65, 0x65, 0x65, 0xff, 0x6e, 0x6e, 0x6e, 0xff, 0xa9, 0x96, 0x93, 0xff, 0xab, 0x72, 0x69, 0xff, 0x93, 0x41, 0x35, 0xff, 0x8c, 0x32, 0x27, 0xff, 0xa1, 0x52, 0x47, 0xff, 0xb7, 0x89, 0x82, 0xff, 0x8f, 0x82, 0x80, 0xff, 0x56, 0x55, 0x57, 0xff, 0x87, 0x87, 0x87, 0xff, 0xf5, 0xf5, 0xf5, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xa8, 0xa8, 0xa8, 0xff, 0x55, 0x55, 0x55, 0xff, 0xb5, 0xa2, 0x9b, 0xff, 0xa8, 0x67, 0x5e, 0xff, 0x92, 0x3c, 0x30, 0xff, 0x8b, 0x33, 0x25, 0xff, 0x8c, 0x34, 0x26, 0xff, 0x92, 0x40, 0x34, 0xff, 0xab, 0x68, 0x5f, 0xff, 0xbe, 0x9a, 0x94, 0xff, 0x91, 0x8a, 0x87, 0xff, 0x60, 0x60, 0x60, 0xff, 0xc2, 0xc2, 0xc2, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x67, 0x67, 0x67, 0xff, 0x8f, 0x8f, 0x8f, 0xff, 0xa4, 0x6d, 0x64, 0xff, 0x94, 0x40, 0x34, 0xff, 0x8c, 0x34, 0x26, 0xff, 0x8c, 0x34, 0x26, 0xff, 0x8c, 0x34, 0x26, 0xff, 0x90, 0x3a, 0x2e, 0xff, 0xb4, 0x79, 0x6f, 0xff, 0xce, 0xa8, 0xa3, 0xff, 0xae, 0x90, 0x8b, 0xff, 0x7e, 0x7e, 0x7e, 0xff, 0x8e, 0x8e, 0x8e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x5d, 0x5d, 0x5d, 0xff, 0x99, 0x99, 0x99, 0xff, 0xa2, 0x65, 0x5b, 0xff, 0x92, 0x3d, 0x2e, 0xff, 0x8c, 0x35, 0x25, 0xff, 0x8c, 0x34, 0x26, 0xff, 0x8c, 0x34, 0x26, 0xff, 0x8d, 0x38, 0x29, 0xff, 0xb4, 0x7b, 0x72, 0xff, 0xcf, 0xab, 0xa5, 0xff, 0xae, 0x8c, 0x86, 0xff, 0x84, 0x84, 0x84, 0xff, 0x87, 0x87, 0x87, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x8a, 0x8a, 0x8a, 0xff, 0x6c, 0x6c, 0x6c, 0xff, 0xb0, 0x8b, 0x83, 0xff, 0x9c, 0x50, 0x44, 0xff, 0x8e, 0x36, 0x28, 0xff, 0x8b, 0x33, 0x25, 0xff, 0x8c, 0x34, 0x26, 0xff, 0x93, 0x42, 0x33, 0xff, 0xaf, 0x72, 0x68, 0xff, 0xc7, 0xa3, 0x9d, 0xff, 0xa5, 0x92, 0x8f, 0xff, 0x6d, 0x6b, 0x6b, 0xff, 0xa9, 0xa9, 0xa9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xd7, 0xd7, 0xd7, 0xff, 0x51, 0x4f, 0x4f, 0xff, 0x8b, 0x86, 0x85, 0xff, 0xb3, 0x8d, 0x88, 0xff, 0xa6, 0x66, 0x5b, 0xff, 0x96, 0x47, 0x3a, 0xff, 0x91, 0x40, 0x31, 0xff, 0x9f, 0x53, 0x47, 0xff, 0xb7, 0x7e, 0x75, 0xff, 0xa9, 0x90, 0x8c, 0xff, 0x66, 0x64, 0x64, 0xff, 0x6c, 0x6c, 0x6c, 0xff, 0xe4, 0xe4, 0xe4, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xfd, 0xfd, 0xff, 0xbe, 0xbe, 0xbe, 0xff, 0x47, 0x47, 0x47, 0xff, 0x54, 0x4f, 0x50, 0xff, 0x9b, 0x8f, 0x8b, 0xff, 0xc6, 0xb1, 0xaf, 0xff, 0xcf, 0xb9, 0xb4, 0xff, 0xbf, 0xac, 0xa9, 0xff, 0x89, 0x80, 0x7d, 0xff, 0x52, 0x51, 0x4d, 0xff, 0x6e, 0x6e, 0x6e, 0xff, 0xd0, 0xd0, 0xd0, 0xff, 0xfd, 0xfd, 0xfd, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xfe, 0xfe, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xfd, 0xfd, 0xfd, 0xff, 0xe7, 0xe7, 0xe7, 0xff, 0x9b, 0x9b, 0x9b, 0xff, 0x56, 0x56, 0x56, 0xff, 0x38, 0x38, 0x38, 0xff, 0x33, 0x33, 0x33, 0xff, 0x3d, 0x3d, 0x3d, 0xff, 0x64, 0x64, 0x64, 0xff, 0xb0, 0xb0, 0xb0, 0xff, 0xf1, 0xf1, 0xf1, 0xff, 0xfe, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
#endif
};

const lv_img_dsc_t tempcold = {
  .header.always_zero = 0,
  .header.w = 16,
  .header.h = 25,
  .data_size = 400 * LV_COLOR_SIZE / 8,
  .header.cf = LV_IMG_CF_TRUE_COLOR,
  .data = tempcold_map,
};

