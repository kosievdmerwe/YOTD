#ifndef __ERRORTHROWER_H__
#define __ERRORTHROWER_H__

#include <queue>

#include "Errors.h"

class ErrorThrower {
public:
  virtual Error getError();
  virtual bool hasError();
  
protected:
  std::queue<Error> mErrors;
  virtual void addError(Error error);
};

#endif//__ERRORTHROWER_H__
