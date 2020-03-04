#ifndef TUTORIALS_H_
#define TUTORIALS_H_

#include "matrix4x4.h"
#include "camera.h"
#include "glutils.h"

bool check_gl( const GLenum error = glGetError() );

int tutorial_1( const int width = 640, const int height = 480 );

#endif
