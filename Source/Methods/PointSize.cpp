#include "Parts/Methods.hpp"
#include "Parts/Errors.hpp"

#include "Graphics/OpenGL.hpp"

#include "Events/VersionChangeEvent.hpp"

namespace {

	PyObject * PointSize(PyObject * self, PyObject * args, PyObject * kwargs) {
		static const char * kwlist[] = {"size", 0};

		float size;

		if (!PyArg_ParseTupleAndKeywords(args, kwargs, "f", (char **)kwlist, &size)) {
			return 0;
		}

		OpenGL::glPointSize(size);

		Py_RETURN_NONE;
	}

	PyObject * Dummy(PyObject * self, PyObject * args, PyObject * kwargs) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	ModuleMethod method = {
		"PointSize",
		"",
		METH_VARARGS | METH_KEYWORDS,
		{
			(PyCFunction)Dummy, // OPENGL_UNK
			(PyCFunction)PointSize, // OPENGL_330
			(PyCFunction)PointSize, // OPENGL_400
			(PyCFunction)PointSize, // OPENGL_410
			(PyCFunction)PointSize, // OPENGL_420
			(PyCFunction)PointSize, // OPENGL_430
			(PyCFunction)PointSize, // OPENGL_440
			(PyCFunction)PointSize, // OPENGL_450
		},
	};

	bool registered = RegisterMethod(method);

}
