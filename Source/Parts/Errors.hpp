#pragma once

#include "Python.h"

extern PyObject * BaseError;

bool RegisterErrors(PyObject * module);
