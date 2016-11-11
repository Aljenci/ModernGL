#include "TessEvaluationShader.hpp"

#include "Parts/Errors.hpp"
#include "Parts/Types.hpp"

#include "Graphics/OpenGL.hpp"
#include "Graphics/ShadingLanguage.hpp"

namespace {

	PyObject * TessEvaluationShader_new(PyTypeObject * type, PyObject * args, PyObject * kwargs) {
		return type->tp_alloc(type, 0);
	}

	int TessEvaluationShader_init(TessEvaluationShader * self, PyObject * args, PyObject * kwargs) {
		static const char * kwlist[] = {"source", 0};

		const char * source = 0;

		if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s:TessEvaluationShader", (char **)kwlist, &source)) {
			return -1;
		}

		self->obj = CompileShader(OpenGL::GL_TESS_EVALUATION_SHADER, source);

		if (!self->obj) {
			return -1;
		}

		return 0;
	}

	void TessEvaluationShader_dealloc(TessEvaluationShader * self) {
		Py_TYPE(self)->tp_free((PyObject*)self);
	}

	PyObject * TessEvaluationShader_str(TessEvaluationShader * self) {
		return PyUnicode_FromFormat("<TessEvaluationShader: %d>", self->obj);
	}

	PyObject * TessEvaluationShader_get_obj(TessEvaluationShader * self) {
		return PyLong_FromLong(self->obj);
	}

	PyGetSetDef TessEvaluationShader_getseters[] = {
		{(char *)"obj", (getter)TessEvaluationShader_get_obj, 0, 0, 0},
		{0},
	};

	ModuleType type = {
		"TessEvaluationShader",
		&TessEvaluationShaderType,
	};

	bool registered = RegisterType(type);
}

PyTypeObject TessEvaluationShaderType = {
	PyVarObject_HEAD_INIT(0, 0)
	"ModernGL.TessEvaluationShader",
	sizeof(TessEvaluationShader),
	0,
	(destructor)TessEvaluationShader_dealloc,
	0,
	0,
	0,
	0,
	(reprfunc)TessEvaluationShader_str,
	0,
	0,
	0,
	0,
	0,
	(reprfunc)TessEvaluationShader_str,
	0,
	0,
	0,
	Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	"TessEvaluationShader",
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	TessEvaluationShader_getseters,
	0,
	0,
	0,
	0,
	0,
	(initproc)TessEvaluationShader_init,
	0,
	TessEvaluationShader_new,
};
