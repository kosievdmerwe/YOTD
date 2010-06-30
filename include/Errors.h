#ifndef __ERRORS_H__
#define __ERRORS_H__

enum Error {
ERR_NO_ERROR = 0,
ERR_INVALID_WINDOW_WIDTH,
ERR_INVALID_WINDOW_HEIGHT,
ERR_INVALID_WINDOW_BPP,
ERR_INVALID_WINDOW_STYLE,
ERR_INVALID_WINDOW_DEPTH_BITS,
ERR_INVALID_WINDOW_STENCIL_BITS,
ERR_INVALID_WINDOW_AA_LEVEL
};

#include <queue>

class ErrorThrower {
public:
  virtual Error getError();
  virtual bool hasError();
  
protected:
  std::queue<Error> mErrors;
  virtual void addError(Error error);
};

#endif//__ERRORS_H__
