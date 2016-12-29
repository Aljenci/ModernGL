#include "Parts/Methods.hpp"
#include "Parts/Errors.hpp"

#include "Graphics/OpenGL.hpp"

#include "Events/VersionChangeEvent.hpp"

#include "Types/Buffer.hpp"

namespace {

	PyObject * CopyBuffer(PyObject * self, PyObject * args, PyObject * kwargs) {
		static const char * kwlist[] = {"dst", "src", "size", "read_offset", "write_offset", 0};

		Buffer * dst;
		Buffer * src;
		
		int size = -1;
		int read_offset = 0;
		int write_offset = 0;

		if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O!O!|I$II:CopyBuffer", (char **)kwlist, &BufferType, &dst, &BufferType, &src, &size, &read_offset, &write_offset)) {
			return 0;
		}

		if (size < 0) {
			size = src->size - read_offset;
		}

		OpenGL::glBindBuffer(OpenGL::GL_COPY_READ_BUFFER, src->obj);
		OpenGL::glBindBuffer(OpenGL::GL_COPY_WRITE_BUFFER, dst->obj);
		OpenGL::glCopyBufferSubData(OpenGL::GL_COPY_READ_BUFFER, OpenGL::GL_COPY_WRITE_BUFFER, read_offset, write_offset, size);

		Py_RETURN_NONE;
	}

	PyObject * Dummy(PyObject * self, PyObject * args, PyObject * kwargs) {
		Py_RETURN_NONE;
	}

	ModuleMethod method = {
		"CopyBuffer",
		"",
		METH_VARARGS | METH_KEYWORDS,
		{
			(PyCFunction)Dummy, // OPENGL_UNK
			(PyCFunction)CopyBuffer, // OPENGL_330
			(PyCFunction)CopyBuffer, // OPENGL_400
			(PyCFunction)CopyBuffer, // OPENGL_410
			(PyCFunction)CopyBuffer, // OPENGL_420
			(PyCFunction)CopyBuffer, // OPENGL_430
			(PyCFunction)CopyBuffer, // OPENGL_440
			(PyCFunction)CopyBuffer, // OPENGL_450
		},
	};

	bool registered = RegisterMethod(method);

}
