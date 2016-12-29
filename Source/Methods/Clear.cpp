#include "Parts/Methods.hpp"
#include "Parts/Errors.hpp"

#include "Graphics/OpenGL.hpp"

#include "Events/VersionChangeEvent.hpp"

namespace {

	PyObject * Clear(PyObject * self, PyObject * args, PyObject * kwargs) {
		unsigned char r = 0;
		unsigned char g = 0;
		unsigned char b = 0;
		unsigned char a = 255;

		static const char * kwlist[] = {"r", "g", "b", "a", 0};

		if (!PyArg_ParseTupleAndKeywords(args, kwargs, "|bbbb:Clear", (char **)kwlist, &r, &g, &b, &a)) {
			return 0;
		}

		const float c = 1.0f / 255.0f;
		OpenGL::glClearColor(r * c, g * c, b * c, a * c);
		OpenGL::glClear(OpenGL::GL_DEPTH_BUFFER_BIT | OpenGL::GL_COLOR_BUFFER_BIT);
		Py_RETURN_NONE;
	}

	PyObject * Dummy(PyObject * self, PyObject * args, PyObject * kwargs) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
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
