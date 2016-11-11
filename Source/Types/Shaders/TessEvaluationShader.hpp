#pragma once

#include "Python.h"

struct TessEvaluationShader {
	PyObject_HEAD
	int obj;
};

extern PyTypeObject TessEvaluationShaderType;
