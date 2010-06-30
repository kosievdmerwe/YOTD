#ifndef __SDLOGLWINDOWIMPL_H__
#define __SDLOGLWINDOWIMPL_H__

#include "Window.h"

class Graphics;
class Events;

class SDLOGLWindowImpl: public Window {
public:
  SDLOGLWindowImpl();  
  SDLOGLWindowImpl(const WindowMode& mode, const std::string& title, 
         WindowStyles style = WS_CLOSE, 
         const WindowSettings& settings = WindowSettings());
  virtual ~SDLOGLWindowImpl();

  virtual void create(const WindowMode& mode, const std::string& title, 
                      WindowStyles style = WS_CLOSE, 
                      const WindowSettings& settings = WindowSettings());
  virtual bool isOpened();
  virtual void close();

  virtual int getWidth();
  virtual int getHeight();
  virtual int getBPP();
  virtual std::string getTitle();
  virtual WindowSettings& getSettings();

  virtual void setPos(int x, int y);
  virtual void setTitle(const std::string& title);
  virtual void setCursorPos(unsigned int x, unsigned int y); 
  virtual void showCursor(bool show);
  virtual void setVirtualSync(bool sync);
  virtual void setIcon(unsigned int width, unsigned int height,
                       const uint8_t* icon);

  virtual Graphics* getGraphics();
  virtual Events* getEvents();

protected:
  SDLOGLWindowImpl(const SDLOGLWindowImpl& o);
  SDLOGLWindowImpl& operator=(const SDLOGLWindowImpl& o);
};

#endif//__SDLOGLWINDOWIMPL_H__
