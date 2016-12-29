#include "Texture.hpp"

#include "Parts/Errors.hpp"
#include "Parts/Types.hpp"

#include "Graphics/OpenGL.hpp"

namespace {

	PyObject * Texture_new(PyTypeObject * type, PyObject * args, PyObject * kwargs) {
		return type->tp_alloc(type, 0);
	}

	int Texture_init(Texture * self, PyObject * args, PyObject * kwargs) { // TODO: FIX
		static const char * kwlist[] = {"size", "components", "data", 0};

		int width;
		int height;
		int components;
		const char * data = 0;
		int size = 0;

		if (!PyArg_ParseTupleAndKeywords(args, kwargs, "(II)I|y#:Texture", (char **)kwlist, &width, &height, &components, &data, &size)) {
			return -1;
		}

		self->width = width;
		self->height = height;
		self->components = components;

		static const int formats[] = {0, OpenGL::GL_RED, OpenGL::GL_RG, OpenGL::GL_RGB, OpenGL::GL_RGBA};
		int format = formats[components];
		int pixel_type = OpenGL::GL_UNSIGNED_BYTE;

		int defaultTextureUnit = 10; // TODO: FIX
		OpenGL::glActiveTexture(OpenGL::GL_TEXTURE0 + defaultTextureUnit);

		self->obj = 0;
		OpenGL::glGenTextures(1, (OpenGL::GLuint *)&self->obj);
		OpenGL::glBindTexture(OpenGL::GL_TEXTURE_2D, self->obj);
		OpenGL::glTexParameteri(OpenGL::GL_TEXTURE_2D, OpenGL::GL_TEXTURE_MIN_FILTER, OpenGL::GL_LINEAR);
		OpenGL::glTexParameteri(OpenGL::GL_TEXTURE_2D, OpenGL::GL_TEXTURE_MAG_FILTER, OpenGL::GL_LINEAR);
		OpenGL::glTexImage2D(OpenGL::GL_TEXTURE_2D, 0, format, width, height, 0, format, pixel_type, data);

		return 0;
	}

	void Texture_dealloc(Texture * self) {
		Py_TYPE(self)->tp_free((PyObject*)self);
	}

	PyObject * Texture_str(Texture * self) {
		return PyUnicode_FromFormat("<Texture: %d>", self->obj);
	}

	PyObject * Texture_use(Texture * self, PyObject * args, PyObject * kwargs) {
		static const char * kwlist[] = {"location", 0};

		int location = 0;

		if (!PyArg_ParseTupleAndKeywords(args, kwargs, "|I:use", (char **)kwlist, &location)) {
			return 0;
		}

		OpenGL::glActiveTexture(OpenGL::GL_TEXTURE0 + location);
		OpenGL::glBindTexture(OpenGL::GL_TEXTURE_2D, self->obj);

		Py_RETURN_NONE;
	}

	PyMethodDef Texture_methods[] = {
		{"use", (PyCFunction)Texture_use, METH_VARARGS | METH_KEYWORDS, 0},
		{0},
	};

	// PyObject * Texture_get_obj(Texture * self) {
	// 	return PyLong_FromLong(self->obj);
	// }

	// PyObject * Texture_get_size(Texture * self) {
	// 	return PyLong_FromLong(self->size);
	// }

	// PyObject * Texture_get_dynamic(Texture * self) {
	// 	return PyBool_FromLong(self->dynamic);
	// }

	PyGetSetDef Texture_getseters[] = {
		// {(char *)"obj", (getter)Texture_get_obj, 0, 0, 0},
		// {(char *)"width", (getter)Texture_get_width, 0, 0, 0},
		// {(char *)"height", (getter)Texture_get_height, 0, 0, 0},
		// {(char *)"size", (getter)Texture_get_size, 0, 0, 0},
		{0},
	};

	ModuleType type = {
		"Texture",
		&TextureType,
	};

	bool registered = RegisterType(type);
}

PyTypeObject TextureType = {
	PyVarObject_HEAD_INIT(0, 0)
	"ModernGL.Texture",
	sizeof(Texture),
	0,
	(destructor)Texture_dealloc,
	0,
	0,
	0,
	0,
	(reprfunc)Texture_str,
	0,
	0,
	0,
	0,
	0,
	(reprfunc)Texture_str,
	0,
	0,
	0, // &Texture_buffer_procs,
	Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	"Texture",
	0,
	0,
	0,
	0,
	0,
	0,
	Texture_methods,
	0,
	Texture_getseters,
	0,
	0,
	0,
	0,
	0,
	(initproc)Texture_init,
	0,
	Texture_new,
};

// PyObject * CreateTextureType(int vao, int program, bool indexed) {
// 	Texture * obj = (Texture *)TextureType.tp_alloc(&TextureType, 0);

// 	if (obj != 0) {
// 		obj->vao = vao;
// 		obj->program = program;
// 		obj->indexed = indexed;
// 	}

// 	return (PyObject *)obj;
// }
