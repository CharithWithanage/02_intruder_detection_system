
#include "Board.h"
#include "Defines.h"
#include "src/sensors/MotionSensor.h"
#include "src/sensors/Light.h"

//Local Objects Declaration
MotionSensor PIR(PIR_SENSOR_PIN);
Light L(LIGHT_PIN);


void setup()
{
    Serial.begin(9600);
    L.initLight();
    L.setOnTime(LIGHT_ON_TIME); //Seconds
    PIR.attachLight(L);
    PIR.attachSensor(MotionTriggerISR);
}

void loop()
{
}

/**
 * @brief Motion Sensor Trigger ISR
 * 
 */
void MotionTriggerISR()
{
#ifdef DEBUG_MODE
    Serial.println("Motion Timer Triggered");
#endif
    PIR.setTimer(TimerISR);
}

/**
 * @brief Timer ISR
 * 
 */
void TimerISR()
{
    if (L.isLightON())
    {
        if (PIR.isTimeOut())
        {
            L.turnOFF();
            PIR.disableTimer();
        }
    }
    else
        L.turnON();
}