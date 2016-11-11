#include "Parts/Methods.hpp"

#include "Graphics/OpenGL.hpp"

#include "Events/VersionChangeEvent.hpp"

namespace {

	PyObject * Clear(PyObject * self, PyObject * args, PyObject * kwargs) {
		OpenGL::glClear(OpenGL::GL_COLOR_BUFFER_BIT | OpenGL::GL_DEPTH_BUFFER_BIT);
		Py_RETURN_NONE;
	}

	PyObject * Dummy(PyObject * self, PyObject * args, PyObject * kwargs) {
		Py_RETURN_NONE;
	}

	ModuleMethod method = {
		"Clear",
		"",
		METH_VARARGS | METH_KEYWORDS,
		{
			(PyCFunction)Dummy, // OPENGL_UNK
			(PyCFunction)Clear, // OPENGL_330
			(PyCFunction)Clear, // OPENGL_400
			(PyCFunction)Clear, // OPENGL_410
			(PyCFunction)Clear, // OPENGL_420
			(PyCFunction)Clear, // OPENGL_430
			(PyCFunction)Clear, // OPENGL_440
			(PyCFunction)Clear, // OPENGL_450
		},
	};

	bool registered = RegisterMethod(method);

}
