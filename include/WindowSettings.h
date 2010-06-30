#ifndef __WINDOWSETTINGS_H__
#define __WINDOWSETTINGS_H__

class WindowSettings {
public:
  WindowSettings(unsigned int depthBits = 24, unsigned int stencilBits = 8,
                 unsigned int antialiasing = 0);

  unsigned int depthBits;
  unsigned int stencilBits;
  unsigned int antialiasing;
};

#endif//__WINDOWSETTINGS_H__
