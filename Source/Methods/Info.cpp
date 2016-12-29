#include "Parts/Methods.hpp"
#include "Parts/Errors.hpp"

#include "Graphics/OpenGL.hpp"

#include "Events/VersionChangeEvent.hpp"

namespace {

	PyObject * Info(PyObject * self) {
		int major = 0;
		int minor = 0;
		int samples = 0;

		OpenGL::glGetIntegerv(OpenGL::GL_MAJOR_VERSION, &major);
		OpenGL::glGetIntegerv(OpenGL::GL_MINOR_VERSION, &minor);
		OpenGL::glGetIntegerv(OpenGL::GL_MAX_SAMPLES, &samples);

		const char * vendor = (const char *)OpenGL::glGetString(OpenGL::GL_VENDOR);
		const char * renderer = (const char *)OpenGL::glGetString(OpenGL::GL_RENDERER);

		if (!vendor) {
			vendor = "";
		}

		if (!renderer) {
			renderer = "";
		}

		PyObject * dict = PyDict_New();
		PyDict_SetItemString(dict, "version", PyTuple_Pack(2, PyLong_FromLong(major), PyLong_FromLong(minor)));
		PyDict_SetItemString(dict, "samples", PyLong_FromLong(major));
		PyDict_SetItemString(dict, "vendor", PyUnicode_FromString(vendor));
		PyDict_SetItemString(dict, "renderer", PyUnicode_FromString(renderer));
		
		return dict;
	}

	PyObject * Dummy(PyObject * self, PyObject * args, PyObject * kwargs) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	ModuleMethod method = {
		"Info",
		"",
		METH_NOARGS,
		{
			(PyCFunction)Dummy, // OPENGL_UNK
			(PyCFunction)Info, // OPENGL_330
			(PyCFunction)Info, // OPENGL_400
			(PyCFunction)Info, // OPENGL_410
			(PyCFunction)Info, // OPENGL_420
			(PyCFunction)Info, // OPENGL_430
			(PyCFunction)Info, // OPENGL_440
			(PyCFunction)Info, // OPENGL_450
		},
	};

	bool registered = RegisterMethod(method);

}
