#pragma once

#include "Python.h"

struct FragmentShader {
	PyObject_HEAD
	int obj;
};

extern PyTypeObject FragmentShaderType;
