#pragma once

#include "Python.h"

struct VertexShader {
	PyObject_HEAD
	int obj;
};

extern PyTypeObject VertexShaderType;
