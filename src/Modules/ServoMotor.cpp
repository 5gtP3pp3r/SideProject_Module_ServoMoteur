#include "Modules/ServoMotor.h"

ServoMotor::ServoMotor(uint8_t p_pin) : m_pin(p_pin) {
    this->m_servo.attach(m_pin);
    RotateToStartPosition();
}

void ServoMotor::testLoop() {
        for(uint8_t i = 0; i < 175; ++i) {
            delay(10);                      // Test poche avec des delay(), mais hey... c'est juste pour tester!
            this->m_servo.write(i);
            Serial.println(String(i) + "°");
        }
        for(uint8_t i = 175; i > 0; --i) {
            delay(5);
            this->m_servo.write(i);
            Serial.println(String(i) + "°");
        }   
}
void ServoMotor::RotateTo45() {
    if (this->m_position != POS_45) {
        this->m_servo.write(POS_45);
        this->m_position = POS_45;
        Serial.println("Position: " + String(this->m_position) + "°");
    }   
}

void ServoMotor::RotateTo90() {
    if (this->m_position != POS_90) {
        this->m_servo.write(POS_90);
        this->m_position = POS_90;
        Serial.println("Position: " + String(this->m_position) + "°");
    }   
}
void ServoMotor::RotateTo180() {
    if (this->m_position != POS_180) {
        this->m_servo.write(POS_180);
        this->m_position = POS_180;
        Serial.println("Position: " + String(this->m_position) + "°");
    }
}
void ServoMotor::RotateToStartPosition() {
    if (this->m_position != START_POS) {
        this->m_servo.write(START_POS);
        this->m_position = START_POS;
        Serial.println("Position: " + String(this->m_position) + "°");
    }
}
