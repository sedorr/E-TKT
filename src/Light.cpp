
#include "Light.h"

#include <Arduino.h>

#include "analogWrite.h"


Light::Light(uint8_t pin) { this->pin = pin; }

void Light::initialize() {
  pinMode(this->pin, OUTPUT);
  this->off();
}

void Light::on(float brightness) {
  analogWrite(this->pin, (uint16_t)(brightness * 128));
}

void Light::off() { analogWrite(this->pin, LOW); }

Light::~Light() {
  // unused for now
}