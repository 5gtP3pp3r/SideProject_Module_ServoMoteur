#include "Modules/ServoMotor.h"

ServoMotor::ServoMotor(uint8_t p_pin) : m_pin(p_pin) {
    m_servo.attach(m_pin);
    RotateToStartPosition();
}

void ServoMotor::RotateTo45() {
    if (m_position != POS_45) {
        m_servo.write(POS_45);
        m_position = POS_45;
        Serial.println("Position: " + String(m_position) + "°");
    }   
}

void ServoMotor::RotateTo90() {
    if (m_position != POS_90) {
        m_servo.write(POS_90);
        m_position = POS_90;
        Serial.println("Position: " + String(m_position) + "°");
    }   
}
void ServoMotor::RotateTo180() {
    if (m_position != POS_180) {
        m_servo.write(POS_180);
        m_position = POS_180;
        Serial.println("Position: " + String(m_position) + "°");
    }
}
void ServoMotor::RotateToStartPosition() {
    if (m_position != START_POS) {
        m_servo.write(START_POS);
        m_position = START_POS;
        Serial.println("Position: " + String(m_position) + "°");
    }
}
