#include "WindowSettings.h"

////////////////////////////////////////////////////////////////////////////////
//WindowSettings                                                              //
////////////////////////////////////////////////////////////////////////////////
WindowSettings::WindowSettings(unsigned int depthBits, 
                               unsigned int stencilBits,
                               unsigned int antialiasing) {
  this->depthBits = depthBits;
  this->stencilBits = stencilBits;
  this->antialiasing = antialiasing;
}
////////////////////////////////////////////////////////////////////////////////

