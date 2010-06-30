#ifndef __ENGINE_H__
#define __ENGINE_H__

#include "Errors.h"

class Window;
class Graphics;
class Events;
class SoundManager;

enum GraphicsMode {
  GM_OPENGL = 0
};

bool engineInit(GraphicsMode mode);
void engineQuit();
bool engineIsInit();

Error engineGetError();
bool engineHasError();

Window* engineGetWindow();
Graphics* engineGetGraphics();
Events* engineGetEvents();
SoundManager* engineGetSoundManager();

#endif//__ENGINE_H__
