#ifndef __OPENGL_H__
#define __OPENGL_H__

#include <SFML/Window.hpp>

#ifndef NDEBUG
#define GLCheck(x) x; GLCheckError(__FILE__, __LINE__)
#else
#define GLCheck(x) x
#endif

void GLCheckError(const std::string& file, int line);

#endif//__OPENGL_H__
