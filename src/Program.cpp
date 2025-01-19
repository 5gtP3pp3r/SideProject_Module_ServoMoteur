#include "Program.h"

Program::Program() : m_servo(nullptr) {
    m_servo = new ServoMotor(13);
}

void Program::testServoMotorPos() {
    delay(500);                         // Test poche avec des delay(), mais hey... c'est juste pour tester!
    this->m_servo->RotateTo45();
    delay(250);
    this->m_servo->RotateTo90();
    delay(250);
    this->m_servo->RotateTo180();
    delay(250);
    this->m_servo->RotateToStartPosition();
    delay(500);
    this->m_servo->RotateTo180();
    delay(500);
    this->m_servo->RotateToStartPosition();
    delay(500);
}
void Program::testServoLoop() {
    this->m_servo->testLoop();
}

void Program::loop() {
    testServoMotorPos();
    testServoLoop();
}