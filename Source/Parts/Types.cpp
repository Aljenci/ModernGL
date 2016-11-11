#include "Types.hpp"

int num_types = 0;
ModuleType types[1024];

bool RegisterType(const ModuleType & type) {
	types[num_types++] = type;
	return true;
}

bool RegisterTypes(PyObject * module) {
	for (int i = 0; i < num_types; ++i) {
		if (PyType_Ready(types[i].type) < 0) {
			return false;
		}
	}

	for (int i = 0; i < num_types; ++i) {
		Py_INCREF((PyObject *)types[i].type);
	}
	
	for (int i = 0; i < num_types; ++i) {
		PyModule_AddObject(module, types[i].name, (PyObject *)types[i].type);
	}

	return true;
}
