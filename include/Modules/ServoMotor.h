#pragma once
#include <Arduino.h>
#include <ESP32Servo.h>

#define START_POS 0
#define POS_45 45
#define POS_90 90
#define POS_180 180

class ServoMotor {
private:
    Servo m_servo;
    uint8_t m_pin;
    uint8_t m_position;
    
public:
    ServoMotor(uint8_t p_pin);
    void RotateTo45();
    void RotateTo90();
    void RotateTo180();
    void RotateToStartPosition();
};