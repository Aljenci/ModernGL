#include "VertexArray.hpp"

#include "Parts/Errors.hpp"
#include "Parts/Types.hpp"

#include "Graphics/OpenGL.hpp"

#include "Types/Buffer.hpp"
#include "Types/Primitive.hpp"

#include "Misc/BufferFormat.hpp"

namespace {

	PyObject * VertexArray_new(PyTypeObject * type, PyObject * args, PyObject * kwargs) {
		VertexArray * self = (VertexArray *)type->tp_alloc(type, 0);

		if (self) {
			self->program = 0;
			self->buffers = 0;
		}

		return (PyObject *)self;
	}

	int VertexArray_init(VertexArray * self, PyObject * args, PyObject * kwargs) {		
		static const char * kwlist[] = {"program", "content", "indices", 0};

		Program * program;
		PyObject * content;
		Buffer * indices = 0;

		if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O!O!|O!:Buffer", (char **)kwlist, &ProgramType, &program, &PyList_Type, &content, &BufferType, &indices)) {
			return -1;
		}

		{
			PyObject * tmp = (PyObject *)self->program;
			Py_INCREF((PyObject *)program);
			self->program = program;
			Py_XDECREF(tmp);
		}

		int content_len = PyList_GET_SIZE(content);

		if (!content_len) {
			PyErr_Format(PyExc_RuntimeError, "Line: %d", __LINE__);
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			return -1;
		}

		self->obj = 0;
		OpenGL::glGenVertexArrays(1, (OpenGL::GLuint *)&self->obj);
		OpenGL::glBindVertexArray(self->obj);

		if (indices) {
			self->indexed = true;
			self->vertices = indices->size / 4;
			OpenGL::glBindBuffer(OpenGL::GL_ELEMENT_ARRAY_BUFFER, indices->obj);
		} else {
			self->indexed = false;
			self->vertices = -1;
		}

		for (int i = 0; i < content_len; ++i) {
			PyObject * tuple = PyList_GET_ITEM(content, i);
			if (PyTuple_Size(tuple) != 3) {
				PyErr_Format(PyExc_RuntimeError, "Line: %d", __LINE__);
				OpenGL::glDeleteVertexArrays(1, (OpenGL::GLuint *)&self->obj);
				return -1;
			}

			Buffer * vbo = (Buffer *)PyTuple_GET_ITEM(tuple, 0);

			if (!PyObject_TypeCheck((PyObject *)vbo, &BufferType)) {
				PyErr_Format(PyExc_RuntimeError, "Line: %d", __LINE__);
				OpenGL::glDeleteVertexArrays(1, (OpenGL::GLuint *)&self->obj);
				return -1;
			}

			int format_len = 0;
			char * format = PyUnicode_AsUTF8AndSize(PyTuple_GET_ITEM(tuple, 1), &format_len);

			if (!format || !format_len) {
				PyErr_Format(PyExc_RuntimeError, "Line: %d", __LINE__);
				OpenGL::glDeleteVertexArrays(1, (OpenGL::GLuint *)&self->obj);
				return -1;
			}

			FormatIterator it = FormatIterator(format);
			FormatInfo format_info = it.info();

			if (!format_info.valid) {
				PyErr_Format(PyExc_RuntimeError, "Line: %d", __LINE__);
				OpenGL::glDeleteVertexArrays(1, (OpenGL::GLuint *)&self->obj);
				return -1;
			}

			int buf_vertices = vbo->size / format_info.size;
			if (!format_info.per_instance && !indices && (!i || self->vertices > buf_vertices)) {
				self->vertices = buf_vertices;
			}

			PyObject * attribs = PyTuple_GET_ITEM(tuple, 2);
			int attribs_len = PyList_Size(attribs);

			if (!attribs_len || attribs_len != format_info.nodes) {
				PyErr_Format(PyExc_RuntimeError, "Line: %d", __LINE__);
				OpenGL::glDeleteVertexArrays(1, (OpenGL::GLuint *)&self->obj);
				return -1;
			}

			OpenGL::glBindBuffer(OpenGL::GL_ARRAY_BUFFER, vbo->obj);

			char * ptr = 0;

			for (int i = 0; i < attribs_len; ++i) {
				char * attrib = PyUnicode_AsUTF8(PyList_GET_ITEM(attribs, i));

				int location = OpenGL::glGetAttribLocation(self->program->obj, attrib);

				if (location < 0) {
					PyErr_Format(PyExc_RuntimeError, "Line: %d", __LINE__);
					OpenGL::glDeleteVertexArrays(1, (OpenGL::GLuint *)&self->obj);
					return -1;
				}

				FormatNode * node = it.next();

				if (node->type == OpenGL::GL_INT) {
					OpenGL::glVertexAttribIPointer(location, node->count, node->type, format_info.size, ptr);
				} else {
					OpenGL::glVertexAttribPointer(location, node->count, node->type, false, format_info.size, ptr);
					// printf("[%d] %s %d %d %d %p\n", vbo->obj, attrib, location, node->count, format_info.size, ptr);
				}

				if (format_info.per_instance) {
					OpenGL::glVertexAttribDivisor(location, 1);
				}

				OpenGL::glEnableVertexAttribArray(location);

				ptr += node->count * node->size;
			}
		}

		self->buffers = PyList_New(content_len + (indices ? 1 : 0));

		if (!self->buffers) {
			PyErr_Format(PyExc_RuntimeError, "Line: %d", __LINE__);
			OpenGL::glDeleteVertexArrays(1, (OpenGL::GLuint *)&self->obj);
			return -1;
		}

		for (int i = 0; i < content_len; ++i) {
			PyObject * tuple = PyList_GET_ITEM(content, i);
			PyObject * vbo = PyTuple_GET_ITEM(tuple, 0);

			Py_INCREF(vbo);
			PyList_SET_ITEM(self->buffers, i, vbo);
		}

		if (indices) {
			Py_INCREF((PyObject *)indices);
			PyList_SET_ITEM(self->buffers, content_len, (PyObject *)indices);
		}

		return 0;
	}

	void VertexArray_dealloc(VertexArray * self) {
		Py_XDECREF((PyObject *)self->program);
		Py_TYPE(self)->tp_free((PyObject*)self);
	}

	PyObject * VertexArray_str(VertexArray * self) {
		return PyUnicode_FromFormat("<VertexArray: %d>", self->obj);
	}

	PyObject * VertexArray_enable(VertexArray * self, PyObject * args) {
		int args_len = PyTuple_GET_SIZE(args);

		if (!args_len) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			return 0;
		}

		OpenGL::glBindVertexArray(self->obj);

		for (int i = 0; i < args_len; ++i) {
			char * attrib = PyUnicode_AsUTF8(PyTuple_GET_ITEM(args, i));

			if (!attrib) {
				PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
				return 0;
			}

			int location = OpenGL::glGetAttribLocation(self->program->obj, attrib);

			if (location < 0) {
				PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
				return 0;
			}

			OpenGL::glEnableVertexAttribArray(location);
		}

		Py_RETURN_NONE;
	}

	PyObject * VertexArray_disable(VertexArray * self, PyObject * args) {
		int args_len = PyTuple_GET_SIZE(args);

		if (!args_len) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			return 0;
		}

		OpenGL::glBindVertexArray(self->obj);

		for (int i = 0; i < args_len; ++i) {
			char * attrib = PyUnicode_AsUTF8(PyTuple_GET_ITEM(args, i));

			if (!attrib) {
				PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
				return 0;
			}

			int location = OpenGL::glGetAttribLocation(self->program->obj, attrib);

			if (location < 0) {
				PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
				return 0;
			}

			OpenGL::glDisableVertexAttribArray(location);
		}

		Py_RETURN_NONE;
	}

	PyObject * VertexArray_render(VertexArray * self, PyObject * args, PyObject * kwargs) {
		static const char * kwlist[] = {"mode", "vertices", "first", "instances", 0};

		Primitive * mode;
		int vertices = -1;
		int first = 0;
		int instances = 1;

		if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O!|I$II:render", (char **)kwlist, &PrimitiveType, &mode, &vertices, &first, &instances)) {
			return 0;
		}

		if (vertices < 0) {
			if (self->vertices < 0) {
				PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
				return 0;
			}

			vertices = self->vertices;
		}

		OpenGL::glUseProgram(self->program->obj);
		OpenGL::glBindVertexArray(self->obj);

		if (self->indexed) {
			const void * ptr = (const void *)((OpenGL::GLintptr)first * 4);
			OpenGL::glDrawElementsInstanced(mode->primitive, vertices, OpenGL::GL_UNSIGNED_INT, ptr, instances);
		} else {
			OpenGL::glDrawArraysInstanced(mode->primitive, first, vertices, instances);
		}

		Py_RETURN_NONE;
	}

	PyObject * VertexArray_transform(VertexArray * self, PyObject * args, PyObject * kwargs) {
		static const char * kwlist[] = {"mode", "output", "vertices", "first", "instances", "output_mode", 0};

		Primitive * mode;
		Buffer * output;
		Primitive * output_mode = 0;
		int vertices = -1;
		int first = 0;
		int instances = 1;

		if (!self->program->varyings) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			return 0;
		}

		if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O!O!|I$IIO!:transform", (char **)kwlist, &PrimitiveType, &mode, &BufferType, &output, &vertices, &first, &instances, &PrimitiveType, &output_mode)) {
			return 0;
		}

		if (output_mode && output_mode->primitive != output_mode->transform_primitive) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			return 0;
		}

		int output_primitive = 0;

		if (output_mode) {
			output_primitive = output_mode->transform_primitive;
		} else {
			if (self->program->geometry_out) {
				output_primitive = self->program->geometry_out;
			} else {
				output_primitive = mode->transform_primitive;
			}
		}

		if (vertices < 0) {
			if (self->vertices < 0) {
				PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
				return 0;
			}

			vertices = self->vertices;
		}

		OpenGL::glUseProgram(self->program->obj);
		OpenGL::glBindVertexArray(self->obj);

		OpenGL::glBindBufferBase(OpenGL::GL_TRANSFORM_FEEDBACK_BUFFER, 0, output->obj);

		OpenGL::glEnable(OpenGL::GL_RASTERIZER_DISCARD);
		OpenGL::glBeginTransformFeedback(mode->primitive);

		if (self->indexed) {
			const void * ptr = (const void *)((OpenGL::GLintptr)first * 4);
			OpenGL::glDrawElementsInstanced(mode->primitive, vertices, OpenGL::GL_UNSIGNED_INT, ptr, instances);
		} else {
			OpenGL::glDrawArraysInstanced(mode->primitive, first, vertices, instances);
		}

		OpenGL::glEndTransformFeedback();
		OpenGL::glDisable(OpenGL::GL_RASTERIZER_DISCARD);
		OpenGL::glFlush();

		Py_RETURN_NONE;
	}

	PyMethodDef VertexArray_methods[] = {
		{"render", (PyCFunction)VertexArray_render, METH_VARARGS | METH_KEYWORDS, 0},
		{"transform", (PyCFunction)VertexArray_transform, METH_VARARGS | METH_KEYWORDS, 0},
		{"enable", (PyCFunction)VertexArray_enable, METH_VARARGS, 0},
		{"disable", (PyCFunction)VertexArray_disable, METH_VARARGS, 0},
		{0},
	};

	PyObject * VertexArray_get_obj(VertexArray * self) {
		return PyLong_FromLong(self->obj);
	}

	PyObject * VertexArray_get_program(VertexArray * self) {
		Py_INCREF((PyObject *)self->program);
		return (PyObject *)self->program;
	}

	PyObject * VertexArray_get_buffers(VertexArray * self) {
		Py_INCREF((PyObject *)self->buffers);
		return (PyObject *)self->buffers;
	}

	PyObject * VertexArray_get_vertices(VertexArray * self) {
		return PyLong_FromLong(self->vertices);
	}

	PyGetSetDef VertexArray_getseters[] = {
		{(char *)"obj", (getter)VertexArray_get_obj, 0, 0, 0},
		{(char *)"program", (getter)VertexArray_get_program, 0, 0, 0},
		{(char *)"buffers", (getter)VertexArray_get_buffers, 0, 0, 0},
		{(char *)"vertices", (getter)VertexArray_get_vertices, 0, 0, 0},
		{0},
	};

	ModuleType type = {
		"VertexArray",
		&VertexArrayType,
	};

	bool registered = RegisterType(type);
}

PyTypeObject VertexArrayType = {
	PyVarObject_HEAD_INIT(0, 0)
	"ModernGL.VertexArray",
	sizeof(VertexArray),
	0,
	(destructor)VertexArray_dealloc,
	0,
	0,
	0,
	0,
	(reprfunc)VertexArray_str,
	0,
	0,
	0,
	0,
	0,
	(reprfunc)VertexArray_str,
	0,
	0,
	0,
	Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	"VertexArray",
	0,
	0,
	0,
	0,
	0,
	0,
	VertexArray_methods,
	0,
	VertexArray_getseters,
	0,
	0,
	0,
	0,
	0,
	(initproc)VertexArray_init,
	0,
	VertexArray_new,
};
