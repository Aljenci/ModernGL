#include "Parts/Methods.hpp"
#include "Parts/Errors.hpp"

#include "Graphics/OpenGL.hpp"

#include "Events/VersionChangeEvent.hpp"

namespace {

	PyObject * VSync(PyObject * self, PyObject * args, PyObject * kwargs) {
		int on;

		static const char * kwlist[] = {"on", 0};

		if (!PyArg_ParseTupleAndKeywords(args, kwargs, "p:VSync", (char **)kwlist, &on)) {
			return 0;
		}

		if (OpenGL::glSwapInterval) {
			OpenGL::glSwapInterval(on);
		}

		Py_RETURN_NONE;
	}

	PyObject * Dummy(PyObject * self, PyObject * args, PyObject * kwargs) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	ModuleMethod method = {
		"VSync",
		"",
		METH_VARARGS | METH_KEYWORDS,
		{
			(PyCFunction)Dummy, // OPENGL_UNK
			(PyCFunction)VSync, // OPENGL_330
			(PyCFunction)VSync, // OPENGL_400
			(PyCFunction)VSync, // OPENGL_410
			(PyCFunction)VSync, // OPENGL_420
			(PyCFunction)VSync, // OPENGL_430
			(PyCFunction)VSync, // OPENGL_440
			(PyCFunction)VSync, // OPENGL_450
		},
	};

	bool registered = RegisterMethod(method);

}
