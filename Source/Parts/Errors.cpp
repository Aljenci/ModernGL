#include "Errors.hpp"

PyObject * BaseError;

bool RegisterErrors(PyObject * module) {
	BaseError = PyErr_NewException((char *)"ModernGL.BaseError", 0, 0);

	Py_INCREF(BaseError);
	PyModule_AddObject(module, "BaseError", BaseError);

	return true;
}
