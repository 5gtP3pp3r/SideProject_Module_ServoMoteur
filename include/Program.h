#pragma once
#include <Arduino.h>
#include "Modules/ServoMotor.h"

#define SERIAL_SPEED 115200

class Program {
private:
    ServoMotor* m_servo;
public:
    Program();
    void testServoMotorPos();
    void testServoLoop();
    void loop();
};