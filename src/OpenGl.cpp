#include "OpenGl.h"

#include <string>
#include <iostream>

void GLCheckError(const std::string& file, int line) {
  GLenum error;
  
  while ((error = glGetError()) != GL_NO_ERROR) {
    std::string errorString = "UNKNOWN";
    switch (error) {
      case GL_INVALID_ENUM:
        errorString = "GL_INVALID_ENUM";
        break;
      case GL_INVALID_VALUE:
        errorString = "GL_INVALID_VALUE";
        break;
      case GL_INVALID_OPERATION:
        errorString = "GL_INVALID_OPERATION";
        break;
      case GL_STACK_OVERFLOW:
        errorString = "GL_STACK_OVERFLOW";
        break;
      case GL_STACK_UNDERFLOW:
        errorString = "GL_STACK_UNDERFLOW";
        break;
      case GL_OUT_OF_MEMORY:
        errorString = "GL_OUT_OF_MEMORY";
        break;
      case GL_TABLE_TOO_LARGE:
        errorString = "GL_TABLE_TOO_LARGE";
        break;
    }

    std::cerr << file << "(" << line << ") : " << errorString << std::endl;
  }
}

