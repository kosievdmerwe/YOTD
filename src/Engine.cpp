#include "Engine.h"

#include <queue>

#include "Errors.h"
#include "Window.h"
#include "Graphics.h"
#include "Events.h"

#include "SDLOGLImpl/SDLOGLWindowImpl.h"

namespace {
bool gInited = false;
Window*   gWindow   = NULL;
Graphics* gGraphics = NULL;
Events*   gEvents   = NULL;
GraphicsMode gMode  = GM_OPENGL;

queue<Error> gErrors;

}

///////////////////////////////////////////////////////////////////////////////
//Engine Functions                                                           //
///////////////////////////////////////////////////////////////////////////////
bool engineInit(GraphicsMode mode) {
  if (gInited) {
    gErrors.push(ERR_ENGINE_INITED);
    return false;
  }

  //OpenGL
  if (mode == GM_OPENGL) {
    gWindow = new SDLOGLWindowImpl();

    bool hasError = false;
    while (gWindow.hasError()) {
      hasError = true;
      gErrors.push(gWindow.getError());
    }

    if (hasError) {
      delete gWindow;
      gWindow = NULL;

      return false;
    }
  //Unknown mode
  } else {
    gErrors.push(ERR_ENGINE_INVALID_MODE);
    return false;
  }

  //TODO load sound system
  //TODO devise means to differentiate which sound system to use


  gGraphics = gWindow.getGraphics();
  gEvents = gWindow.getEvents();

  return true;
}
///////////////////////////////////////////////////////////////////////////////
void engineQuit() {
  if (!gInited) {
    return;
  }

  gInited = false;

  delete gWindow;

  gWindow   = NULL;
  gGraphics = NULL;
  gEvents   = NULL;
}
///////////////////////////////////////////////////////////////////////////////
bool engineIsInit() {
  return gInited;
}
///////////////////////////////////////////////////////////////////////////////
Error engineGetError() {
  if (gErrors.empty()) {
    return ERR_NO_ERROR;
  } else {
    Error temp = gErrors.front();
    engineErrors.pop();
    return temp;
  }
}
///////////////////////////////////////////////////////////////////////////////
bool engineHasError() {
  return !gErrors.empty();
}
///////////////////////////////////////////////////////////////////////////////
Window* engineGetWindow() {
  return gWindow;
}
///////////////////////////////////////////////////////////////////////////////
Graphics* engineGetGraphics() {
  return gGraphics;
}
///////////////////////////////////////////////////////////////////////////////
Events* engineGetEvents() {
  return gEvents;
}
///////////////////////////////////////////////////////////////////////////////

