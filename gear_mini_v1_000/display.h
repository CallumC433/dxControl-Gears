#ifndef DISPLAY_H
#define DISPLAY_H

//#include <Adafruit_GFX.h>
//#include <Adafruit_SH1106.h>

void configure_display_type();
void update_display();
void manual_auto();
void gear_letter();
void gps_line();
void oiltemp_line();
void selector_line();

uint8_t disp_blink = 0;

#endif
