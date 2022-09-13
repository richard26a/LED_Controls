#ifndef LEDControls_H
#define LEDControls_H
#include"arduino.h"

class LEDControls{
  public:
  LED_Controls(int pin , int delay);
  void ON();
  void OFF();
  int _pin;
  int _delay;
};

#endif
