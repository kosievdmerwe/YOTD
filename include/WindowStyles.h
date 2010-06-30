#ifndef __WINDOWSTYLES_H__
#define __WINDOWSTYLES_H__

enum WindowStyles {
  WS_NONE       = 0,
  WS_TITLEBAR   = 1 << 0,
  WS_RESIZE     = 1 << 1,
  WS_CLOSE      = 1 << 2,
  WS_FULLSCREEN = 1 << 3
};

#endif//__WINDOWSTYLES_H__
