#ifndef __WINDOW_H__
#define __WINDOW_H__

#include <string>
#include <cstdint>

#include "Errors.h"
#include "WindowMode.h"
#include "WindowSettings.h"
#include "WindowStyles.h"

class Graphics;
class Events;

class Window: public ErrorThrower {
public:
  Window();  
  Window(const WindowMode& mode, const std::string& title, 
         WindowStyles style = WS_CLOSE, 
         const WindowSettings& settings = WindowSettings());
  virtual ~Window();

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
  Window(const Window& o);
  Window& operator=(const Window& o);
};

#endif//__WINDOW_H__
