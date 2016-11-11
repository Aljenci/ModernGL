#include "FragmentShader.hpp"

#include "Parts/Errors.hpp"
#include "Parts/Types.hpp"

#include "Graphics/OpenGL.hpp"
#include "Graphics/ShadingLanguage.hpp"

namespace {

	PyObject * FragmentShader_new(PyTypeObject * type, PyObject * args, PyObject * kwargs) {
		return type->tp_alloc(type, 0);
	}

	int FragmentShader_init(FragmentShader * self, PyObject * args, PyObject * kwargs) {
		static const char * kwlist[] = {"source", 0};

		const char * source = 0;

		if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s:FragmentShader", (char **)kwlist, &source)) {
			return -1;
		}

		self->obj = CompileShader(OpenGL::GL_FRAGMENT_SHADER, source);

		if (!self->obj) {
			return -1;
		}

		return 0;
	}

	void FragmentShader_dealloc(FragmentShader * self) {
		Py_TYPE(self)->tp_free((PyObject*)self);
	}

	PyObject * FragmentShader_str(FragmentShader * self) {
		return PyUnicode_FromFormat("<FragmentShader: %d>", self->obj);
	}

	PyObject * FragmentShader_get_obj(FragmentShader * self) {
		return PyLong_FromLong(self->obj);
	}

	PyGetSetDef FragmentShader_getseters[] = {
		{(char *)"obj", (getter)FragmentShader_get_obj, 0, 0, 0},
		{0},
	};

	ModuleType type = {
		"FragmentShader",
		&FragmentShaderType,
	};

	bool registered = RegisterType(type);
}

PyTypeObject FragmentShaderType = {
	PyVarObject_HEAD_INIT(0, 0)
	"ModernGL.FragmentShader",
	sizeof(FragmentShader),
	0,
	(destructor)FragmentShader_dealloc,
	0,
	0,
	0,
	0,
	(reprfunc)FragmentShader_str,
	0,
	0,
	0,
	0,
	0,
	(reprfunc)FragmentShader_str,
	0,
	0,
	0,
	Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	"FragmentShader",
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	FragmentShader_getseters,
	0,
	0,
	0,
	0,
	0,
	(initproc)FragmentShader_init,
	0,
	FragmentShader_new,
};
