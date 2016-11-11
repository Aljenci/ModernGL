#pragma once

#include "Python.h"

#include "Graphics/GLVersion.hpp"

struct ModuleMethod {
	const char * name;
	const char * doc;
	int flags;
	PyCFunction meth[NUM_GLVER];
};

extern PyMethodDef methods[];

bool RegisterMethod(const ModuleMethod & method);
