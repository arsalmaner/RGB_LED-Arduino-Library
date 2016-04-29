/*
*    set RGB led legs to;
*    red   --->   digital pin 9 
*    green --->   digital pin 5
*    blue  --->   digital pin 6
*
*/

#include "RGB_LED.h"

RGB_LED *rgb_led;

unsigned long  yellow_blink[] = {
  2,
  0Xffef03L,
  300L,
  0,
  300L
}; 

unsigned long  darkblue_blink[] = {
  2,
  0X004684L,
  300L,
  0,
  300L
}; 

void setup() {
  // put your setup code here, to run once:
  rgb_led = new RGB_LED(9, 5, 6);
  //rgb_led->set(yellow_blink, 0); uncomment this for yellow blink
  rgb_led->set(darkblue_blink, 0);
}

void loop() {
  // put your main code here, to run repeatedly:
  rgb_led->tick();
}
