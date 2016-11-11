#pragma once

#include "Python.h"

#include "Types/Program.hpp"

struct VertexArray {
	PyObject_HEAD
	int obj;
	int vertices;
	Program * program;
	PyObject * buffers;
	bool indexed;
};

extern PyTypeObject VertexArrayType;
