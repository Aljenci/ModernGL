#include "ModernGL.hpp"

#include "Events/LoadEvent.hpp"

#include "Parts/Methods.hpp"
#include "Parts/Errors.hpp"
#include "Parts/Types.hpp"
#include "Parts/Constants.hpp"

PyObject * module;

extern "C" PyObject * PyInit_ModernGL();

PyModuleDef moduledef = {PyModuleDef_HEAD_INIT, "ModernGL", 0, -1, methods, 0, 0, 0, 0};

PyObject * PyInit_ModernGL() {
	SendLoadEvent();

	module = PyModule_Create(&moduledef);
	
	if (!module) {
		PyErr_SetString(PyExc_ImportError, "cannot import module");
		return 0;
	}

	if (!RegisterErrors(module)) {
		return 0;
	}
	
	if (!RegisterTypes(module)) {
		return 0;
	}

	if (!RegisterConstants(module)) {
		return 0;
	}


	return module;
}
