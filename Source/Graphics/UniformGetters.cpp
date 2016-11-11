#include "UniformGetters.hpp"

#include "Parts/Errors.hpp"

#include "Graphics/OpenGL.hpp"

PyObject * Uniform_invalid_getter(Uniform * self) {
	PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
	return 0;
}

PyObject * Uniform_bool_value_getter(Uniform * self) {
	int value = 0;
	OpenGL::glGetUniformiv(self->program, self->location, &value);
	return PyBool_FromLong(value);
}

PyObject * Uniform_int_value_getter(Uniform * self) {
	int value = 0;
	OpenGL::glGetUniformiv(self->program, self->location, &value);
	return PyLong_FromLong(value);
}

PyObject * Uniform_uint_value_getter(Uniform * self) {
	unsigned value = 0;
	OpenGL::glGetUniformuiv(self->program, self->location, &value);
	return PyLong_FromUnsignedLong(value);
}

PyObject * Uniform_float_value_getter(Uniform * self) {
	float value = 0;
	OpenGL::glGetUniformfv(self->program, self->location, &value);
	return PyFloat_FromDouble(value);
}

PyObject * Uniform_double_value_getter(Uniform * self) {
	double value = 0;
	OpenGL::glGetUniformdv(self->program, self->location, &value);
	return PyFloat_FromDouble(value);
}

PyObject * Uniform_bvec2_value_getter(Uniform * self) {
	int values[2] = {};
	OpenGL::glGetUniformiv(self->program, self->location, values);
	return PyTuple_Pack(
		2,
		PyBool_FromLong(values[0]),
		PyBool_FromLong(values[1])
	);
}

PyObject * Uniform_bvec3_value_getter(Uniform * self) {
	int values[3] = {};
	OpenGL::glGetUniformiv(self->program, self->location, values);
	return PyTuple_Pack(
		3,
		PyBool_FromLong(values[0]),
		PyBool_FromLong(values[1]),
		PyBool_FromLong(values[2])
	);
}

PyObject * Uniform_bvec4_value_getter(Uniform * self) {
	int values[4] = {};
	OpenGL::glGetUniformiv(self->program, self->location, values);
	return PyTuple_Pack(
		4,
		PyBool_FromLong(values[0]),
		PyBool_FromLong(values[1]),
		PyBool_FromLong(values[2]),
		PyBool_FromLong(values[3])
	);
}

PyObject * Uniform_ivec2_value_getter(Uniform * self) {
	int values[2] = {};
	OpenGL::glGetUniformiv(self->program, self->location, values);
	return PyTuple_Pack(
		2,
		PyLong_FromLong(values[0]),
		PyLong_FromLong(values[1])
	);
}

PyObject * Uniform_ivec3_value_getter(Uniform * self) {
	int values[3] = {};
	OpenGL::glGetUniformiv(self->program, self->location, values);
	return PyTuple_Pack(
		3,
		PyLong_FromLong(values[0]),
		PyLong_FromLong(values[1]),
		PyLong_FromLong(values[2])
	);
}

PyObject * Uniform_ivec4_value_getter(Uniform * self) {
	int values[4] = {};
	OpenGL::glGetUniformiv(self->program, self->location, values);
	return PyTuple_Pack(
		4,
		PyLong_FromLong(values[0]),
		PyLong_FromLong(values[1]),
		PyLong_FromLong(values[2]),
		PyLong_FromLong(values[3])
	);
}

PyObject * Uniform_uvec2_value_getter(Uniform * self) {
	unsigned values[2] = {};
	OpenGL::glGetUniformuiv(self->program, self->location, values);
	return PyTuple_Pack(
		2,
		PyLong_FromUnsignedLong(values[0]),
		PyLong_FromUnsignedLong(values[1])
	);
}

PyObject * Uniform_uvec3_value_getter(Uniform * self) {
	unsigned values[3] = {};
	OpenGL::glGetUniformuiv(self->program, self->location, values);
	return PyTuple_Pack(
		3,
		PyLong_FromUnsignedLong(values[0]),
		PyLong_FromUnsignedLong(values[1]),
		PyLong_FromUnsignedLong(values[2])
	);
}

PyObject * Uniform_uvec4_value_getter(Uniform * self) {
	unsigned values[4] = {};
	OpenGL::glGetUniformuiv(self->program, self->location, values);
	return PyTuple_Pack(
		4,
		PyLong_FromUnsignedLong(values[0]),
		PyLong_FromUnsignedLong(values[1]),
		PyLong_FromUnsignedLong(values[2]),
		PyLong_FromUnsignedLong(values[3])
	);
}

PyObject * Uniform_vec2_value_getter(Uniform * self) {
	float values[2] = {};
	OpenGL::glGetUniformfv(self->program, self->location, values);
	return PyTuple_Pack(
		2,
		PyFloat_FromDouble(values[0]),
		PyFloat_FromDouble(values[1])
	);
}

PyObject * Uniform_vec3_value_getter(Uniform * self) {
	float values[3] = {};
	OpenGL::glGetUniformfv(self->program, self->location, values);
	return PyTuple_Pack(
		3,
		PyFloat_FromDouble(values[0]),
		PyFloat_FromDouble(values[1]),
		PyFloat_FromDouble(values[2])
	);
}

PyObject * Uniform_vec4_value_getter(Uniform * self) {
	float values[4] = {};
	OpenGL::glGetUniformfv(self->program, self->location, values);
	return PyTuple_Pack(
		4,
		PyFloat_FromDouble(values[0]),
		PyFloat_FromDouble(values[1]),
		PyFloat_FromDouble(values[2]),
		PyFloat_FromDouble(values[3])
	);
}

PyObject * Uniform_dvec2_value_getter(Uniform * self) {
	double values[2] = {};
	OpenGL::glGetUniformdv(self->program, self->location, values);
	return PyTuple_Pack(
		2,
		PyFloat_FromDouble(values[0]),
		PyFloat_FromDouble(values[1])
	);
}

PyObject * Uniform_dvec3_value_getter(Uniform * self) {
	double values[3] = {};
	OpenGL::glGetUniformdv(self->program, self->location, values);
	return PyTuple_Pack(
		3,
		PyFloat_FromDouble(values[0]),
		PyFloat_FromDouble(values[1]),
		PyFloat_FromDouble(values[2])
	);
}

PyObject * Uniform_dvec4_value_getter(Uniform * self) {
	double values[4] = {};
	OpenGL::glGetUniformdv(self->program, self->location, values);
	return PyTuple_Pack(
		4,
		PyFloat_FromDouble(values[0]),
		PyFloat_FromDouble(values[1]),
		PyFloat_FromDouble(values[2]),
		PyFloat_FromDouble(values[3])
	);
}

PyObject * Uniform_bool_array_value_getter(Uniform * self) {
	int size = self->info.array_len;

	PyObject * lst = PyList_New(size);
	for (int i = 0; i < size; ++i) {
		int value = 0;
		OpenGL::glGetUniformiv(self->program, self->location + i, &value);
		PyList_SET_ITEM(lst, i, PyBool_FromLong(value));
	}

	return lst;
}

PyObject * Uniform_int_array_value_getter(Uniform * self) {
	int size = self->info.array_len;

	PyObject * lst = PyList_New(size);
	for (int i = 0; i < size; ++i) {
		int value = 0;
		OpenGL::glGetUniformiv(self->program, self->location + i, &value);
		PyList_SET_ITEM(lst, i, PyLong_FromLong(value));
	}

	return lst;
}

PyObject * Uniform_uint_array_value_getter(Uniform * self) {
	int size = self->info.array_len;

	PyObject * lst = PyList_New(size);
	for (int i = 0; i < size; ++i) {
		unsigned value = 0;
		OpenGL::glGetUniformuiv(self->program, self->location + i, &value);
		PyList_SET_ITEM(lst, i, PyLong_FromUnsignedLong(value));
	}

	return lst;
}

PyObject * Uniform_float_array_value_getter(Uniform * self) {
	int size = self->info.array_len;

	PyObject * lst = PyList_New(size);
	for (int i = 0; i < size; ++i) {
		float value = 0;
		OpenGL::glGetUniformfv(self->program, self->location + i, &value);
		PyList_SET_ITEM(lst, i, PyFloat_FromDouble(value));
	}

	return lst;
}

PyObject * Uniform_double_array_value_getter(Uniform * self) {
	int size = self->info.array_len;

	PyObject * lst = PyList_New(size);
	for (int i = 0; i < size; ++i) {
		double value = 0;
		OpenGL::glGetUniformdv(self->program, self->location + i, &value);
		PyList_SET_ITEM(lst, i, PyFloat_FromDouble(value));
	}

	return lst;
}

PyObject * Uniform_bvec2_array_value_getter(Uniform * self) {
	int size = self->info.array_len;

	PyObject * lst = PyList_New(size);
	for (int i = 0; i < size; ++i) {
		int values[2] = {};
		OpenGL::glGetUniformiv(self->program, self->location + i, values);

		PyObject * tuple = PyTuple_Pack(
			2,
			PyBool_FromLong(values[0]),
			PyBool_FromLong(values[1])
		);

		PyList_SET_ITEM(lst, i, tuple);
	}

	return lst;
}

PyObject * Uniform_bvec3_array_value_getter(Uniform * self) {
	int size = self->info.array_len;

	PyObject * lst = PyList_New(size);
	for (int i = 0; i < size; ++i) {

		int values[3] = {};
		OpenGL::glGetUniformiv(self->program, self->location + i, values);
		PyObject * tuple = PyTuple_Pack(
			3,
			PyBool_FromLong(values[0]),
			PyBool_FromLong(values[1]),
			PyBool_FromLong(values[2])
		);

		PyList_SET_ITEM(lst, i, tuple);
	}

	return lst;
}

PyObject * Uniform_bvec4_array_value_getter(Uniform * self) {
	int size = self->info.array_len;

	PyObject * lst = PyList_New(size);
	for (int i = 0; i < size; ++i) {

		int values[4] = {};
		OpenGL::glGetUniformiv(self->program, self->location + i, values);
		PyObject * tuple = PyTuple_Pack(
			4,
			PyBool_FromLong(values[0]),
			PyBool_FromLong(values[1]),
			PyBool_FromLong(values[2]),
			PyBool_FromLong(values[3])
		);

		PyList_SET_ITEM(lst, i, tuple);
	}

	return lst;
}

PyObject * Uniform_ivec2_array_value_getter(Uniform * self) {
	int size = self->info.array_len;

	PyObject * lst = PyList_New(size);
	for (int i = 0; i < size; ++i) {

		int values[2] = {};
		OpenGL::glGetUniformiv(self->program, self->location + i, values);
		PyObject * tuple = PyTuple_Pack(
			2,
			PyLong_FromLong(values[0]),
			PyLong_FromLong(values[1])
		);

		PyList_SET_ITEM(lst, i, tuple);
	}

	return lst;
}

PyObject * Uniform_ivec3_array_value_getter(Uniform * self) {
	int size = self->info.array_len;

	PyObject * lst = PyList_New(size);
	for (int i = 0; i < size; ++i) {

		int values[3] = {};
		OpenGL::glGetUniformiv(self->program, self->location + i, values);
		PyObject * tuple = PyTuple_Pack(
			3,
			PyLong_FromLong(values[0]),
			PyLong_FromLong(values[1]),
			PyLong_FromLong(values[2])
		);

		PyList_SET_ITEM(lst, i, tuple);
	}

	return lst;
}

PyObject * Uniform_ivec4_array_value_getter(Uniform * self) {
	int size = self->info.array_len;

	PyObject * lst = PyList_New(size);
	for (int i = 0; i < size; ++i) {

		int values[4] = {};
		OpenGL::glGetUniformiv(self->program, self->location + i, values);
		PyObject * tuple = PyTuple_Pack(
			4,
			PyLong_FromLong(values[0]),
			PyLong_FromLong(values[1]),
			PyLong_FromLong(values[2]),
			PyLong_FromLong(values[3])
		);

		PyList_SET_ITEM(lst, i, tuple);
	}

	return lst;
}

PyObject * Uniform_uvec2_array_value_getter(Uniform * self) {
	int size = self->info.array_len;

	PyObject * lst = PyList_New(size);
	for (int i = 0; i < size; ++i) {

		unsigned values[2] = {};
		OpenGL::glGetUniformuiv(self->program, self->location + i, values);
		PyObject * tuple = PyTuple_Pack(
			2,
			PyLong_FromUnsignedLong(values[0]),
			PyLong_FromUnsignedLong(values[1])
		);

		PyList_SET_ITEM(lst, i, tuple);
	}

	return lst;
}

PyObject * Uniform_uvec3_array_value_getter(Uniform * self) {
	int size = self->info.array_len;

	PyObject * lst = PyList_New(size);
	for (int i = 0; i < size; ++i) {

		unsigned values[3] = {};
		OpenGL::glGetUniformuiv(self->program, self->location + i, values);
		PyObject * tuple = PyTuple_Pack(
			3,
			PyLong_FromUnsignedLong(values[0]),
			PyLong_FromUnsignedLong(values[1]),
			PyLong_FromUnsignedLong(values[2])
		);

		PyList_SET_ITEM(lst, i, tuple);
	}

	return lst;
}

PyObject * Uniform_uvec4_array_value_getter(Uniform * self) {
	int size = self->info.array_len;

	PyObject * lst = PyList_New(size);
	for (int i = 0; i < size; ++i) {

		unsigned values[4] = {};
		OpenGL::glGetUniformuiv(self->program, self->location + i, values);
		PyObject * tuple = PyTuple_Pack(
			4,
			PyLong_FromUnsignedLong(values[0]),
			PyLong_FromUnsignedLong(values[1]),
			PyLong_FromUnsignedLong(values[2]),
			PyLong_FromUnsignedLong(values[3])
		);

		PyList_SET_ITEM(lst, i, tuple);
	}

	return lst;
}

PyObject * Uniform_vec2_array_value_getter(Uniform * self) {
	int size = self->info.array_len;

	PyObject * lst = PyList_New(size);
	for (int i = 0; i < size; ++i) {

		float values[2] = {};
		OpenGL::glGetUniformfv(self->program, self->location + i, values);
		PyObject * tuple = PyTuple_Pack(
			2,
			PyFloat_FromDouble(values[0]),
			PyFloat_FromDouble(values[1])
		);

		PyList_SET_ITEM(lst, i, tuple);
	}

	return lst;
}

PyObject * Uniform_vec3_array_value_getter(Uniform * self) {
	int size = self->info.array_len;

	PyObject * lst = PyList_New(size);
	for (int i = 0; i < size; ++i) {

		float values[3] = {};
		OpenGL::glGetUniformfv(self->program, self->location + i, values);
		PyObject * tuple = PyTuple_Pack(
			3,
			PyFloat_FromDouble(values[0]),
			PyFloat_FromDouble(values[1]),
			PyFloat_FromDouble(values[2])
		);

		PyList_SET_ITEM(lst, i, tuple);
	}

	return lst;
}

PyObject * Uniform_vec4_array_value_getter(Uniform * self) {
	int size = self->info.array_len;

	PyObject * lst = PyList_New(size);
	for (int i = 0; i < size; ++i) {

		float values[4] = {};
		OpenGL::glGetUniformfv(self->program, self->location + i, values);
		PyObject * tuple = PyTuple_Pack(
			4,
			PyFloat_FromDouble(values[0]),
			PyFloat_FromDouble(values[1]),
			PyFloat_FromDouble(values[2]),
			PyFloat_FromDouble(values[3])
		);

		PyList_SET_ITEM(lst, i, tuple);
	}

	return lst;
}

PyObject * Uniform_dvec2_array_value_getter(Uniform * self) {
	int size = self->info.array_len;

	PyObject * lst = PyList_New(size);
	for (int i = 0; i < size; ++i) {

		double values[2] = {};
		OpenGL::glGetUniformdv(self->program, self->location + i, values);
		PyObject * tuple = PyTuple_Pack(
			2,
			PyFloat_FromDouble(values[0]),
			PyFloat_FromDouble(values[1])
		);

		PyList_SET_ITEM(lst, i, tuple);
	}

	return lst;
}

PyObject * Uniform_dvec3_array_value_getter(Uniform * self) {
	int size = self->info.array_len;

	PyObject * lst = PyList_New(size);
	for (int i = 0; i < size; ++i) {

		double values[3] = {};
		OpenGL::glGetUniformdv(self->program, self->location + i, values);
		PyObject * tuple = PyTuple_Pack(
			3,
			PyFloat_FromDouble(values[0]),
			PyFloat_FromDouble(values[1]),
			PyFloat_FromDouble(values[2])
		);

		PyList_SET_ITEM(lst, i, tuple);
	}

	return lst;
}

PyObject * Uniform_dvec4_array_value_getter(Uniform * self) {
	int size = self->info.array_len;

	PyObject * lst = PyList_New(size);
	for (int i = 0; i < size; ++i) {

		double values[4] = {};
		OpenGL::glGetUniformdv(self->program, self->location + i, values);
		PyObject * tuple = PyTuple_Pack(
			4,
			PyFloat_FromDouble(values[0]),
			PyFloat_FromDouble(values[1]),
			PyFloat_FromDouble(values[2]),
			PyFloat_FromDouble(values[3])
		);

		PyList_SET_ITEM(lst, i, tuple);
	}

	return lst;
}

PyObject * Uniform_sampler_value_getter(Uniform * self) {
	int value = 0;
	OpenGL::glGetUniformiv(self->program, self->location, &value);
	return PyLong_FromLong(value);
}

PyObject * Uniform_sampler_array_value_getter(Uniform * self) {
	int size = self->info.array_len;

	PyObject * lst = PyList_New(size);
	for (int i = 0; i < size; ++i) {
		int value = 0;
		OpenGL::glGetUniformiv(self->program, self->location + i, &value);
		PyList_SET_ITEM(lst, i, PyLong_FromLong(value));
	}

	return lst;
}

PyObject * Uniform_float_matrix_2x2_value_getter(Uniform * self) {
	float values[4] = {};
	OpenGL::glGetUniformfv(self->program, self->location, values);
	PyObject * tuple = PyTuple_New(4);
	for (int i = 0; i < 4; ++i) {
		PyTuple_SET_ITEM(tuple, i, PyFloat_FromDouble(values[i]));
	}
	return tuple;
}

PyObject * Uniform_float_matrix_2x3_value_getter(Uniform * self) {
	float values[6] = {};
	OpenGL::glGetUniformfv(self->program, self->location, values);
	PyObject * tuple = PyTuple_New(6);
	for (int i = 0; i < 6; ++i) {
		PyTuple_SET_ITEM(tuple, i, PyFloat_FromDouble(values[i]));
	}
	return tuple;
}

PyObject * Uniform_float_matrix_2x4_value_getter(Uniform * self) {
	float values[8] = {};
	OpenGL::glGetUniformfv(self->program, self->location, values);
	PyObject * tuple = PyTuple_New(8);
	for (int i = 0; i < 8; ++i) {
		PyTuple_SET_ITEM(tuple, i, PyFloat_FromDouble(values[i]));
	}
	return tuple;
}

PyObject * Uniform_float_matrix_3x2_value_getter(Uniform * self) {
	float values[6] = {};
	OpenGL::glGetUniformfv(self->program, self->location, values);
	PyObject * tuple = PyTuple_New(6);
	for (int i = 0; i < 6; ++i) {
		PyTuple_SET_ITEM(tuple, i, PyFloat_FromDouble(values[i]));
	}
	return tuple;
}

PyObject * Uniform_float_matrix_3x3_value_getter(Uniform * self) {
	float values[9] = {};
	OpenGL::glGetUniformfv(self->program, self->location, values);
	PyObject * tuple = PyTuple_New(9);
	for (int i = 0; i < 9; ++i) {
		PyTuple_SET_ITEM(tuple, i, PyFloat_FromDouble(values[i]));
	}
	return tuple;
}

PyObject * Uniform_float_matrix_3x4_value_getter(Uniform * self) {
	float values[12] = {};
	OpenGL::glGetUniformfv(self->program, self->location, values);
	PyObject * tuple = PyTuple_New(12);
	for (int i = 0; i < 12; ++i) {
		PyTuple_SET_ITEM(tuple, i, PyFloat_FromDouble(values[i]));
	}
	return tuple;
}

PyObject * Uniform_float_matrix_4x2_value_getter(Uniform * self) {
	float values[8] = {};
	OpenGL::glGetUniformfv(self->program, self->location, values);
	PyObject * tuple = PyTuple_New(8);
	for (int i = 0; i < 8; ++i) {
		PyTuple_SET_ITEM(tuple, i, PyFloat_FromDouble(values[i]));
	}
	return tuple;
}

PyObject * Uniform_float_matrix_4x3_value_getter(Uniform * self) {
	float values[12] = {};
	OpenGL::glGetUniformfv(self->program, self->location, values);
	PyObject * tuple = PyTuple_New(12);
	for (int i = 0; i < 12; ++i) {
		PyTuple_SET_ITEM(tuple, i, PyFloat_FromDouble(values[i]));
	}
	return tuple;
}

PyObject * Uniform_float_matrix_4x4_value_getter(Uniform * self) {
	float values[16] = {};
	OpenGL::glGetUniformfv(self->program, self->location, values);
	PyObject * tuple = PyTuple_New(16);
	for (int i = 0; i < 16; ++i) {
		PyTuple_SET_ITEM(tuple, i, PyFloat_FromDouble(values[i]));
	}
	return tuple;
}

PyObject * Uniform_double_matrix_2x2_value_getter(Uniform * self) {
	double values[4] = {};
	OpenGL::glGetUniformdv(self->program, self->location, values);
	PyObject * tuple = PyTuple_New(4);
	for (int i = 0; i < 4; ++i) {
		PyTuple_SET_ITEM(tuple, i, PyFloat_FromDouble(values[i]));
	}
	return tuple;
}

PyObject * Uniform_double_matrix_2x3_value_getter(Uniform * self) {
	double values[6] = {};
	OpenGL::glGetUniformdv(self->program, self->location, values);
	PyObject * tuple = PyTuple_New(6);
	for (int i = 0; i < 6; ++i) {
		PyTuple_SET_ITEM(tuple, i, PyFloat_FromDouble(values[i]));
	}
	return tuple;
}

PyObject * Uniform_double_matrix_2x4_value_getter(Uniform * self) {
	double values[8] = {};
	OpenGL::glGetUniformdv(self->program, self->location, values);
	PyObject * tuple = PyTuple_New(8);
	for (int i = 0; i < 8; ++i) {
		PyTuple_SET_ITEM(tuple, i, PyFloat_FromDouble(values[i]));
	}
	return tuple;
}

PyObject * Uniform_double_matrix_3x2_value_getter(Uniform * self) {
	double values[6] = {};
	OpenGL::glGetUniformdv(self->program, self->location, values);
	PyObject * tuple = PyTuple_New(6);
	for (int i = 0; i < 6; ++i) {
		PyTuple_SET_ITEM(tuple, i, PyFloat_FromDouble(values[i]));
	}
	return tuple;
}

PyObject * Uniform_double_matrix_3x3_value_getter(Uniform * self) {
	double values[9] = {};
	OpenGL::glGetUniformdv(self->program, self->location, values);
	PyObject * tuple = PyTuple_New(9);
	for (int i = 0; i < 9; ++i) {
		PyTuple_SET_ITEM(tuple, i, PyFloat_FromDouble(values[i]));
	}
	return tuple;
}

PyObject * Uniform_double_matrix_3x4_value_getter(Uniform * self) {
	double values[12] = {};
	OpenGL::glGetUniformdv(self->program, self->location, values);
	PyObject * tuple = PyTuple_New(12);
	for (int i = 0; i < 12; ++i) {
		PyTuple_SET_ITEM(tuple, i, PyFloat_FromDouble(values[i]));
	}
	return tuple;
}

PyObject * Uniform_double_matrix_4x2_value_getter(Uniform * self) {
	double values[8] = {};
	OpenGL::glGetUniformdv(self->program, self->location, values);
	PyObject * tuple = PyTuple_New(8);
	for (int i = 0; i < 8; ++i) {
		PyTuple_SET_ITEM(tuple, i, PyFloat_FromDouble(values[i]));
	}
	return tuple;
}

PyObject * Uniform_double_matrix_4x3_value_getter(Uniform * self) {
	double values[12] = {};
	OpenGL::glGetUniformdv(self->program, self->location, values);
	PyObject * tuple = PyTuple_New(12);
	for (int i = 0; i < 12; ++i) {
		PyTuple_SET_ITEM(tuple, i, PyFloat_FromDouble(values[i]));
	}
	return tuple;
}

PyObject * Uniform_double_matrix_4x4_value_getter(Uniform * self) {
	double values[16] = {};
	OpenGL::glGetUniformdv(self->program, self->location, values);
	PyObject * tuple = PyTuple_New(16);
	for (int i = 0; i < 16; ++i) {
		PyTuple_SET_ITEM(tuple, i, PyFloat_FromDouble(values[i]));
	}
	return tuple;
}

PyObject * Uniform_float_matrix_2x2_array_value_getter(Uniform * self) {
	int size = self->info.array_len;

	PyObject * lst = PyList_New(size);
	for (int i = 0; i < size; ++i) {
		float values[4] = {};

		OpenGL::glGetUniformfv(self->program, self->location + i, values);

		PyObject * tuple = PyTuple_New(4);

		for (int i = 0; i < 4; ++i) {
			PyTuple_SET_ITEM(tuple, i, PyFloat_FromDouble(values[i]));
		}

		PyList_SET_ITEM(lst, i, tuple);
	}

	return lst;
}

PyObject * Uniform_float_matrix_2x3_array_value_getter(Uniform * self) {
	int size = self->info.array_len;

	PyObject * lst = PyList_New(size);
	for (int i = 0; i < size; ++i) {
		float values[6] = {};

		OpenGL::glGetUniformfv(self->program, self->location + i, values);

		PyObject * tuple = PyTuple_New(6);

		for (int i = 0; i < 6; ++i) {
			PyTuple_SET_ITEM(tuple, i, PyFloat_FromDouble(values[i]));
		}

		PyList_SET_ITEM(lst, i, tuple);
	}

	return lst;
}

PyObject * Uniform_float_matrix_2x4_array_value_getter(Uniform * self) {
	int size = self->info.array_len;

	PyObject * lst = PyList_New(size);
	for (int i = 0; i < size; ++i) {
		float values[8] = {};

		OpenGL::glGetUniformfv(self->program, self->location + i, values);

		PyObject * tuple = PyTuple_New(8);

		for (int i = 0; i < 8; ++i) {
			PyTuple_SET_ITEM(tuple, i, PyFloat_FromDouble(values[i]));
		}

		PyList_SET_ITEM(lst, i, tuple);
	}

	return lst;
}

PyObject * Uniform_float_matrix_3x2_array_value_getter(Uniform * self) {
	int size = self->info.array_len;

	PyObject * lst = PyList_New(size);
	for (int i = 0; i < size; ++i) {
		float values[6] = {};

		OpenGL::glGetUniformfv(self->program, self->location + i, values);

		PyObject * tuple = PyTuple_New(6);

		for (int i = 0; i < 6; ++i) {
			PyTuple_SET_ITEM(tuple, i, PyFloat_FromDouble(values[i]));
		}

		PyList_SET_ITEM(lst, i, tuple);
	}

	return lst;
}

PyObject * Uniform_float_matrix_3x3_array_value_getter(Uniform * self) {
	int size = self->info.array_len;

	PyObject * lst = PyList_New(size);
	for (int i = 0; i < size; ++i) {
		float values[9] = {};

		OpenGL::glGetUniformfv(self->program, self->location + i, values);

		PyObject * tuple = PyTuple_New(9);

		for (int i = 0; i < 9; ++i) {
			PyTuple_SET_ITEM(tuple, i, PyFloat_FromDouble(values[i]));
		}

		PyList_SET_ITEM(lst, i, tuple);
	}

	return lst;
}

PyObject * Uniform_float_matrix_3x4_array_value_getter(Uniform * self) {
	int size = self->info.array_len;

	PyObject * lst = PyList_New(size);
	for (int i = 0; i < size; ++i) {
		float values[12] = {};

		OpenGL::glGetUniformfv(self->program, self->location + i, values);

		PyObject * tuple = PyTuple_New(12);

		for (int i = 0; i < 12; ++i) {
			PyTuple_SET_ITEM(tuple, i, PyFloat_FromDouble(values[i]));
		}

		PyList_SET_ITEM(lst, i, tuple);
	}

	return lst;
}

PyObject * Uniform_float_matrix_4x2_array_value_getter(Uniform * self) {
	int size = self->info.array_len;

	PyObject * lst = PyList_New(size);
	for (int i = 0; i < size; ++i) {
		float values[8] = {};

		OpenGL::glGetUniformfv(self->program, self->location + i, values);

		PyObject * tuple = PyTuple_New(8);

		for (int i = 0; i < 8; ++i) {
			PyTuple_SET_ITEM(tuple, i, PyFloat_FromDouble(values[i]));
		}

		PyList_SET_ITEM(lst, i, tuple);
	}

	return lst;
}

PyObject * Uniform_float_matrix_4x3_array_value_getter(Uniform * self) {
	int size = self->info.array_len;

	PyObject * lst = PyList_New(size);
	for (int i = 0; i < size; ++i) {
		float values[12] = {};

		OpenGL::glGetUniformfv(self->program, self->location + i, values);

		PyObject * tuple = PyTuple_New(12);

		for (int i = 0; i < 12; ++i) {
			PyTuple_SET_ITEM(tuple, i, PyFloat_FromDouble(values[i]));
		}

		PyList_SET_ITEM(lst, i, tuple);
	}

	return lst;
}

PyObject * Uniform_float_matrix_4x4_array_value_getter(Uniform * self) {
	int size = self->info.array_len;

	PyObject * lst = PyList_New(size);
	for (int i = 0; i < size; ++i) {
		float values[16] = {};

		OpenGL::glGetUniformfv(self->program, self->location + i, values);

		PyObject * tuple = PyTuple_New(16);

		for (int i = 0; i < 16; ++i) {
			PyTuple_SET_ITEM(tuple, i, PyFloat_FromDouble(values[i]));
		}

		PyList_SET_ITEM(lst, i, tuple);
	}

	return lst;
}

PyObject * Uniform_double_matrix_2x2_array_value_getter(Uniform * self) {
	int size = self->info.array_len;

	PyObject * lst = PyList_New(size);
	for (int i = 0; i < size; ++i) {
		double values[4] = {};

		OpenGL::glGetUniformdv(self->program, self->location + i, values);

		PyObject * tuple = PyTuple_New(4);

		for (int i = 0; i < 4; ++i) {
			PyTuple_SET_ITEM(tuple, i, PyFloat_FromDouble(values[i]));
		}

		PyList_SET_ITEM(lst, i, tuple);
	}

	return lst;
}

PyObject * Uniform_double_matrix_2x3_array_value_getter(Uniform * self) {
	int size = self->info.array_len;

	PyObject * lst = PyList_New(size);
	for (int i = 0; i < size; ++i) {
		double values[6] = {};

		OpenGL::glGetUniformdv(self->program, self->location + i, values);

		PyObject * tuple = PyTuple_New(6);

		for (int i = 0; i < 6; ++i) {
			PyTuple_SET_ITEM(tuple, i, PyFloat_FromDouble(values[i]));
		}

		PyList_SET_ITEM(lst, i, tuple);
	}

	return lst;
}

PyObject * Uniform_double_matrix_2x4_array_value_getter(Uniform * self) {
	int size = self->info.array_len;

	PyObject * lst = PyList_New(size);
	for (int i = 0; i < size; ++i) {
		double values[8] = {};

		OpenGL::glGetUniformdv(self->program, self->location + i, values);

		PyObject * tuple = PyTuple_New(8);

		for (int i = 0; i < 8; ++i) {
			PyTuple_SET_ITEM(tuple, i, PyFloat_FromDouble(values[i]));
		}

		PyList_SET_ITEM(lst, i, tuple);
	}

	return lst;
}

PyObject * Uniform_double_matrix_3x2_array_value_getter(Uniform * self) {
	int size = self->info.array_len;

	PyObject * lst = PyList_New(size);
	for (int i = 0; i < size; ++i) {
		double values[6] = {};

		OpenGL::glGetUniformdv(self->program, self->location + i, values);

		PyObject * tuple = PyTuple_New(6);

		for (int i = 0; i < 6; ++i) {
			PyTuple_SET_ITEM(tuple, i, PyFloat_FromDouble(values[i]));
		}

		PyList_SET_ITEM(lst, i, tuple);
	}

	return lst;
}

PyObject * Uniform_double_matrix_3x3_array_value_getter(Uniform * self) {
	int size = self->info.array_len;

	PyObject * lst = PyList_New(size);
	for (int i = 0; i < size; ++i) {
		double values[9] = {};

		OpenGL::glGetUniformdv(self->program, self->location + i, values);

		PyObject * tuple = PyTuple_New(9);

		for (int i = 0; i < 9; ++i) {
			PyTuple_SET_ITEM(tuple, i, PyFloat_FromDouble(values[i]));
		}

		PyList_SET_ITEM(lst, i, tuple);
	}

	return lst;
}

PyObject * Uniform_double_matrix_3x4_array_value_getter(Uniform * self) {
	int size = self->info.array_len;

	PyObject * lst = PyList_New(size);
	for (int i = 0; i < size; ++i) {
		double values[12] = {};

		OpenGL::glGetUniformdv(self->program, self->location + i, values);

		PyObject * tuple = PyTuple_New(12);

		for (int i = 0; i < 12; ++i) {
			PyTuple_SET_ITEM(tuple, i, PyFloat_FromDouble(values[i]));
		}

		PyList_SET_ITEM(lst, i, tuple);
	}

	return lst;
}

PyObject * Uniform_double_matrix_4x2_array_value_getter(Uniform * self) {
	int size = self->info.array_len;

	PyObject * lst = PyList_New(size);
	for (int i = 0; i < size; ++i) {
		double values[8] = {};

		OpenGL::glGetUniformdv(self->program, self->location + i, values);

		PyObject * tuple = PyTuple_New(8);

		for (int i = 0; i < 8; ++i) {
			PyTuple_SET_ITEM(tuple, i, PyFloat_FromDouble(values[i]));
		}

		PyList_SET_ITEM(lst, i, tuple);
	}

	return lst;
}

PyObject * Uniform_double_matrix_4x3_array_value_getter(Uniform * self) {
	int size = self->info.array_len;

	PyObject * lst = PyList_New(size);
	for (int i = 0; i < size; ++i) {
		double values[12] = {};

		OpenGL::glGetUniformdv(self->program, self->location + i, values);

		PyObject * tuple = PyTuple_New(12);

		for (int i = 0; i < 12; ++i) {
			PyTuple_SET_ITEM(tuple, i, PyFloat_FromDouble(values[i]));
		}

		PyList_SET_ITEM(lst, i, tuple);
	}

	return lst;
}

PyObject * Uniform_double_matrix_4x4_array_value_getter(Uniform * self) {
	int size = self->info.array_len;

	PyObject * lst = PyList_New(size);
	for (int i = 0; i < size; ++i) {
		double values[16] = {};

		OpenGL::glGetUniformdv(self->program, self->location + i, values);

		PyObject * tuple = PyTuple_New(16);

		for (int i = 0; i < 16; ++i) {
			PyTuple_SET_ITEM(tuple, i, PyFloat_FromDouble(values[i]));
		}

		PyList_SET_ITEM(lst, i, tuple);
	}

	return lst;
}
