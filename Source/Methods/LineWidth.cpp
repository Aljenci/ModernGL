#include "Parts/Methods.hpp"
#include "Parts/Errors.hpp"

#include "Graphics/OpenGL.hpp"

#include "Events/VersionChangeEvent.hpp"

namespace {

	PyObject * LineWidth(PyObject * self, PyObject * args, PyObject * kwargs) {
		static const char * kwlist[] = {"width", 0};

		float width;

		if (!PyArg_ParseTupleAndKeywords(args, kwargs, "f", (char **)kwlist, &width)) {
			return 0;
		}

		OpenGL::glLineWidth(width);

		Py_RETURN_NONE;
	}

	PyObject * Dummy(PyObject * self, PyObject * args, PyObject * kwargs) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	ModuleMethod method = {
		"LineWidth",
		"",
		METH_VARARGS | METH_KEYWORDS,
		{
			(PyCFunction)Dummy, // OPENGL_UNK
			(PyCFunction)LineWidth, // OPENGL_330
			(PyCFunction)LineWidth, // OPENGL_400
			(PyCFunction)LineWidth, // OPENGL_410
			(PyCFunction)LineWidth, // OPENGL_420
			(PyCFunction)LineWidth, // OPENGL_430
			(PyCFunction)LineWidth, // OPENGL_440
			(PyCFunction)LineWidth, // OPENGL_450
		},
	};

	bool registered = RegisterMethod(method);

}
