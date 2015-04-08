

#ifndef Gardensensor_h
#define Gardensensor_h


#include "Arduino.h"



class Gardensensor
{
  public:
Gardensensor(int ld1, int ld2, int ld3, int snsr);

void checkStatus(int input);
    
  private:
    int led1;
    int led2;
    int led3;
    int sensor;

};
   
#endif