#pragma once

#include "Python.h"

struct TessControlShader {
	PyObject_HEAD
	int obj;
};

extern PyTypeObject TessControlShaderType;
