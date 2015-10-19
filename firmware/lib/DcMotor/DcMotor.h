#ifndef __DCMOTOR_H__
#define __DCMOTOR_H__

#include <Arduino.h>

#include <stdlib.h>
#include <ExtraMath.h>

class DcMotor {
 public:
  enum Direction {
    FORWARD,
    REVERSE,
    STOP
  };
  
  DcMotor(int pwm_pin, int fwd_pin, int rev_pin);

  void begin();
  void setDirection(Direction direction);

  void setPower(double power);
  double getPower();
 private:
  
  int _pwm_pin, _fwd_pin, _rev_pin;
  double _power;
  Direction _direction;
};

#endif
