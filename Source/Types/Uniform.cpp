#include "Uniform.hpp"

#include "Parts/Errors.hpp"
#include "Parts/Types.hpp"

#include "Graphics/OpenGL.hpp"

namespace {

	PyObject * Uniform_new(PyTypeObject * type, PyObject * args, PyObject * kwargs) {
		return type->tp_alloc(type, 0);
	}

	int Uniform_init(Uniform * self, PyObject * args, PyObject * kwargs) {
		return -1;
	}

	void Uniform_dealloc(Uniform * self) {
		Py_TYPE(self)->tp_free((PyObject*)self);
	}

	PyObject * Uniform_str(Uniform * self) {
		return PyUnicode_FromFormat("<Uniform: %s>", self->info.name);
	}

	PyObject * Uniform_get_name(Uniform * self, void * closure) {
		return PyUnicode_FromFormat("%s", self->info.name);
	}

	PyObject * Uniform_get_location(Uniform * self, void * closure) {
		return PyLong_FromLong(self->location);
	}

	PyObject * Uniform_get_value(Uniform * self, void * closure) {
		return self->getter(self);
	}

	int Uniform_set_value(Uniform * self, PyObject * value, void * closure) {
		return self->setter(self, value);
	}

	PyGetSetDef Uniform_getseters[] = {
		{(char *)"name", (getter)Uniform_get_name, 0, 0, 0},
		{(char *)"location", (getter)Uniform_get_location, 0, 0, 0},
		{(char *)"value", (getter)Uniform_get_value, (setter)Uniform_set_value, 0, 0},
	};

	PyObject * Uniform_read(Uniform * self) {
		return self->reader(self);
	}

	PyObject * Uniform_write(Uniform * self) {
		return 0;
	}

	PyMethodDef Uniform_methods[] = {
		{"read", (PyCFunction)Uniform_read, METH_VARARGS | METH_KEYWORDS, 0},
		{"write", (PyCFunction)Uniform_write, METH_VARARGS | METH_KEYWORDS, 0},
		{0},
	};

	ModuleType type = {
		"Uniform",
		&UniformType,
	};

	bool registered = RegisterType(type);
}

PyTypeObject UniformType = {
	PyVarObject_HEAD_INIT(0, 0)
	"ModernGL.Uniform",
	sizeof(Uniform),
	0,
	(destructor)Uniform_dealloc,
	0,
	0,
	0,
	0,
	(reprfunc)Uniform_str,
	0,
	0,
	0,
	0,
	0,
	(reprfunc)Uniform_str,
	0,
	0,
	0,
	Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	"Uniform",
	0,
	0,
	0,
	0,
	0,
	0,
	Uniform_methods,
	0,
	Uniform_getseters,
	0,
	0,
	0,
	0,
	0,
	(initproc)Uniform_init,
	0,
	Uniform_new,
};

Uniform * NewUniform() {
	return (Uniform *)UniformType.tp_alloc(&UniformType, 0);
}
