#include "VertexShader.hpp"

#include "Parts/Errors.hpp"
#include "Parts/Types.hpp"

#include "Graphics/OpenGL.hpp"
#include "Graphics/ShadingLanguage.hpp"

namespace {

	PyObject * VertexShader_new(PyTypeObject * type, PyObject * args, PyObject * kwargs) {
		return type->tp_alloc(type, 0);
	}

	int VertexShader_init(VertexShader * self, PyObject * args, PyObject * kwargs) {
		static const char * kwlist[] = {"source", 0};

		const char * source = 0;

		if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s:VertexShader", (char **)kwlist, &source)) {
			return -1;
		}

		self->obj = CompileShader(OpenGL::GL_VERTEX_SHADER, source);

		if (!self->obj) {
			return -1;
		}

		return 0;
	}

	void VertexShader_dealloc(VertexShader * self) {
		Py_TYPE(self)->tp_free((PyObject*)self);
	}

	PyObject * VertexShader_str(VertexShader * self) {
		return PyUnicode_FromFormat("<VertexShader: %d>", self->obj);
	}

	PyObject * VertexShader_get_obj(VertexShader * self) {
		return PyLong_FromLong(self->obj);
	}

	PyGetSetDef VertexShader_getseters[] = {
		{(char *)"obj", (getter)VertexShader_get_obj, 0, 0, 0},
		{0},
	};

	ModuleType type = {
		"VertexShader",
		&VertexShaderType,
	};

	bool registered = RegisterType(type);
}

PyTypeObject VertexShaderType = {
	PyVarObject_HEAD_INIT(0, 0)
	"ModernGL.VertexShader",
	sizeof(VertexShader),
	0,
	(destructor)VertexShader_dealloc,
	0,
	0,
	0,
	0,
	(reprfunc)VertexShader_str,
	0,
	0,
	0,
	0,
	0,
	(reprfunc)VertexShader_str,
	0,
	0,
	0,
	Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	"VertexShader",
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	VertexShader_getseters,
	0,
	0,
	0,
	0,
	0,
	(initproc)VertexShader_init,
	0,
	VertexShader_new,
};
