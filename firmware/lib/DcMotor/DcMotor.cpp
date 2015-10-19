#include <DcMotor.h>

DcMotor::DcMotor(int pwm_pin, int fwd_pin, int rev_pin) {
  _pwm_pin = pwm_pin;
  _fwd_pin = fwd_pin;
  _rev_pin = rev_pin;
  _direction = FORWARD;
}

void DcMotor::begin() {
  pinMode(_pwm_pin, OUTPUT);
  pinMode(_fwd_pin, OUTPUT);
  pinMode(_rev_pin, OUTPUT);
}

void DcMotor::setDirection(DcMotor::Direction direction) {
  _direction = direction;
}

void DcMotor::setPower(double power) {
  _power = power;
  
  switch (_direction) {
  case FORWARD:
    power = power;
    break;
  case REVERSE:
    power = -1.0*power;
    break;
  case STOP:
    power = 0.0*power;
    break;
  }
  
  if (power > 0) {
    digitalWrite(_fwd_pin, HIGH);
    digitalWrite(_rev_pin, LOW);
  } else if (power < 0) {
    digitalWrite(_fwd_pin, LOW);
    digitalWrite(_rev_pin, HIGH);
  } else if (power == 0) {
    digitalWrite(_fwd_pin, LOW);
    digitalWrite(_rev_pin, LOW);
  }

  double pwm = (int)floor(ExtraMath::map_range(abs(power), 0, 1, 0, 255));
  analogWrite(_pwm_pin, pwm);
}

double DcMotor::getPower() {
  return _power;
}
