#include <Arduino.h>

#include "config.h"
#include <DcMotor.h>

DcMotor xMotor(X_AXIS_PWM, X_AXIS_FWD, X_AXIS_REV),
  yMotor(Y_AXIS_PWM, Y_AXIS_FWD, Y_AXIS_REV),
  zMotor(Z_AXIS_PWM, Z_AXIS_FWD, Z_AXIS_REV);


void setup() {
  Serial.begin(BAUDRATE);
  xMotor.begin();
  yMotor.begin();
  zMotor.begin();
}

void loop() {
}
