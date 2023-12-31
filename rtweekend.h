#ifndef RTWEEKEND_H
#define RTWEEKEND_H

#include<cmath>
#include<limits>
#include<memory>

//using

using std::shared_ptr;
using std::make_shared;
using std::sqrt;

//constants
const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

//utility functions

inline double degrees_to_radians(double degrees){
  return degrees*pi /180.0;
}
#include"ray.h"
#include"vec3.h"

//random number utilities
#include<random>
inline double random_double() {
  static std::uniform_real_distribution<double> distribution (0.0, 1.0);
  static std::mt19937 generator;
  return distribution(generator);
}

inline double clamp(double x, double min, double max){
  if (x < min) return min;
  if (x > max) return max;
  return x;
}


#endif
