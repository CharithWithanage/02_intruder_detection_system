#include "MotionSensor.h"
#include "../../Defines.h"

/**
 * @brief Construct a new Motion Sensor:: Motion Sensor object
 * 
 * @param pin Motion sensor signal pin
 */
MotionSensor::MotionSensor(uint8_t pin)
{
  this->sensorPin = pin;
}

/**
 * @brief Attach the motion sensor to the interrupt sub routine.
 * 
 * @param fun passing the function to be execute after the timeOut
 */
void MotionSensor::attachSensor(void (*fun)())
{
#ifdef DEBUG_MODE
  Serial.println("Attach Motion Sensor");
#endif
  pinMode(this->sensorPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(this->sensorPin), fun, CHANGE);
}

/**
 * @brief Attachin the light source to the PIR sensor
 * 
 * @param L 
 */
void MotionSensor::attachLight(Light L)
{
#ifdef DEBUG_MODE
  Serial.println("Attach The Light Sensor");
#endif
  this->LightOnTime = L.getOnTime();
#ifdef DEBUG_MODE
  Serial.print("Time ");
  Serial.println(this->LightOnTime);
#endif
}

/**
 * @brief Setting the timer
 * 
 * @param fun the function to be execute after the timeOut
 */
void MotionSensor::setTimer(void (*fun)())
{
  this->timerCounter = 0;
  Timer1.initialize(1000000);
  Timer1.attachInterrupt(fun);
}

/**
 * @brief Disabling the timer executable
 * 
 */
void MotionSensor::disableTimer()
{
  Timer1.detachInterrupt();
}

/**
 * @brief Check whether the time is set
 * 
 * @return true 
 * @return false 
 */
bool MotionSensor::isTimeOut()
{
  this->timerCounter++;
#ifdef DEBUG_MODE
  Serial.println(this->timerCounter);
#endif
  if (this->timerCounter > this->LightOnTime)
  {
    return true;
  }
  else
    return false;
}
