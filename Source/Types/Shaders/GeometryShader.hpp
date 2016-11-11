#pragma once

#include "Python.h"

struct GeometryShader {
	PyObject_HEAD
	int obj;
};

extern PyTypeObject GeometryShaderType;
