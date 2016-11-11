#pragma once

#include "Python.h"

struct ModuleType {
	const char * name;
	PyTypeObject * type;
};

bool RegisterType(const ModuleType & type);
bool RegisterTypes(PyObject * module);
