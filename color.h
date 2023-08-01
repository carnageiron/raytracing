#ifndef COLOR_H
#define COLOR_H

#include<iostream>
#include "vec3.h"

void write_color(std::ostream &out, color pixel_color){

  auto r = pixel_color.x();
  auto g = pixel_color.y();
  auto b = pixel_color.z();

  //divide color,gamma correction
  auto scale = 1.0 / sample_per_pixel;
  r = sqrt(scale * r);
  g = sqrt(scale * g);
  b = sqrt(scale * b);
  //translated values of each color component [0,255]
  out << static_cast<int>(255.999 * pixel_color.x())<< ' '
      << static_cast<int>(255.999 * pixel_color.y())<< ' '
      << static_cast<int>(255.999 * pixel_color.z())<< '\n';
}
#endif
