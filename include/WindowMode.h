#ifndef __WINDOWMODE_H__
#define __WINDOWMODE_H__

class WindowMode {
public:
  WindowMode();
  WindowMode(unsigned int width, unsigned int height, unsigned int bpp = 32);

  bool isValid();

  unsigned int width;
  unsigned int height;
  unsigned int bpp;
};

#endif//__WINDOWMODE_H__
