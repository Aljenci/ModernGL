#pragma once

#include "Python.h"

struct Primitive {
	PyObject_HEAD
	int primitive;
	int transform_primitive;
	const char * name;
};

extern PyTypeObject PrimitiveType;

Primitive * NewPrimitive();
