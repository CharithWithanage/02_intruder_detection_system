#include "Light.h"
#include "../../Defines.h"

/**
 * @brief Construct a new Light:: Light object
 * 
 * @param pin Light pin
 */
Light::Light(uint8_t pin)
{
    this->light_pin = pin;
}

/**
 * @brief Initializing the Light
 * 
 */
void Light::initLight()
{
#ifdef DEBUG_MODE
    Serial.println("Setting Up The Led Pin");
#endif
    pinMode(this->light_pin, OUTPUT);
}

/**
 * @brief Setting the On time of the light
 * 
 * @param time time in seconds
 */
void Light::setOnTime(uint32_t time)
{
#ifdef DEBUG_MODE
    Serial.println("Setting Up the timer");
#endif
    this->onTime = time;
}

/**
 * @brief Return the on time for other methods
 * 
 * @return uint32_t 
 */
uint32_t Light::getOnTime()
{
    return this->onTime;
}

/**
 * @brief Turning on the light
 * 
 */
void Light::turnON()
{
    digitalWrite(this->light_pin, HIGH);
    this->lightStatus = true;
}

/**
 * @brief Turining off the light
 * 
 */
void Light::turnOFF()
{
    digitalWrite(this->light_pin, LOW);
    this->lightStatus = false;
}

/**
 * @brief Check the status of the Light
 * 
 * @return true 
 * @return false 
 */
bool Light::isLightON()
{
    return this->lightStatus;
}
