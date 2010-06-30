#ifndef __ENGINE_H__
#define __ENGINE_H__

class Window;
class Graphics;
class Events;

enum GraphicsMode {
  GM_OPENGL = 0
};

bool engineInit(GraphicsMode mode);
void engineQuit();
bool engineIsInit();

Window* engineGetWindow();
Graphics* engineGetGraphics();
Events* engineGetEvents();

#endif//__ENGINE_H__
