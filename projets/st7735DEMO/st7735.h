#ifndef __ST7735
#define __ST7735
#include "struct.h"
  #include <Adafruit_ST77xx.h>
  #include <Adafruit_ST7789.h>
  #include <Adafruit_ST7735.h>
    #define TFT_CS        10
  #define TFT_RST        9 // Or set to -1 and connect to Arduino RESET pin
  #define TFT_DC         8
  #define POS_TIME_X 44
  #define POS_TIME_Y 2
void initST();
void loopST( S_Datas);
#endif
