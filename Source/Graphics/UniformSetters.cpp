#include "UniformSetters.hpp"

#include "Parts/Errors.hpp"

#include "Graphics/OpenGL.hpp"

int Uniform_invalid_setter(Uniform * self, PyObject * value) {
	PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
	return -1;
}

int Uniform_bool_value_setter_330(Uniform * self, PyObject * value) {
	int c_value;

	if (value == Py_True) {
		c_value = 1;
	} else if (value == Py_False) {
		c_value = 0;
	} else {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform1iv(self->location, 1, &c_value);

	return 0;
}

int Uniform_int_value_setter_330(Uniform * self, PyObject * value) {
	int c_value = PyLong_AsLong(value);

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform1iv(self->location, 1, &c_value);

	return 0;
}

int Uniform_uint_value_setter_330(Uniform * self, PyObject * value) {
	unsigned c_value = PyLong_AsUnsignedLong(value);

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform1uiv(self->location, 1, &c_value);

	return 0;
}

int Uniform_float_value_setter_330(Uniform * self, PyObject * value) {
	float c_value = (float)PyFloat_AsDouble(value);

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform1fv(self->location, 1, &c_value);

	return 0;
}

int Uniform_double_value_setter_400(Uniform * self, PyObject * value) {
	double c_value = PyFloat_AsDouble(value);

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform1dv(self->location, 1, &c_value);

	return 0;
}

int Uniform_bvec2_value_setter_330(Uniform * self, PyObject * value) {
	int c_values[2];

	if (PyTuple_Size(value) != 2) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 2; ++i) {
		PyObject * v = PyTuple_GET_ITEM(value, i);

		if (v == Py_True) {
			c_values[i] = 1;
		} else if (v == Py_False) {
			c_values[i] = 0;
		} else {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			return -1;
		}
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform2iv(self->location, 1, c_values);

	return 0;
}

int Uniform_ivec2_value_setter_330(Uniform * self, PyObject * value) {
	int c_values[2];

	if (PyTuple_Size(value) != 2) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 2; ++i) {
		c_values[i] = PyLong_AsLong(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform2iv(self->location, 1, c_values);

	return 0;
}

int Uniform_uvec2_value_setter_330(Uniform * self, PyObject * value) {
	unsigned c_values[2];

	if (PyTuple_Size(value) != 2) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 2; ++i) {
		c_values[i] = PyLong_AsUnsignedLong(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform2uiv(self->location, 1, c_values);

	return 0;
}

int Uniform_vec2_value_setter_330(Uniform * self, PyObject * value) {
	float c_values[2];

	if (PyTuple_Size(value) != 2) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 2; ++i) {
		c_values[i] = (float)PyFloat_AsDouble(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform2fv(self->location, 1, c_values);

	return 0;
}

int Uniform_dvec2_value_setter_400(Uniform * self, PyObject * value) {
	double c_values[2];

	if (PyTuple_Size(value) != 2) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 2; ++i) {
		c_values[i] = PyFloat_AsDouble(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform2dv(self->location, 1, c_values);

	return 0;
}

int Uniform_bvec3_value_setter_330(Uniform * self, PyObject * value) {
	int c_values[3];

	if (PyTuple_Size(value) != 3) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 3; ++i) {
		PyObject * v = PyTuple_GET_ITEM(value, i);

		if (v == Py_True) {
			c_values[i] = 1;
		} else if (v == Py_False) {
			c_values[i] = 0;
		} else {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			return -1;
		}
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform3iv(self->location, 1, c_values);

	return 0;
}

int Uniform_ivec3_value_setter_330(Uniform * self, PyObject * value) {
	int c_values[3];

	if (PyTuple_Size(value) != 3) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 3; ++i) {
		c_values[i] = PyLong_AsLong(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform3iv(self->location, 1, c_values);

	return 0;
}

int Uniform_uvec3_value_setter_330(Uniform * self, PyObject * value) {
	unsigned c_values[3];

	if (PyTuple_Size(value) != 3) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 3; ++i) {
		c_values[i] = PyLong_AsUnsignedLong(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform3uiv(self->location, 1, c_values);

	return 0;
}

int Uniform_vec3_value_setter_330(Uniform * self, PyObject * value) {
	float c_values[3];

	if (PyTuple_Size(value) != 3) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 3; ++i) {
		c_values[i] = (float)PyFloat_AsDouble(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform3fv(self->location, 1, c_values);

	return 0;
}

int Uniform_dvec3_value_setter_400(Uniform * self, PyObject * value) {
	double c_values[3];

	if (PyTuple_Size(value) != 3) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 3; ++i) {
		c_values[i] = PyFloat_AsDouble(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform3dv(self->location, 1, c_values);

	return 0;
}


int Uniform_bvec4_value_setter_330(Uniform * self, PyObject * value) {
	int c_values[4];

	if (PyTuple_Size(value) != 4) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 4; ++i) {
		PyObject * v = PyTuple_GET_ITEM(value, i);

		if (v == Py_True) {
			c_values[i] = 1;
		} else if (v == Py_False) {
			c_values[i] = 0;
		} else {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			return -1;
		}
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform4iv(self->location, 1, c_values);

	return 0;
}

int Uniform_ivec4_value_setter_330(Uniform * self, PyObject * value) {
	int c_values[4];

	if (PyTuple_Size(value) != 4) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 4; ++i) {
		c_values[i] = PyLong_AsLong(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform4iv(self->location, 1, c_values);

	return 0;
}

int Uniform_uvec4_value_setter_330(Uniform * self, PyObject * value) {
	unsigned c_values[4];

	if (PyTuple_Size(value) != 4) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 4; ++i) {
		c_values[i] = PyLong_AsUnsignedLong(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform4uiv(self->location, 1, c_values);

	return 0;
}

int Uniform_vec4_value_setter_330(Uniform * self, PyObject * value) {
	float c_values[4];

	if (PyTuple_Size(value) != 4) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 4; ++i) {
		c_values[i] = (float)PyFloat_AsDouble(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform4fv(self->location, 1, c_values);

	return 0;
}

int Uniform_dvec4_value_setter_400(Uniform * self, PyObject * value) {
	double c_values[4];

	if (PyTuple_Size(value) != 4) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 4; ++i) {
		c_values[i] = PyFloat_AsDouble(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform4dv(self->location, 1, c_values);

	return 0;
}

int Uniform_bool_array_value_setter_330(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int * c_values = new int[size];

	for (int k = 0; k < size; ++k) {
		PyObject * v = PyList_GET_ITEM(value, k);

		if (v == Py_True) {
			c_values[k] = 1;
		} else if (v == Py_False) {
			c_values[k] = 0;
		} else {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform1iv(self->location, size, c_values);

	delete[] c_values;
	return 0;
}

int Uniform_int_array_value_setter_330(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int * c_values = new int[size];

	for (int k = 0; k < size; ++k) {
		c_values[k] = PyLong_AsLong(PyList_GET_ITEM(value, k));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		delete[] c_values;
		return -1;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform1iv(self->location, size, c_values);

	delete[] c_values;
	return 0;
}

int Uniform_uint_array_value_setter_330(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	unsigned * c_values = new unsigned[size];

	for (int k = 0; k < size; ++k) {
		c_values[k] = PyLong_AsUnsignedLong(PyList_GET_ITEM(value, k));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		delete[] c_values;
		return -1;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform1uiv(self->location, size, c_values);

	delete[] c_values;
	return 0;
}

int Uniform_float_array_value_setter_330(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	float * c_values = new float[size];

	for (int k = 0; k < size; ++k) {
		c_values[k] = (float)PyFloat_AsDouble(PyList_GET_ITEM(value, k));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		delete[] c_values;
		return -1;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform1fv(self->location, size, c_values);

	delete[] c_values;
	return 0;
}

int Uniform_double_array_value_setter_400(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	double * c_values = new double[size];

	for (int k = 0; k < size; ++k) {
		c_values[k] = PyFloat_AsDouble(PyList_GET_ITEM(value, k));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		delete[] c_values;
		return -1;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform1dv(self->location, size, c_values);

	delete[] c_values;
	return 0;
}

int Uniform_bvec2_array_value_setter_330(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	int * c_values = new int[size * 2];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 2) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 2; ++i) {
			PyObject * v = PyTuple_GET_ITEM(tuple, i);

			if (v == Py_True) {
				c_values[cnt++] = 1;
			} else if (v == Py_False) {
				c_values[cnt++] = 0;
			} else {
				PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
				delete[] c_values;
				return -1;
			}
		}
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform2iv(self->location, size * 2, c_values);

	return 0;
}

int Uniform_ivec2_array_value_setter_330(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	int * c_values = new int[size * 2];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 2) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 2; ++i) {
			c_values[cnt++] = PyLong_AsLong(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform2iv(self->location, size * 2, c_values);

	return 0;
}

int Uniform_uvec2_array_value_setter_330(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	unsigned * c_values = new unsigned[size * 2];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 2) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 2; ++i) {
			c_values[cnt++] = PyLong_AsUnsignedLong(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform2uiv(self->location, size * 2, c_values);

	return 0;
}

int Uniform_vec2_array_value_setter_330(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	float * c_values = new float[size * 2];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 2) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 2; ++i) {
			c_values[cnt++] = (float)PyFloat_AsDouble(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform2fv(self->location, size * 2, c_values);

	return 0;
}

int Uniform_dvec2_array_value_setter_400(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	double * c_values = new double[size * 2];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 2) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 2; ++i) {
			c_values[cnt++] = PyFloat_AsDouble(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform2dv(self->location, size * 2, c_values);

	return 0;
}

int Uniform_bvec3_array_value_setter_330(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	int * c_values = new int[size * 3];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 3) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 3; ++i) {
			PyObject * v = PyTuple_GET_ITEM(tuple, i);

			if (v == Py_True) {
				c_values[cnt++] = 1;
			} else if (v == Py_False) {
				c_values[cnt++] = 0;
			} else {
				PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
				delete[] c_values;
				return -1;
			}
		}
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform3iv(self->location, size * 3, c_values);

	return 0;
}

int Uniform_ivec3_array_value_setter_330(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	int * c_values = new int[size * 3];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 3) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 3; ++i) {
			c_values[cnt++] = PyLong_AsLong(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform3iv(self->location, size * 3, c_values);

	return 0;
}

int Uniform_uvec3_array_value_setter_330(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	unsigned * c_values = new unsigned[size * 3];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 3) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 3; ++i) {
			c_values[cnt++] = PyLong_AsUnsignedLong(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform3uiv(self->location, size * 3, c_values);

	return 0;
}

int Uniform_vec3_array_value_setter_330(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	float * c_values = new float[size * 3];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 3) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 3; ++i) {
			c_values[cnt++] = (float)PyFloat_AsDouble(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform3fv(self->location, size * 3, c_values);

	return 0;
}

int Uniform_dvec3_array_value_setter_400(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	double * c_values = new double[size * 3];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 3) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 3; ++i) {
			c_values[cnt++] = PyFloat_AsDouble(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform3dv(self->location, size * 3, c_values);

	return 0;
}

int Uniform_bvec4_array_value_setter_330(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	int * c_values = new int[size * 4];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 4) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 4; ++i) {
			PyObject * v = PyTuple_GET_ITEM(tuple, i);

			if (v == Py_True) {
				c_values[cnt++] = 1;
			} else if (v == Py_False) {
				c_values[cnt++] = 0;
			} else {
				PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
				delete[] c_values;
				return -1;
			}
		}
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform4iv(self->location, size * 4, c_values);

	return 0;
}

int Uniform_ivec4_array_value_setter_330(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	int * c_values = new int[size * 4];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 4) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 4; ++i) {
			c_values[cnt++] = PyLong_AsLong(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform4iv(self->location, size * 4, c_values);

	return 0;
}

int Uniform_uvec4_array_value_setter_330(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	unsigned * c_values = new unsigned[size * 4];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 4) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 4; ++i) {
			c_values[cnt++] = PyLong_AsUnsignedLong(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform4uiv(self->location, size * 4, c_values);

	return 0;
}

int Uniform_vec4_array_value_setter_330(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	float * c_values = new float[size * 4];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 4) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 4; ++i) {
			c_values[cnt++] = (float)PyFloat_AsDouble(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform4fv(self->location, size * 4, c_values);

	return 0;
}

int Uniform_dvec4_array_value_setter_400(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	double * c_values = new double[size * 4];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 4) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 4; ++i) {
			c_values[cnt++] = PyFloat_AsDouble(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform4dv(self->location, size * 4, c_values);

	return 0;
}

int Uniform_bool_value_setter_410(Uniform * self, PyObject * value) {
	int c_value;

	if (value == Py_True) {
		c_value = 1;
	} else if (value == Py_False) {
		c_value = 0;
	} else {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glProgramUniform1iv(self->program, self->location, 1, &c_value);

	return 0;
}

int Uniform_int_value_setter_410(Uniform * self, PyObject * value) {
	int c_value = PyLong_AsLong(value);

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glProgramUniform1iv(self->program, self->location, 1, &c_value);

	return 0;
}

int Uniform_uint_value_setter_410(Uniform * self, PyObject * value) {
	unsigned c_value = PyLong_AsUnsignedLong(value);

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glProgramUniform1uiv(self->program, self->location, 1, &c_value);

	return 0;
}

int Uniform_float_value_setter_410(Uniform * self, PyObject * value) {
	float c_value = (float)PyFloat_AsDouble(value);

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glProgramUniform1fv(self->program, self->location, 1, &c_value);

	return 0;
}

int Uniform_double_value_setter_410(Uniform * self, PyObject * value) {
	double c_value = PyFloat_AsDouble(value);

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glProgramUniform1dv(self->program, self->location, 1, &c_value);

	return 0;
}

int Uniform_bvec2_value_setter_410(Uniform * self, PyObject * value) {
	int c_values[2];

	if (PyTuple_Size(value) != 2) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 2; ++i) {
		PyObject * v = PyTuple_GET_ITEM(value, i);

		if (v == Py_True) {
			c_values[i] = 1;
		} else if (v == Py_False) {
			c_values[i] = 0;
		} else {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			return -1;
		}
	}

	OpenGL::glProgramUniform2iv(self->program, self->location, 1, c_values);

	return 0;
}

int Uniform_ivec2_value_setter_410(Uniform * self, PyObject * value) {
	int c_values[2];

	if (PyTuple_Size(value) != 2) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 2; ++i) {
		c_values[i] = PyLong_AsLong(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glProgramUniform2iv(self->program, self->location, 1, c_values);

	return 0;
}

int Uniform_uvec2_value_setter_410(Uniform * self, PyObject * value) {
	unsigned c_values[2];

	if (PyTuple_Size(value) != 2) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 2; ++i) {
		c_values[i] = PyLong_AsUnsignedLong(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glProgramUniform2uiv(self->program, self->location, 1, c_values);

	return 0;
}

int Uniform_vec2_value_setter_410(Uniform * self, PyObject * value) {
	float c_values[2];

	if (PyTuple_Size(value) != 2) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 2; ++i) {
		c_values[i] = (float)PyFloat_AsDouble(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glProgramUniform2fv(self->program, self->location, 1, c_values);

	return 0;
}

int Uniform_dvec2_value_setter_410(Uniform * self, PyObject * value) {
	double c_values[2];

	if (PyTuple_Size(value) != 2) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 2; ++i) {
		c_values[i] = PyFloat_AsDouble(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glProgramUniform2dv(self->program, self->location, 1, c_values);

	return 0;
}

int Uniform_bvec3_value_setter_410(Uniform * self, PyObject * value) {
	int c_values[3];

	if (PyTuple_Size(value) != 3) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 3; ++i) {
		PyObject * v = PyTuple_GET_ITEM(value, i);

		if (v == Py_True) {
			c_values[i] = 1;
		} else if (v == Py_False) {
			c_values[i] = 0;
		} else {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			return -1;
		}
	}

	OpenGL::glProgramUniform3iv(self->program, self->location, 1, c_values);

	return 0;
}

int Uniform_ivec3_value_setter_410(Uniform * self, PyObject * value) {
	int c_values[3];

	if (PyTuple_Size(value) != 3) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 3; ++i) {
		c_values[i] = PyLong_AsLong(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glProgramUniform3iv(self->program, self->location, 1, c_values);

	return 0;
}

int Uniform_uvec3_value_setter_410(Uniform * self, PyObject * value) {
	unsigned c_values[3];

	if (PyTuple_Size(value) != 3) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 3; ++i) {
		c_values[i] = PyLong_AsUnsignedLong(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glProgramUniform3uiv(self->program, self->location, 1, c_values);

	return 0;
}

int Uniform_vec3_value_setter_410(Uniform * self, PyObject * value) {
	float c_values[3];

	if (PyTuple_Size(value) != 3) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 3; ++i) {
		c_values[i] = (float)PyFloat_AsDouble(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glProgramUniform3fv(self->program, self->location, 1, c_values);

	return 0;
}

int Uniform_dvec3_value_setter_410(Uniform * self, PyObject * value) {
	double c_values[3];

	if (PyTuple_Size(value) != 3) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 3; ++i) {
		c_values[i] = PyFloat_AsDouble(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glProgramUniform3dv(self->program, self->location, 1, c_values);

	return 0;
}


int Uniform_bvec4_value_setter_410(Uniform * self, PyObject * value) {
	int c_values[4];

	if (PyTuple_Size(value) != 4) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 4; ++i) {
		PyObject * v = PyTuple_GET_ITEM(value, i);

		if (v == Py_True) {
			c_values[i] = 1;
		} else if (v == Py_False) {
			c_values[i] = 0;
		} else {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			return -1;
		}
	}

	OpenGL::glProgramUniform4iv(self->program, self->location, 1, c_values);

	return 0;
}

int Uniform_ivec4_value_setter_410(Uniform * self, PyObject * value) {
	int c_values[4];

	if (PyTuple_Size(value) != 4) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 4; ++i) {
		c_values[i] = PyLong_AsLong(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glProgramUniform4iv(self->program, self->location, 1, c_values);

	return 0;
}

int Uniform_uvec4_value_setter_410(Uniform * self, PyObject * value) {
	unsigned c_values[4];

	if (PyTuple_Size(value) != 4) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 4; ++i) {
		c_values[i] = PyLong_AsUnsignedLong(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glProgramUniform4uiv(self->program, self->location, 1, c_values);

	return 0;
}

int Uniform_vec4_value_setter_410(Uniform * self, PyObject * value) {
	float c_values[4];

	if (PyTuple_Size(value) != 4) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 4; ++i) {
		c_values[i] = (float)PyFloat_AsDouble(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glProgramUniform4fv(self->program, self->location, 1, c_values);

	return 0;
}

int Uniform_dvec4_value_setter_410(Uniform * self, PyObject * value) {
	double c_values[4];

	if (PyTuple_Size(value) != 4) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 4; ++i) {
		c_values[i] = PyFloat_AsDouble(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glProgramUniform4dv(self->program, self->location, 1, c_values);

	return 0;
}

int Uniform_bool_array_value_setter_410(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int * c_values = new int[size];

	for (int k = 0; k < size; ++k) {
		PyObject * v = PyList_GET_ITEM(value, k);

		if (v == Py_True) {
			c_values[k] = 1;
		} else if (v == Py_False) {
			c_values[k] = 0;
		} else {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}
	}

	OpenGL::glProgramUniform1iv(self->program, self->location, size, c_values);

	delete[] c_values;
	return 0;
}

int Uniform_int_array_value_setter_410(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int * c_values = new int[size];

	for (int k = 0; k < size; ++k) {
		c_values[k] = PyLong_AsLong(PyList_GET_ITEM(value, k));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		delete[] c_values;
		return -1;
	}

	OpenGL::glProgramUniform1iv(self->program, self->location, size, c_values);

	delete[] c_values;
	return 0;
}

int Uniform_uint_array_value_setter_410(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	unsigned * c_values = new unsigned[size];

	for (int k = 0; k < size; ++k) {
		c_values[k] = PyLong_AsUnsignedLong(PyList_GET_ITEM(value, k));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		delete[] c_values;
		return -1;
	}

	OpenGL::glProgramUniform1uiv(self->program, self->location, size, c_values);

	delete[] c_values;
	return 0;
}

int Uniform_float_array_value_setter_410(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	float * c_values = new float[size];

	for (int k = 0; k < size; ++k) {
		c_values[k] = (float)PyFloat_AsDouble(PyList_GET_ITEM(value, k));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		delete[] c_values;
		return -1;
	}

	OpenGL::glProgramUniform1fv(self->program, self->location, size, c_values);

	delete[] c_values;
	return 0;
}

int Uniform_double_array_value_setter_410(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	double * c_values = new double[size];

	for (int k = 0; k < size; ++k) {
		c_values[k] = PyFloat_AsDouble(PyList_GET_ITEM(value, k));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		delete[] c_values;
		return -1;
	}

	OpenGL::glProgramUniform1dv(self->program, self->location, size, c_values);

	delete[] c_values;
	return 0;
}

int Uniform_bvec2_array_value_setter_410(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	int * c_values = new int[size * 2];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 2) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 2; ++i) {
			PyObject * v = PyTuple_GET_ITEM(tuple, i);

			if (v == Py_True) {
				c_values[cnt++] = 1;
			} else if (v == Py_False) {
				c_values[cnt++] = 0;
			} else {
				PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
				delete[] c_values;
				return -1;
			}
		}
	}

	OpenGL::glProgramUniform2iv(self->program, self->location, size * 2, c_values);

	delete[] c_values;
	return 0;
}

int Uniform_ivec2_array_value_setter_410(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	int * c_values = new int[size * 2];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 2) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 2; ++i) {
			c_values[cnt++] = PyLong_AsLong(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glProgramUniform2iv(self->program, self->location, size * 2, c_values);

	delete[] c_values;
	return 0;
}

int Uniform_uvec2_array_value_setter_410(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	unsigned * c_values = new unsigned[size * 2];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 2) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 2; ++i) {
			c_values[cnt++] = PyLong_AsUnsignedLong(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glProgramUniform2uiv(self->program, self->location, size * 2, c_values);

	delete[] c_values;
	return 0;
}

int Uniform_vec2_array_value_setter_410(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	float * c_values = new float[size * 2];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 2) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 2; ++i) {
			c_values[cnt++] = (float)PyFloat_AsDouble(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glProgramUniform2fv(self->program, self->location, size * 2, c_values);

	delete[] c_values;
	return 0;
}

int Uniform_dvec2_array_value_setter_410(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	double * c_values = new double[size * 2];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 2) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 2; ++i) {
			c_values[cnt++] = PyFloat_AsDouble(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glProgramUniform2dv(self->program, self->location, size * 2, c_values);

	delete[] c_values;
	return 0;
}

int Uniform_bvec3_array_value_setter_410(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	int * c_values = new int[size * 3];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 3) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 3; ++i) {
			PyObject * v = PyTuple_GET_ITEM(tuple, i);

			if (v == Py_True) {
				c_values[cnt++] = 1;
			} else if (v == Py_False) {
				c_values[cnt++] = 0;
			} else {
				PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
				delete[] c_values;
				return -1;
			}
		}
	}

	OpenGL::glProgramUniform3iv(self->program, self->location, size * 3, c_values);

	delete[] c_values;
	return 0;
}

int Uniform_ivec3_array_value_setter_410(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	int * c_values = new int[size * 3];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 3) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 3; ++i) {
			c_values[cnt++] = PyLong_AsLong(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glProgramUniform3iv(self->program, self->location, size * 3, c_values);

	delete[] c_values;
	return 0;
}

int Uniform_uvec3_array_value_setter_410(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	unsigned * c_values = new unsigned[size * 3];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 3) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 3; ++i) {
			c_values[cnt++] = PyLong_AsUnsignedLong(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glProgramUniform3uiv(self->program, self->location, size * 3, c_values);

	delete[] c_values;
	return 0;
}

int Uniform_vec3_array_value_setter_410(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	float * c_values = new float[size * 3];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 3) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 3; ++i) {
			c_values[cnt++] = (float)PyFloat_AsDouble(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glProgramUniform3fv(self->program, self->location, size * 3, c_values);

	delete[] c_values;
	return 0;
}

int Uniform_dvec3_array_value_setter_410(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	double * c_values = new double[size * 3];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 3) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 3; ++i) {
			c_values[cnt++] = PyFloat_AsDouble(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glProgramUniform3dv(self->program, self->location, size * 3, c_values);

	delete[] c_values;
	return 0;
}

int Uniform_bvec4_array_value_setter_410(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	int * c_values = new int[size * 4];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 4) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 4; ++i) {
			PyObject * v = PyTuple_GET_ITEM(tuple, i);

			if (v == Py_True) {
				c_values[cnt++] = 1;
			} else if (v == Py_False) {
				c_values[cnt++] = 0;
			} else {
				PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
				delete[] c_values;
				return -1;
			}
		}
	}

	OpenGL::glProgramUniform4iv(self->program, self->location, size * 4, c_values);

	delete[] c_values;
	return 0;
}

int Uniform_ivec4_array_value_setter_410(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	int * c_values = new int[size * 4];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 4) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 4; ++i) {
			c_values[cnt++] = PyLong_AsLong(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glProgramUniform4iv(self->program, self->location, size * 4, c_values);

	delete[] c_values;
	return 0;
}

int Uniform_uvec4_array_value_setter_410(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	unsigned * c_values = new unsigned[size * 4];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 4) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 4; ++i) {
			c_values[cnt++] = PyLong_AsUnsignedLong(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glProgramUniform4uiv(self->program, self->location, size * 4, c_values);

	delete[] c_values;
	return 0;
}

int Uniform_vec4_array_value_setter_410(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	float * c_values = new float[size * 4];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 4) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 4; ++i) {
			c_values[cnt++] = (float)PyFloat_AsDouble(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glProgramUniform4fv(self->program, self->location, size * 4, c_values);

	delete[] c_values;
	return 0;
}

int Uniform_dvec4_array_value_setter_410(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	double * c_values = new double[size * 4];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 4) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 4; ++i) {
			c_values[cnt++] = PyFloat_AsDouble(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glProgramUniform4dv(self->program, self->location, size * 4, c_values);

	delete[] c_values;
	return 0;
}

int Uniform_sampler_value_setter_330(Uniform * self, PyObject * value) {
	int c_value = PyLong_AsLong(value);

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform1iv(self->location, 1, &c_value);

	return 0;
}

int Uniform_sampler_value_setter_410(Uniform * self, PyObject * value) {
	int c_value = PyLong_AsLong(value);

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glProgramUniform1iv(self->program, self->location, 1, &c_value);

	return 0;
}

int Uniform_sampler_array_value_setter_330(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int * c_values = new int[size];

	for (int k = 0; k < size; ++k) {
		c_values[k] = PyLong_AsLong(PyList_GET_ITEM(value, k));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		delete[] c_values;
		return -1;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform1iv(self->location, size, c_values);

	delete[] c_values;
	return 0;
}

int Uniform_sampler_array_value_setter_410(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int * c_values = new int[size];

	for (int k = 0; k < size; ++k) {
		c_values[k] = PyLong_AsLong(PyList_GET_ITEM(value, k));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		delete[] c_values;
		return -1;
	}

	OpenGL::glProgramUniform1iv(self->program, self->location, size, c_values);

	delete[] c_values;
	return 0;
}

int Uniform_float_matrix_2x2_value_setter_330(Uniform * self, PyObject * value) {
	float c_values[4];

	if (PyTuple_Size(value) != 4) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 4; ++i) {
		c_values[i] = (float)PyFloat_AsDouble(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix2fv(self->location, 1, false, c_values);

	return 0;
}

int Uniform_float_matrix_2x3_value_setter_330(Uniform * self, PyObject * value) {
	float c_values[6];

	if (PyTuple_Size(value) != 6) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 6; ++i) {
		c_values[i] = (float)PyFloat_AsDouble(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix2x3fv(self->location, 1, false, c_values);
	
	return 0;
}

int Uniform_float_matrix_2x4_value_setter_330(Uniform * self, PyObject * value) {
	float c_values[8];

	if (PyTuple_Size(value) != 8) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 8; ++i) {
		c_values[i] = (float)PyFloat_AsDouble(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix2x4fv(self->location, 1, false, c_values);
	
	return 0;
}

int Uniform_float_matrix_3x2_value_setter_330(Uniform * self, PyObject * value) {
	float c_values[6];

	if (PyTuple_Size(value) != 6) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 6; ++i) {
		c_values[i] = (float)PyFloat_AsDouble(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix3x2fv(self->location, 1, false, c_values);
	
	return 0;

}

int Uniform_float_matrix_3x3_value_setter_330(Uniform * self, PyObject * value) {
	float c_values[9];

	if (PyTuple_Size(value) != 9) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 9; ++i) {
		c_values[i] = (float)PyFloat_AsDouble(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix3fv(self->location, 1, false, c_values);
	
	return 0;
}

int Uniform_float_matrix_3x4_value_setter_330(Uniform * self, PyObject * value) {
	float c_values[12];

	if (PyTuple_Size(value) != 12) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 12; ++i) {
		c_values[i] = (float)PyFloat_AsDouble(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix3x4fv(self->location, 1, false, c_values);
	
	return 0;
}

int Uniform_float_matrix_4x2_value_setter_330(Uniform * self, PyObject * value) {
	float c_values[8];

	if (PyTuple_Size(value) != 8) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 8; ++i) {
		c_values[i] = (float)PyFloat_AsDouble(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix4x2fv(self->location, 1, false, c_values);
	
	return 0;
}

int Uniform_float_matrix_4x3_value_setter_330(Uniform * self, PyObject * value) {
	float c_values[12];

	if (PyTuple_Size(value) != 12) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 12; ++i) {
		c_values[i] = (float)PyFloat_AsDouble(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix4x3fv(self->location, 1, false, c_values);
	
	return 0;
}

int Uniform_float_matrix_4x4_value_setter_330(Uniform * self, PyObject * value) {
	float c_values[16];

	if (PyTuple_Size(value) != 16) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 16; ++i) {
		c_values[i] = (float)PyFloat_AsDouble(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix4fv(self->location, 1, false, c_values);
	
	return 0;
}

int Uniform_double_matrix_2x2_value_setter_400(Uniform * self, PyObject * value) {
	double c_values[4];

	if (PyTuple_Size(value) != 4) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 4; ++i) {
		c_values[i] = PyFloat_AsDouble(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix2dv(self->location, 1, false, c_values);

	return 0;
}

int Uniform_double_matrix_2x3_value_setter_400(Uniform * self, PyObject * value) {
	double c_values[6];

	if (PyTuple_Size(value) != 6) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 6; ++i) {
		c_values[i] = PyFloat_AsDouble(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix2x3dv(self->location, 1, false, c_values);
	
	return 0;
}

int Uniform_double_matrix_2x4_value_setter_400(Uniform * self, PyObject * value) {
	double c_values[8];

	if (PyTuple_Size(value) != 8) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 8; ++i) {
		c_values[i] = PyFloat_AsDouble(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix2x4dv(self->location, 1, false, c_values);
	
	return 0;
}

int Uniform_double_matrix_3x2_value_setter_400(Uniform * self, PyObject * value) {
	double c_values[6];

	if (PyTuple_Size(value) != 6) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 6; ++i) {
		c_values[i] = PyFloat_AsDouble(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix3x2dv(self->location, 1, false, c_values);
	
	return 0;

}

int Uniform_double_matrix_3x3_value_setter_400(Uniform * self, PyObject * value) {
	double c_values[9];

	if (PyTuple_Size(value) != 9) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 9; ++i) {
		c_values[i] = PyFloat_AsDouble(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix3dv(self->location, 1, false, c_values);
	
	return 0;
}

int Uniform_double_matrix_3x4_value_setter_400(Uniform * self, PyObject * value) {
	double c_values[12];

	if (PyTuple_Size(value) != 12) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 12; ++i) {
		c_values[i] = PyFloat_AsDouble(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix3x4dv(self->location, 1, false, c_values);
	
	return 0;
}

int Uniform_double_matrix_4x2_value_setter_400(Uniform * self, PyObject * value) {
	double c_values[8];

	if (PyTuple_Size(value) != 8) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 8; ++i) {
		c_values[i] = PyFloat_AsDouble(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix4x2dv(self->location, 1, false, c_values);
	
	return 0;
}

int Uniform_double_matrix_4x3_value_setter_400(Uniform * self, PyObject * value) {
	double c_values[12];

	if (PyTuple_Size(value) != 12) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 12; ++i) {
		c_values[i] = PyFloat_AsDouble(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix4x3dv(self->location, 1, false, c_values);
	
	return 0;
}

int Uniform_double_matrix_4x4_value_setter_400(Uniform * self, PyObject * value) {
	double c_values[16];

	if (PyTuple_Size(value) != 16) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 16; ++i) {
		c_values[i] = PyFloat_AsDouble(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix4dv(self->location, 1, false, c_values);
	
	return 0;
}

int Uniform_float_matrix_2x2_array_value_setter_330(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	float * c_values = new float[size * 4];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 4) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 4; ++i) {
			c_values[cnt++] = (float)PyFloat_AsDouble(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix2fv(self->location, size, false, c_values);

	return 0;
}

int Uniform_float_matrix_2x3_array_value_setter_330(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	float * c_values = new float[size * 6];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 6) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 6; ++i) {
			c_values[cnt++] = (float)PyFloat_AsDouble(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix2x3fv(self->location, size, false, c_values);

	return 0;
}

int Uniform_float_matrix_2x4_array_value_setter_330(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	float * c_values = new float[size * 8];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 8) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 8; ++i) {
			c_values[cnt++] = (float)PyFloat_AsDouble(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix2x4fv(self->location, size, false, c_values);

	return 0;
}

int Uniform_float_matrix_3x2_array_value_setter_330(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	float * c_values = new float[size * 6];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 6) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 6; ++i) {
			c_values[cnt++] = (float)PyFloat_AsDouble(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix3x2fv(self->location, size, false, c_values);

	return 0;
}

int Uniform_float_matrix_3x3_array_value_setter_330(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	float * c_values = new float[size * 9];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 9) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 9; ++i) {
			c_values[cnt++] = (float)PyFloat_AsDouble(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix3fv(self->location, size, false, c_values);

	return 0;
}

int Uniform_float_matrix_3x4_array_value_setter_330(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	float * c_values = new float[size * 12];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 12) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 12; ++i) {
			c_values[cnt++] = (float)PyFloat_AsDouble(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix3x4fv(self->location, size, false, c_values);

	return 0;
}

int Uniform_float_matrix_4x2_array_value_setter_330(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	float * c_values = new float[size * 8];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 8) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 8; ++i) {
			c_values[cnt++] = (float)PyFloat_AsDouble(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix4x2fv(self->location, size, false, c_values);

	return 0;
}

int Uniform_float_matrix_4x3_array_value_setter_330(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	float * c_values = new float[size * 12];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 12) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 12; ++i) {
			c_values[cnt++] = (float)PyFloat_AsDouble(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix4x3fv(self->location, size, false, c_values);

	return 0;
}

int Uniform_float_matrix_4x4_array_value_setter_330(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	float * c_values = new float[size * 16];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 16) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 16; ++i) {
			c_values[cnt++] = (float)PyFloat_AsDouble(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix4fv(self->location, size, false, c_values);

	return 0;
}

int Uniform_double_matrix_2x2_array_value_setter_400(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	double * c_values = new double[size * 4];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 4) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 4; ++i) {
			c_values[cnt++] = PyFloat_AsDouble(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix2dv(self->location, size, false, c_values);

	return 0;
}

int Uniform_double_matrix_2x3_array_value_setter_400(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	double * c_values = new double[size * 6];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 6) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 6; ++i) {
			c_values[cnt++] = PyFloat_AsDouble(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix2x3dv(self->location, size, false, c_values);

	return 0;
}

int Uniform_double_matrix_2x4_array_value_setter_400(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	double * c_values = new double[size * 8];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 8) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 8; ++i) {
			c_values[cnt++] = PyFloat_AsDouble(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix2x4dv(self->location, size, false, c_values);

	return 0;
}

int Uniform_double_matrix_3x2_array_value_setter_400(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	double * c_values = new double[size * 6];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 6) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 6; ++i) {
			c_values[cnt++] = PyFloat_AsDouble(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix3x2dv(self->location, size, false, c_values);

	return 0;
}

int Uniform_double_matrix_3x3_array_value_setter_400(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	double * c_values = new double[size * 9];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 9) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 9; ++i) {
			c_values[cnt++] = PyFloat_AsDouble(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix3dv(self->location, size, false, c_values);

	return 0;
}

int Uniform_double_matrix_3x4_array_value_setter_400(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	double * c_values = new double[size * 12];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 12) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 12; ++i) {
			c_values[cnt++] = PyFloat_AsDouble(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix3x4dv(self->location, size, false, c_values);

	return 0;
}

int Uniform_double_matrix_4x2_array_value_setter_400(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	double * c_values = new double[size * 8];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 8) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 8; ++i) {
			c_values[cnt++] = PyFloat_AsDouble(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix4x2dv(self->location, size, false, c_values);

	return 0;
}

int Uniform_double_matrix_4x3_array_value_setter_400(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	double * c_values = new double[size * 12];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 12) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 12; ++i) {
			c_values[cnt++] = PyFloat_AsDouble(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix4x3dv(self->location, size, false, c_values);

	return 0;
}

int Uniform_double_matrix_4x4_array_value_setter_400(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	double * c_values = new double[size * 16];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 16) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 16; ++i) {
			c_values[cnt++] = PyFloat_AsDouble(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix4dv(self->location, size, false, c_values);

	return 0;
}

int Uniform_float_matrix_2x2_value_setter_410(Uniform * self, PyObject * value) {
	float c_values[4];

	if (PyTuple_Size(value) != 4) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 4; ++i) {
		c_values[i] = (float)PyFloat_AsDouble(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glProgramUniformMatrix2fv(self->program, self->location, 1, false, c_values);

	return 0;
}

int Uniform_float_matrix_2x3_value_setter_410(Uniform * self, PyObject * value) {
	float c_values[6];

	if (PyTuple_Size(value) != 6) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 6; ++i) {
		c_values[i] = (float)PyFloat_AsDouble(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glProgramUniformMatrix2x3fv(self->program, self->location, 1, false, c_values);
	
	return 0;
}

int Uniform_float_matrix_2x4_value_setter_410(Uniform * self, PyObject * value) {
	float c_values[8];

	if (PyTuple_Size(value) != 8) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 8; ++i) {
		c_values[i] = (float)PyFloat_AsDouble(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glProgramUniformMatrix2x4fv(self->program, self->location, 1, false, c_values);
	
	return 0;
}

int Uniform_float_matrix_3x2_value_setter_410(Uniform * self, PyObject * value) {
	float c_values[6];

	if (PyTuple_Size(value) != 6) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 6; ++i) {
		c_values[i] = (float)PyFloat_AsDouble(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glProgramUniformMatrix3x2fv(self->program, self->location, 1, false, c_values);
	
	return 0;

}

int Uniform_float_matrix_3x3_value_setter_410(Uniform * self, PyObject * value) {
	float c_values[9];

	if (PyTuple_Size(value) != 9) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 9; ++i) {
		c_values[i] = (float)PyFloat_AsDouble(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glProgramUniformMatrix3fv(self->program, self->location, 1, false, c_values);
	
	return 0;
}

int Uniform_float_matrix_3x4_value_setter_410(Uniform * self, PyObject * value) {
	float c_values[12];

	if (PyTuple_Size(value) != 12) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 12; ++i) {
		c_values[i] = (float)PyFloat_AsDouble(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glProgramUniformMatrix3x4fv(self->program, self->location, 1, false, c_values);
	
	return 0;
}

int Uniform_float_matrix_4x2_value_setter_410(Uniform * self, PyObject * value) {
	float c_values[8];

	if (PyTuple_Size(value) != 8) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 8; ++i) {
		c_values[i] = (float)PyFloat_AsDouble(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glProgramUniformMatrix4x2fv(self->program, self->location, 1, false, c_values);
	
	return 0;
}

int Uniform_float_matrix_4x3_value_setter_410(Uniform * self, PyObject * value) {
	float c_values[12];

	if (PyTuple_Size(value) != 12) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 12; ++i) {
		c_values[i] = (float)PyFloat_AsDouble(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glProgramUniformMatrix4x3fv(self->program, self->location, 1, false, c_values);
	
	return 0;
}

int Uniform_float_matrix_4x4_value_setter_410(Uniform * self, PyObject * value) {
	float c_values[16];

	if (PyTuple_Size(value) != 16) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 16; ++i) {
		c_values[i] = (float)PyFloat_AsDouble(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glProgramUniformMatrix4fv(self->program, self->location, 1, false, c_values);
	
	return 0;
}

int Uniform_double_matrix_2x2_value_setter_410(Uniform * self, PyObject * value) {
	double c_values[4];

	if (PyTuple_Size(value) != 4) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 4; ++i) {
		c_values[i] = PyFloat_AsDouble(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glProgramUniformMatrix2dv(self->program, self->location, 1, false, c_values);

	return 0;
}

int Uniform_double_matrix_2x3_value_setter_410(Uniform * self, PyObject * value) {
	double c_values[6];

	if (PyTuple_Size(value) != 6) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 6; ++i) {
		c_values[i] = PyFloat_AsDouble(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glProgramUniformMatrix2x3dv(self->program, self->location, 1, false, c_values);
	
	return 0;
}

int Uniform_double_matrix_2x4_value_setter_410(Uniform * self, PyObject * value) {
	double c_values[8];

	if (PyTuple_Size(value) != 8) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 8; ++i) {
		c_values[i] = PyFloat_AsDouble(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glProgramUniformMatrix2x4dv(self->program, self->location, 1, false, c_values);
	
	return 0;
}

int Uniform_double_matrix_3x2_value_setter_410(Uniform * self, PyObject * value) {
	double c_values[6];

	if (PyTuple_Size(value) != 6) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 6; ++i) {
		c_values[i] = PyFloat_AsDouble(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glProgramUniformMatrix3x2dv(self->program, self->location, 1, false, c_values);
	
	return 0;

}

int Uniform_double_matrix_3x3_value_setter_410(Uniform * self, PyObject * value) {
	double c_values[9];

	if (PyTuple_Size(value) != 9) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 9; ++i) {
		c_values[i] = PyFloat_AsDouble(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glProgramUniformMatrix3dv(self->program, self->location, 1, false, c_values);
	
	return 0;
}

int Uniform_double_matrix_3x4_value_setter_410(Uniform * self, PyObject * value) {
	double c_values[12];

	if (PyTuple_Size(value) != 12) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 12; ++i) {
		c_values[i] = PyFloat_AsDouble(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glProgramUniformMatrix3x4dv(self->program, self->location, 1, false, c_values);
	
	return 0;
}

int Uniform_double_matrix_4x2_value_setter_410(Uniform * self, PyObject * value) {
	double c_values[8];

	if (PyTuple_Size(value) != 8) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 8; ++i) {
		c_values[i] = PyFloat_AsDouble(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glProgramUniformMatrix4x2dv(self->program, self->location, 1, false, c_values);
	
	return 0;
}

int Uniform_double_matrix_4x3_value_setter_410(Uniform * self, PyObject * value) {
	double c_values[12];

	if (PyTuple_Size(value) != 12) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 12; ++i) {
		c_values[i] = PyFloat_AsDouble(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glProgramUniformMatrix4x3dv(self->program, self->location, 1, false, c_values);
	
	return 0;
}

int Uniform_double_matrix_4x4_value_setter_410(Uniform * self, PyObject * value) {
	double c_values[16];

	if (PyTuple_Size(value) != 16) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	for (int i = 0; i < 16; ++i) {
		c_values[i] = PyFloat_AsDouble(PyTuple_GET_ITEM(value, i));
	}

	if (PyErr_Occurred()) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	OpenGL::glProgramUniformMatrix4dv(self->program, self->location, 1, false, c_values);
	
	return 0;
}

int Uniform_float_matrix_2x2_array_value_setter_410(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	float * c_values = new float[size * 4];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 4) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 4; ++i) {
			c_values[cnt++] = (float)PyFloat_AsDouble(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glProgramUniformMatrix2fv(self->program, self->location, size, false, c_values);

	return 0;
}

int Uniform_float_matrix_2x3_array_value_setter_410(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	float * c_values = new float[size * 6];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 6) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 6; ++i) {
			c_values[cnt++] = (float)PyFloat_AsDouble(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glProgramUniformMatrix2x3fv(self->program, self->location, size, false, c_values);

	return 0;
}

int Uniform_float_matrix_2x4_array_value_setter_410(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	float * c_values = new float[size * 8];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 8) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 8; ++i) {
			c_values[cnt++] = (float)PyFloat_AsDouble(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glProgramUniformMatrix2x4fv(self->program, self->location, size, false, c_values);

	return 0;
}

int Uniform_float_matrix_3x2_array_value_setter_410(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	float * c_values = new float[size * 6];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 6) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 6; ++i) {
			c_values[cnt++] = (float)PyFloat_AsDouble(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glProgramUniformMatrix3x2fv(self->program, self->location, size, false, c_values);

	return 0;
}

int Uniform_float_matrix_3x3_array_value_setter_410(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	float * c_values = new float[size * 9];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 9) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 9; ++i) {
			c_values[cnt++] = (float)PyFloat_AsDouble(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glProgramUniformMatrix3fv(self->program, self->location, size, false, c_values);

	return 0;
}

int Uniform_float_matrix_3x4_array_value_setter_410(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	float * c_values = new float[size * 12];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 12) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 12; ++i) {
			c_values[cnt++] = (float)PyFloat_AsDouble(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glProgramUniformMatrix3x4fv(self->program, self->location, size, false, c_values);

	return 0;
}

int Uniform_float_matrix_4x2_array_value_setter_410(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	float * c_values = new float[size * 8];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 8) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 8; ++i) {
			c_values[cnt++] = (float)PyFloat_AsDouble(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glProgramUniformMatrix4x2fv(self->program, self->location, size, false, c_values);

	return 0;
}

int Uniform_float_matrix_4x3_array_value_setter_410(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	float * c_values = new float[size * 12];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 12) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 12; ++i) {
			c_values[cnt++] = (float)PyFloat_AsDouble(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glProgramUniformMatrix4x3fv(self->program, self->location, size, false, c_values);

	return 0;
}

int Uniform_float_matrix_4x4_array_value_setter_410(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	float * c_values = new float[size * 16];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 16) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 16; ++i) {
			c_values[cnt++] = (float)PyFloat_AsDouble(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glProgramUniformMatrix4fv(self->program, self->location, size, false, c_values);

	return 0;
}

int Uniform_double_matrix_2x2_array_value_setter_410(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	double * c_values = new double[size * 4];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 4) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 4; ++i) {
			c_values[cnt++] = PyFloat_AsDouble(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glProgramUniformMatrix2dv(self->program, self->location, size, false, c_values);

	return 0;
}

int Uniform_double_matrix_2x3_array_value_setter_410(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	double * c_values = new double[size * 6];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 6) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 6; ++i) {
			c_values[cnt++] = PyFloat_AsDouble(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glProgramUniformMatrix2x3dv(self->program, self->location, size, false, c_values);

	return 0;
}

int Uniform_double_matrix_2x4_array_value_setter_410(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	double * c_values = new double[size * 8];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 8) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 8; ++i) {
			c_values[cnt++] = PyFloat_AsDouble(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glProgramUniformMatrix2x4dv(self->program, self->location, size, false, c_values);

	return 0;
}

int Uniform_double_matrix_3x2_array_value_setter_410(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	double * c_values = new double[size * 6];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 6) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 6; ++i) {
			c_values[cnt++] = PyFloat_AsDouble(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glProgramUniformMatrix3x2dv(self->program, self->location, size, false, c_values);

	return 0;
}

int Uniform_double_matrix_3x3_array_value_setter_410(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	double * c_values = new double[size * 9];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 9) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 9; ++i) {
			c_values[cnt++] = PyFloat_AsDouble(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glProgramUniformMatrix3dv(self->program, self->location, size, false, c_values);

	return 0;
}

int Uniform_double_matrix_3x4_array_value_setter_410(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	double * c_values = new double[size * 12];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 12) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 12; ++i) {
			c_values[cnt++] = PyFloat_AsDouble(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glProgramUniformMatrix3x4dv(self->program, self->location, size, false, c_values);

	return 0;
}

int Uniform_double_matrix_4x2_array_value_setter_410(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	double * c_values = new double[size * 8];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 8) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 8; ++i) {
			c_values[cnt++] = PyFloat_AsDouble(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glProgramUniformMatrix4x2dv(self->program, self->location, size, false, c_values);

	return 0;
}

int Uniform_double_matrix_4x3_array_value_setter_410(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	double * c_values = new double[size * 12];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 12) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 12; ++i) {
			c_values[cnt++] = PyFloat_AsDouble(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glProgramUniformMatrix4x3dv(self->program, self->location, size, false, c_values);

	return 0;
}

int Uniform_double_matrix_4x4_array_value_setter_410(Uniform * self, PyObject * value) {
	int size = PyList_Size(value);

	if (PyErr_Occurred() || size != self->info.array_len) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return -1;
	}

	int cnt = 0;
	double * c_values = new double[size * 16];

	for (int k = 0; k < size; ++k) {
		PyObject * tuple = PyList_GET_ITEM(value, k);

		if (PyTuple_Size(tuple) != 16) {
			PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
			delete[] c_values;
			return -1;
		}

		for (int i = 0; i < 16; ++i) {
			c_values[cnt++] = PyFloat_AsDouble(PyTuple_GET_ITEM(tuple, i));
		}
	}

	OpenGL::glProgramUniformMatrix4dv(self->program, self->location, size, false, c_values);

	return 0;
}
