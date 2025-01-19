#include "Program.h"

Program::Program() : m_servo(nullptr) {
    m_servo = new ServoMotor(13);
}

void Program::testServoMotor() {
    delay(500);
    m_servo->RotateTo45();
    delay(250);
    m_servo->RotateTo90();
    delay(250);
    m_servo->RotateTo180();
    delay(250);
    m_servo->RotateToStartPosition();
    delay(500);
    m_servo->RotateTo180();
    delay(500);
    m_servo->RotateToStartPosition();
    
}

void Program::loop() {
    testServoMotor();
}