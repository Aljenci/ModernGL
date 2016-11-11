#include "Primitive.hpp"

#include "Parts/Errors.hpp"
#include "Parts/Types.hpp"

#include "Graphics/OpenGL.hpp"

namespace {

	PyObject * Primitive_new(PyTypeObject * type, PyObject * args, PyObject * kwargs) {
		return type->tp_alloc(type, 0);
	}

	int Primitive_init(Primitive * self, PyObject * args, PyObject * kwargs) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	void Primitive_dealloc(Primitive * self) {
		Py_TYPE(self)->tp_free((PyObject*)self);
	}

	PyObject * Primitive_str(Primitive * self) {
		return PyUnicode_FromFormat("ModernGL.%s", self->name);
	}

	ModuleType type = {
		"Primitive",
		&PrimitiveType,
	};

	bool registered = RegisterType(type);
}

PyTypeObject PrimitiveType = {
	PyVarObject_HEAD_INIT(0, 0)
	"ModernGL.Primitive",
	sizeof(Primitive),
	0,
	(destructor)Primitive_dealloc,
	0,
	0,
	0,
	0,
	(reprfunc)Primitive_str,
	0,
	0,
	0,
	0,
	0,
	(reprfunc)Primitive_str,
	0,
	0,
	0,
	Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	"Primitive",
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	(initproc)Primitive_init,
	0,
	Primitive_new,
};

Primitive * NewPrimitive() {
	return (Primitive *)PrimitiveType.tp_alloc(&PrimitiveType, 0);
}
