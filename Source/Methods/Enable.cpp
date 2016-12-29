#include "Parts/Methods.hpp"
#include "Parts/Errors.hpp"

#include "Graphics/OpenGL.hpp"

#include "Events/VersionChangeEvent.hpp"

namespace {

	PyObject * Enable(PyObject * self, PyObject * args) {
		int size = PyTuple_Size(args);
		for (int i = 0; i < size; ++i) {
			int flag = PyLong_AsLong(PyTuple_GET_ITEM(args, i));
			OpenGL::glEnable(flag);
		}
		Py_RETURN_NONE;
	}

	PyObject * Dummy(PyObject * self, PyObject * args, PyObject * kwargs) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	ModuleMethod method = {
		"Enable",
		"",
		METH_VARARGS,
		{
			(PyCFunction)Dummy, // OPENGL_UNK
			(PyCFunction)Enable, // OPENGL_330
			(PyCFunction)Enable, // OPENGL_400
			(PyCFunction)Enable, // OPENGL_410
			(PyCFunction)Enable, // OPENGL_420
			(PyCFunction)Enable, // OPENGL_430
			(PyCFunction)Enable, // OPENGL_440
			(PyCFunction)Enable, // OPENGL_450
		},
	};

	bool registered = RegisterMethod(method);

}
