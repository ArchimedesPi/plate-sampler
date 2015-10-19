#ifndef __EXTRAMATH_H__
#define __EXTRAMATH_H__

namespace ExtraMath {
  inline double map_range(double in, double in_lower, double in_upper, double out_lower, double out_upper) {
    return out_lower + (in-in_lower)*(out_upper-out_lower)/(in_upper-in_lower);
  }
}

#endif
