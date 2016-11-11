#pragma once

#include "Python.h"

struct Buffer {
	PyObject_HEAD
	int obj;
	int size;
	bool dynamic;
};

extern PyTypeObject BufferType;
