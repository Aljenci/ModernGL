#include "Parts/Methods.hpp"
#include "Parts/Errors.hpp"

#include "Graphics/OpenGL.hpp"

#include "Events/VersionChangeEvent.hpp"

namespace {

	PyObject * Viewport(PyObject * self, PyObject * args, PyObject * kwargs) {
		static const char * kwlist[] = {"x", "y", "width", "height", "depth", 0};

		int x;
		int y;
		int width;
		int height;

		int depth_near = 0;
		int depth_far = 1;

		if (!PyArg_ParseTupleAndKeywords(args, kwargs, "iiii|$(ii)", (char **)kwlist, &x, &y, &width, &height, &depth_near, &depth_far)) {
			return 0;
		}

		OpenGL::glViewport(x, y, width, height);
		OpenGL::glDepthRangef(depth_near, depth_far);

		Py_RETURN_NONE;
	}

	PyObject * Dummy(PyObject * self, PyObject * args, PyObject * kwargs) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	ModuleMethod method = {
		"Viewport",
		"",
		METH_VARARGS | METH_KEYWORDS,
		{
			(PyCFunction)Dummy, // OPENGL_UNK
			(PyCFunction)Viewport, // OPENGL_330
			(PyCFunction)Viewport, // OPENGL_400
			(PyCFunction)Viewport, // OPENGL_410
			(PyCFunction)Viewport, // OPENGL_420
			(PyCFunction)Viewport, // OPENGL_430
			(PyCFunction)Viewport, // OPENGL_440
			(PyCFunction)Viewport, // OPENGL_450
		},
	};

	bool registered = RegisterMethod(method);

}
