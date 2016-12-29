#include "Buffer.hpp"

#include "Parts/Errors.hpp"
#include "Parts/Types.hpp"

#include "Graphics/OpenGL.hpp"

namespace {

	PyObject * Buffer_new(PyTypeObject * type, PyObject * args, PyObject * kwargs) {
		return type->tp_alloc(type, 0);
	}

	int Buffer_init(Buffer * self, PyObject * args, PyObject * kwargs) {
		static const char * kwlist[] = {"data", "reserve", "dynamic", 0};

		const char * data = 0;
		int size = 0;
		int reserve = 0;
		bool dynamic = false;

		if (!PyArg_ParseTupleAndKeywords(args, kwargs, "|y#$Ip:Buffer", (char **)kwlist, &data, &size, &reserve, &dynamic)) {
			return -1;
		}

		if ((data && reserve) || (!data && !reserve)) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			return -1;
		}

		self->size = reserve ? reserve : size;
		self->dynamic = dynamic;

		self->obj = 0;
		OpenGL::glGenBuffers(1, (OpenGL::GLuint *)&self->obj);
		OpenGL::glBindBuffer(OpenGL::GL_ARRAY_BUFFER, self->obj);
		OpenGL::glBufferData(OpenGL::GL_ARRAY_BUFFER, self->size, data, dynamic ? OpenGL::GL_DYNAMIC_DRAW : OpenGL::GL_STATIC_DRAW);
		return 0;
	}

	void Buffer_dealloc(Buffer * self) {
		Py_TYPE(self)->tp_free((PyObject*)self);
	}

	PyObject * Buffer_str(Buffer * self) {
		return PyUnicode_FromFormat("<Buffer: %d>", self->obj);
	}

	PyObject * Buffer_read(Buffer * self, PyObject * args, PyObject * kwargs) {
		int size = -1;
		int offset = 0;

		static const char * kwlist[] = {"size", "offset", 0};

		if (!PyArg_ParseTupleAndKeywords(args, kwargs, "|I$I:Buffer", (char **)kwlist, &size, &offset)) {
			return 0;
		}

		if (size == -1) {
			size = self->size - offset;
		}

		OpenGL::glBindBuffer(OpenGL::GL_ARRAY_BUFFER, self->obj);
		void * map = OpenGL::glMapBufferRange(OpenGL::GL_ARRAY_BUFFER, offset, size, OpenGL::GL_MAP_READ_BIT);
		
		if (!map) {
			return 0;
		}

		PyObject * data = PyBytes_FromStringAndSize((const char *)map, size);
		OpenGL::glUnmapBuffer(OpenGL::GL_ARRAY_BUFFER);

		return data;
	}

	PyObject * Buffer_write(Buffer * self, PyObject * args, PyObject * kwargs) {
		static const char * kwlist[] = {"data", "offset", 0};

		const char * data = 0;
		int size = 0;
		int offset = 0;

		if (!PyArg_ParseTupleAndKeywords(args, kwargs, "y#|$I:write", (char **)kwlist, &data, &size, &offset)) {
			return 0;
		}

		OpenGL::glBindBuffer(OpenGL::GL_ARRAY_BUFFER, self->obj);
		OpenGL::glBufferSubData(OpenGL::GL_ARRAY_BUFFER, (OpenGL::GLintptr)offset, size, data);

		Py_RETURN_NONE;
	}

	// PyObject * Buffer_generate(Buffer * self, PyObject * args, PyObject * kwargs) {
	// 	static const char * kwlist[] = {"generate", "offset", "size", 0};

	// 	PyObject * generate;
	// 	int offset = 0;
	// 	int size = -1;

	// 	if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O|$II:Buffer", (char **)kwlist, &generate, &offset, &size)) {
	// 		return 0;
	// 	}

	// 	PyObject * iterator = PyObject_GetIter(generate);

	// 	if (!iterator) {
	// 		// fail
	// 		return 0;
	// 	}

	// 	if (size < 0) {
	// 		size = self->size - offset;
	// 	}

	// 	OpenGL::glBindBuffer(OpenGL::GL_ARRAY_BUFFER, self->obj);
	// 	char * map = (char *)OpenGL::glMapBufferRange(OpenGL::GL_ARRAY_BUFFER, offset, size, OpenGL::GL_MAP_WRITE_BIT);

	// 	if (!map) {
	// 		// fail
	// 		Py_DECREF(iterator);
	// 		return 0;
	// 	}

	// 	while (PyObject * item = PyIter_Next(iterator)) {
	// 		char * data = PyBytes_AsString(item);
	// 		int data_len = PyBytes_GET_SIZE(item);
			
	// 		memcpy(map, data, data_len);
	// 		map += data_len;

	// 		Py_DECREF(item);
	// 	}

	// 	OpenGL::glUnmapBuffer(OpenGL::GL_ARRAY_BUFFER);

	// 	Py_DECREF(iterator);

	// 	Py_RETURN_NONE;
	// }

	PyObject * Buffer_orphan(Buffer * self) {
		OpenGL::glBindBuffer(OpenGL::GL_ARRAY_BUFFER, self->obj);
		OpenGL::glBufferData(OpenGL::GL_ARRAY_BUFFER, self->size, 0, self->dynamic ? OpenGL::GL_DYNAMIC_DRAW : OpenGL::GL_STATIC_DRAW);
		Py_RETURN_NONE;
	}

	PyMethodDef Buffer_methods[] = {
		{"read", (PyCFunction)Buffer_read, METH_VARARGS | METH_KEYWORDS, 0},
		{"write", (PyCFunction)Buffer_write, METH_VARARGS | METH_KEYWORDS, 0},
		// {"generate", (PyCFunction)Buffer_generate, METH_VARARGS | METH_KEYWORDS, 0},
		{"orphan", (PyCFunction)Buffer_orphan, METH_NOARGS, 0},
		{0},
	};

	PyObject * Buffer_get_obj(Buffer * self) {
		return PyLong_FromLong(self->obj);
	}

	PyObject * Buffer_get_size(Buffer * self) {
		return PyLong_FromLong(self->size);
	}

	PyObject * Buffer_get_dynamic(Buffer * self) {
		return PyBool_FromLong(self->dynamic);
	}

	PyGetSetDef Buffer_getseters[] = {
		{(char *)"obj", (getter)Buffer_get_obj, 0, 0, 0},
		{(char *)"size", (getter)Buffer_get_size, 0, 0, 0},
		{(char *)"dynamic", (getter)Buffer_get_dynamic, 0, 0, 0},
		{0},
	};

	// int Buffer_buffer_get(PyObject * exporter, Py_buffer * view, int flags) {
	// 	if (err) {
	// 		// PyExc_BufferError;
	// 		view->obj = 0;
	// 		return -1;
	// 	}

	// 	view.buf = 0;
	// 	view.len = 0;
	// 	view.readonly = 0;
	// 	...

	// 	return 0;
	// }

	// void Buffer_buffer_release(PyObject * exporter, Py_buffer * view) {
	// }

	// PyBufferProcs Buffer_buffer_procs = {
	// 	(getbufferproc)Buffer_buffer_get,
	// 	(releasebufferproc)Buffer_buffer_release,
	// };

	ModuleType type = {
		"Buffer",
		&BufferType,
	};

	bool registered = RegisterType(type);
}

PyTypeObject BufferType = {
	PyVarObject_HEAD_INIT(0, 0)
	"ModernGL.Buffer",
	sizeof(Buffer),
	0,
	(destructor)Buffer_dealloc,
	0,
	0,
	0,
	0,
	(reprfunc)Buffer_str,
	0,
	0,
	0,
	0,
	0,
	(reprfunc)Buffer_str,
	0,
	0,
	0, // &Buffer_buffer_procs,
	Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	"Buffer",
	0,
	0,
	0,
	0,
	0,
	0,
	Buffer_methods,
	0,
	Buffer_getseters,
	0,
	0,
	0,
	0,
	0,
	(initproc)Buffer_init,
	0,
	Buffer_new,
};

// PyObject * CreateBufferType(int vao, int program, bool indexed) {
// 	Buffer * obj = (Buffer *)BufferType.tp_alloc(&BufferType, 0);

// 	if (obj != 0) {
// 		obj->vao = vao;
// 		obj->program = program;
// 		obj->indexed = indexed;
// 	}

// 	return (PyObject *)obj;
// }
