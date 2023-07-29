#ifndef COLOR_H
#define COLOR_H

#include<iostream>
#include "vec3.h"

void write_color(std::ostream &out, color pixel_color){
  //translated values of each color component [0,255]
  out << static_cast<int>(255.999 * pixel_color.x())<< ' '
  out << static_cast<int>(255.999 * pixel_color.y())<< ' '
  out << static_cast<int>(255.999 * pixel_color.z())<< '\n';
}
#endif
