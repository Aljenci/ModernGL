#include "GeometryShader.hpp"

#include "Parts/Errors.hpp"
#include "Parts/Types.hpp"

#include "Graphics/OpenGL.hpp"
#include "Graphics/ShadingLanguage.hpp"

namespace {

	PyObject * GeometryShader_new(PyTypeObject * type, PyObject * args, PyObject * kwargs) {
		return type->tp_alloc(type, 0);
	}

	int GeometryShader_init(GeometryShader * self, PyObject * args, PyObject * kwargs) {
		static const char * kwlist[] = {"source", 0};

		const char * source = 0;

		if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s:GeometryShader", (char **)kwlist, &source)) {
			return -1;
		}

		self->obj = CompileShader(OpenGL::GL_GEOMETRY_SHADER, source);

		if (!self->obj) {
			return -1;
		}

		return 0;
	}

	void GeometryShader_dealloc(GeometryShader * self) {
		Py_TYPE(self)->tp_free((PyObject*)self);
	}

	PyObject * GeometryShader_str(GeometryShader * self) {
		return PyUnicode_FromFormat("<GeometryShader: %d>", self->obj);
	}

	PyObject * GeometryShader_get_obj(GeometryShader * self) {
		return PyLong_FromLong(self->obj);
	}

	PyGetSetDef GeometryShader_getseters[] = {
		{(char *)"obj", (getter)GeometryShader_get_obj, 0, 0, 0},
		{0},
	};

	ModuleType type = {
		"GeometryShader",
		&GeometryShaderType,
	};

	bool registered = RegisterType(type);
}

PyTypeObject GeometryShaderType = {
	PyVarObject_HEAD_INIT(0, 0)
	"ModernGL.GeometryShader",
	sizeof(GeometryShader),
	0,
	(destructor)GeometryShader_dealloc,
	0,
	0,
	0,
	0,
	(reprfunc)GeometryShader_str,
	0,
	0,
	0,
	0,
	0,
	(reprfunc)GeometryShader_str,
	0,
	0,
	0,
	Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	"GeometryShader",
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	GeometryShader_getseters,
	0,
	0,
	0,
	0,
	0,
	(initproc)GeometryShader_init,
	0,
	GeometryShader_new,
};
