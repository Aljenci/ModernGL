#include "Program.hpp"

#include "Parts/Errors.hpp"
#include "Parts/Types.hpp"

#include "Graphics/OpenGL.hpp"

#include "Types/Shaders/VertexShader.hpp"
#include "Types/Shaders/FragmentShader.hpp"
#include "Types/Shaders/GeometryShader.hpp"
#include "Types/Shaders/TessEvaluationShader.hpp"
#include "Types/Shaders/TessControlShader.hpp"

namespace {

	PyObject * Program_new(PyTypeObject * type, PyObject * args, PyObject * kwargs) {
		Program * self = (Program *)type->tp_alloc(type, 0);

		return (PyObject *)self;
	}

	int Program_init(Program * self, PyObject * args, PyObject * kwargs) {
		static const char * kwlist[] = {"shaders", "outputs", 0};

		PyObject * shaders;
		PyObject * outputs = 0;

		if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O!|O!:Program", (char **)kwlist, &PyList_Type, &shaders, &PyList_Type, &outputs)) {
			return -1;
		}

		self->shaders_slots[VERT_SHADER_SLOT] = 0;
		self->shaders_slots[FRAGMENT_SHADER_SLOT] = 0;
		self->shaders_slots[GEOMETRY_SHADER_SLOT] = 0;
		self->shaders_slots[TESS_EVALUATION_SHADER_SLOT] = 0;
		self->shaders_slots[TESS_CONTROL_SHADER_SLOT] = 0;

		int shaders_len = PyList_GET_SIZE(shaders);
		int shader_slot = 0;
		int shader_obj = 0;

		for (int i = 0; i < shaders_len; ++i) {
			PyObject * shader = PyList_GET_ITEM(shaders, i);

			if (PyObject_TypeCheck(shader, &VertexShaderType)) {
				shader_slot = VERT_SHADER_SLOT;
				shader_obj = ((VertexShader *)shader)->obj;
			} else if (PyObject_TypeCheck(shader, &FragmentShaderType)) {
				shader_slot = FRAGMENT_SHADER_SLOT;
				shader_obj = ((FragmentShader *)shader)->obj;
			} else if (PyObject_TypeCheck(shader, &GeometryShaderType)) {
				shader_slot = GEOMETRY_SHADER_SLOT;
				shader_obj = ((GeometryShader *)shader)->obj;
			} else if (PyObject_TypeCheck(shader, &TessEvaluationShaderType)) {
				shader_slot = TESS_EVALUATION_SHADER_SLOT;
				shader_obj = ((TessEvaluationShader *)shader)->obj;
			} else if (PyObject_TypeCheck(shader, &TessControlShaderType)) {
				shader_slot = TESS_CONTROL_SHADER_SLOT;
				shader_obj = ((TessControlShader *)shader)->obj;
			} else {
				PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
				return -1;
			}

			if (self->shaders_slots[shader_slot]) {
				PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
				return -1;
			}

			self->shaders_slots[shader_slot] = shader_obj;
		}

		int varyings_len = 0;
		const char * varyings[1024];

		if (outputs) {
			varyings_len = PyList_GET_SIZE(outputs);

			for (int i = 0; i < varyings_len; ++i) {
				varyings[i] = PyUnicode_AsUTF8(PyList_GET_ITEM(outputs, i));
			}
		}

		self->obj = LinkProgram(self->shaders_slots, varyings, varyings_len);

		if (!self->obj) {
			return -1;
		}

		self->geometry_in = 0;
		self->geometry_out = 0;
		self->varyings = varyings_len;

		if (self->shaders_slots[GEOMETRY_SHADER_SLOT]) {
			OpenGL::glGetProgramiv(self->obj, OpenGL::GL_GEOMETRY_INPUT_TYPE, &self->geometry_in);
			OpenGL::glGetProgramiv(self->obj, OpenGL::GL_GEOMETRY_OUTPUT_TYPE, &self->geometry_out);
		}

		self->uniforms = GetProgramUniforms(self->obj);

		return 0;
	}

	void Program_dealloc(Program * self) {
		Py_TYPE(self)->tp_free((PyObject*)self);
	}

	PyObject * Program_str(Program * self) {
		return PyUnicode_FromFormat("<Program: %d>", self->obj);
	}

	// PyObject * Program_uniforms(Program * self) {
	// 	PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
	// 	return 0;
	// }

	// PyObject * Program_attributes(Program * self) {
	// 	PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
	// 	return 0;
	// }

	PyMethodDef Program_methods[] = {
		// {"uniforms", (PyCFunction)Program_uniforms, METH_NOARGS, 0},
		// {"attributes", (PyCFunction)Program_attributes, METH_NOARGS, 0},
		{0},
	};

	PyObject * Program_get_obj(Program * self) {
		return PyLong_FromLong(self->obj);
	}

	PyGetSetDef Program_getseters[] = {
		{(char *)"obj", (getter)Program_get_obj, 0, 0, 0},
		{0},
	};

	PyObject * Program_get_item(Program * self, PyObject * key) {
		char * name = PyUnicode_AsUTF8(key);

		if (!name) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			return 0;
		}

		UniformMapIterator it = self->uniforms->find(name);
		if (it == self->uniforms->end()) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			return 0;
		}

		PyObject * uniform = (PyObject *)it->second;
		Py_INCREF(uniform);
		return uniform;
	}

	int Program_set_item(Program * self, PyObject * key, PyObject * value) {
		char * name = PyUnicode_AsUTF8(key);

		if (!name) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			return -1;
		}

		UniformMapIterator it = self->uniforms->find(name);
		if (it == self->uniforms->end()) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			return -1;
		}

		return it->second->setter(it->second, value);
	}

	PyMappingMethods Program_map = {
		0,
		(binaryfunc)Program_get_item,
		(objobjargproc)Program_set_item,
	};

	ModuleType type = {
		"Program",
		&ProgramType,
	};

	bool registered = RegisterType(type);
}

PyTypeObject ProgramType = {
	PyVarObject_HEAD_INIT(0, 0)
	"ModernGL.Program",
	sizeof(Program),
	0,
	(destructor)Program_dealloc,
	0,
	0,
	0,
	0,
	(reprfunc)Program_str,
	0,
	0,
	&Program_map,
	0,
	0,
	(reprfunc)Program_str,
	0,
	0,
	0,
	Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	"Program",
	0,
	0,
	0,
	0,
	0,
	0,
	Program_methods,
	0,
	Program_getseters,
	0,
	0,
	0,
	0,
	0,
	(initproc)Program_init,
	0,
	Program_new,
};
