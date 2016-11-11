#include "TessControlShader.hpp"

#include "Parts/Errors.hpp"
#include "Parts/Types.hpp"

#include "Graphics/OpenGL.hpp"
#include "Graphics/ShadingLanguage.hpp"

namespace {

	PyObject * TessControlShader_new(PyTypeObject * type, PyObject * args, PyObject * kwargs) {
		return type->tp_alloc(type, 0);
	}

	int TessControlShader_init(TessControlShader * self, PyObject * args, PyObject * kwargs) {
		static const char * kwlist[] = {"source", 0};

		const char * source = 0;

		if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s:TessControlShader", (char **)kwlist, &source)) {
			return -1;
		}

		self->obj = CompileShader(OpenGL::GL_TESS_CONTROL_SHADER, source);

		if (!self->obj) {
			return -1;
		}

		return 0;
	}

	void TessControlShader_dealloc(TessControlShader * self) {
		Py_TYPE(self)->tp_free((PyObject*)self);
	}

	PyObject * TessControlShader_str(TessControlShader * self) {
		return PyUnicode_FromFormat("<TessControlShader: %d>", self->obj);
	}

	PyObject * TessControlShader_get_obj(TessControlShader * self) {
		return PyLong_FromLong(self->obj);
	}

	PyGetSetDef TessControlShader_getseters[] = {
		{(char *)"obj", (getter)TessControlShader_get_obj, 0, 0, 0},
		{0},
	};

	ModuleType type = {
		"TessControlShader",
		&TessControlShaderType,
	};

	bool registered = RegisterType(type);
}

PyTypeObject TessControlShaderType = {
	PyVarObject_HEAD_INIT(0, 0)
	"ModernGL.TessControlShader",
	sizeof(TessControlShader),
	0,
	(destructor)TessControlShader_dealloc,
	0,
	0,
	0,
	0,
	(reprfunc)TessControlShader_str,
	0,
	0,
	0,
	0,
	0,
	(reprfunc)TessControlShader_str,
	0,
	0,
	0,
	Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	"TessControlShader",
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	TessControlShader_getseters,
	0,
	0,
	0,
	0,
	0,
	(initproc)TessControlShader_init,
	0,
	TessControlShader_new,
};
