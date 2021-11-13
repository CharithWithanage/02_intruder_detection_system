#ifndef __MOTIONSENSOR_H__
#define __MOTIONSENSOR_H__

#include "Arduino.h"
#include "Light.h"
#include <TimerOne.h>

class MotionSensor
{
private:
    uint8_t sensorPin;
    uint32_t timerCounter;
    uint32_t LightOnTime;
public:
    MotionSensor(uint8_t pin);
    void attachSensor(void (*fun)());
    void attachLight(Light L);
    void setTimer(void (*fun)());
    void disableTimer();
    bool isTimeOut();
    

};

#endif // __MOTIONSENSOR_H__