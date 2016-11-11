#include "Parts/Methods.hpp"
#include "Parts/Errors.hpp"

#include "Graphics/OpenGL.hpp"

#include "Events/VersionChangeEvent.hpp"

namespace {

	PyObject * Init(PyObject * self, PyObject * args, PyObject * kwargs) {
		int major = -1;
		int minor = 0;
		bool force = false;

		static const char * kwlist[] = {"version", "force", 0};

		if (!PyArg_ParseTupleAndKeywords(args, kwargs, "|(II)$p:Init", (char **)kwlist, &major, &minor, &force)) {
			return 0;
		}

		if (!OpenGL::InitializeOpenGL()) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			return 0;
		}

		int gl_major = 0;
		int gl_minor = 0;

		if (OpenGL::glGetIntegerv != 0) {
			OpenGL::glGetIntegerv(OpenGL::GL_MAJOR_VERSION, &gl_major);
			OpenGL::glGetIntegerv(OpenGL::GL_MINOR_VERSION, &gl_minor);
		}

		if (major == -1 && minor == 0) {
			major = gl_major;
			minor = gl_minor;
		} else if (!force && (major > gl_major || (major == gl_major && minor > gl_minor))) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			return 0;
		}

		GLVER glver = GLVersionIndex(major, minor);

		if (glver == OPENGL_UNK) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			return 0;
		}

		SendVersionChangeEvent(glver);

		Py_RETURN_NONE;
	}

	ModuleMethod method = {
		"Init",
		"",
		METH_VARARGS | METH_KEYWORDS,
		{
			(PyCFunction)Init, // OPENGL_UNK
			(PyCFunction)Init, // OPENGL_330
			(PyCFunction)Init, // OPENGL_400
			(PyCFunction)Init, // OPENGL_410
			(PyCFunction)Init, // OPENGL_420
			(PyCFunction)Init, // OPENGL_430
			(PyCFunction)Init, // OPENGL_440
			(PyCFunction)Init, // OPENGL_450
		},
	};

	bool registered = RegisterMethod(method);

}
