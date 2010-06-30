#include "WindowMode.h"

#include <SFML/VideoMode.hpp>

///////////////////////////////////////////////////////////////////////////////
//WindowMode                                                                 //
///////////////////////////////////////////////////////////////////////////////
WindowMode::WindowMode() {
  width  = 0;
  height = 0;
  bpp    = 0;
}
///////////////////////////////////////////////////////////////////////////////
WindowMode::WindowMode(unsigned int width, unsigned int height,
                       unsigned int bpp) {
  this->width  = width;
  this->height = height;
  this->bpp    = bpp;
}
///////////////////////////////////////////////////////////////////////////////
bool WindowMode::isValid() {
  return VideoMode(width, height, bpp).IsValid();
}
///////////////////////////////////////////////////////////////////////////////
