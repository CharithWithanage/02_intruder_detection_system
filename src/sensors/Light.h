#ifndef __LIGHT_H__
#define __LIGHT_H__

#include "arduino.h"

class Light
{
private:
    uint8_t light_pin;
    uint32_t onTime;
    bool lightStatus = false;;
public:
    Light(uint8_t pin);
    void initLight();
    void setOnTime(uint32_t time);
    uint32_t getOnTime();
    void turnON();
    void turnOFF();
    bool isLightON();
};

#endif // __LIGHT_H__