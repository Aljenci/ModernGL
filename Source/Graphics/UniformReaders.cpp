#include "UniformReaders.hpp"

#include "Parts/Errors.hpp"

#include "Graphics/OpenGL.hpp"

PyObject * Uniform_invalid_reader(Uniform * self) {
	PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
	return 0;
}

PyObject * Uniform_bool_value_reader(Uniform * self) {
	int value = 0;
	OpenGL::glGetUniformiv(self->program, self->location, &value);
	return PyBytes_FromStringAndSize((const char *)&value, sizeof(int));
}

PyObject * Uniform_int_value_reader(Uniform * self) {
	int value = 0;
	OpenGL::glGetUniformiv(self->program, self->location, &value);
	return PyBytes_FromStringAndSize((const char *)&value, sizeof(int));
}

PyObject * Uniform_uint_value_reader(Uniform * self) {
	unsigned value = 0;
	OpenGL::glGetUniformuiv(self->program, self->location, &value);
	return PyBytes_FromStringAndSize((const char *)&value, sizeof(unsigned));
}

PyObject * Uniform_float_value_reader(Uniform * self) {
	float value = 0;
	OpenGL::glGetUniformfv(self->program, self->location, &value);
	return PyBytes_FromStringAndSize((const char *)&value, sizeof(float));
}

PyObject * Uniform_double_value_reader(Uniform * self) {
	double value = 0;
	OpenGL::glGetUniformdv(self->program, self->location, &value);
	return PyBytes_FromStringAndSize((const char *)&value, sizeof(double));
}

PyObject * Uniform_bvec2_value_reader(Uniform * self) {
	int values[2] = {};
	OpenGL::glGetUniformiv(self->program, self->location, values);
	return PyBytes_FromStringAndSize((const char *)values, 2 * sizeof(int));
}

PyObject * Uniform_bvec3_value_reader(Uniform * self) {
	int values[3] = {};
	OpenGL::glGetUniformiv(self->program, self->location, values);
	return PyBytes_FromStringAndSize((const char *)values, 3 * sizeof(int));
}

PyObject * Uniform_bvec4_value_reader(Uniform * self) {
	int values[4] = {};
	OpenGL::glGetUniformiv(self->program, self->location, values);
	return PyBytes_FromStringAndSize((const char *)values, 4 * sizeof(int));
}

PyObject * Uniform_ivec2_value_reader(Uniform * self) {
	int values[2] = {};
	OpenGL::glGetUniformiv(self->program, self->location, values);
	return PyBytes_FromStringAndSize((const char *)values, 2 * sizeof(int));
}

PyObject * Uniform_ivec3_value_reader(Uniform * self) {
	int values[3] = {};
	OpenGL::glGetUniformiv(self->program, self->location, values);
	return PyBytes_FromStringAndSize((const char *)values, 3 * sizeof(int));
}

PyObject * Uniform_ivec4_value_reader(Uniform * self) {
	int values[4] = {};
	OpenGL::glGetUniformiv(self->program, self->location, values);
	return PyBytes_FromStringAndSize((const char *)values, 4 * sizeof(int));
}

PyObject * Uniform_uvec2_value_reader(Uniform * self) {
	unsigned values[2] = {};
	OpenGL::glGetUniformuiv(self->program, self->location, values);
	return PyBytes_FromStringAndSize((const char *)values, 2 * sizeof(unsigned));
}

PyObject * Uniform_uvec3_value_reader(Uniform * self) {
	unsigned values[3] = {};
	OpenGL::glGetUniformuiv(self->program, self->location, values);
	return PyBytes_FromStringAndSize((const char *)values, 3 * sizeof(unsigned));
}

PyObject * Uniform_uvec4_value_reader(Uniform * self) {
	unsigned values[4] = {};
	OpenGL::glGetUniformuiv(self->program, self->location, values);
	return PyBytes_FromStringAndSize((const char *)values, 4 * sizeof(unsigned));
}

PyObject * Uniform_vec2_value_reader(Uniform * self) {
	float values[2] = {};
	OpenGL::glGetUniformfv(self->program, self->location, values);
	return PyBytes_FromStringAndSize((const char *)values, 2 * sizeof(float));
}

PyObject * Uniform_vec3_value_reader(Uniform * self) {
	float values[3] = {};
	OpenGL::glGetUniformfv(self->program, self->location, values);
	return PyBytes_FromStringAndSize((const char *)values, 3 * sizeof(float));
}

PyObject * Uniform_vec4_value_reader(Uniform * self) {
	float values[4] = {};
	OpenGL::glGetUniformfv(self->program, self->location, values);
	return PyBytes_FromStringAndSize((const char *)values, 4 * sizeof(float));
}

PyObject * Uniform_dvec2_value_reader(Uniform * self) {
	double values[2] = {};
	OpenGL::glGetUniformdv(self->program, self->location, values);
	return PyBytes_FromStringAndSize((const char *)values, 2 * sizeof(double));
}

PyObject * Uniform_dvec3_value_reader(Uniform * self) {
	double values[3] = {};
	OpenGL::glGetUniformdv(self->program, self->location, values);
	return PyBytes_FromStringAndSize((const char *)values, 3 * sizeof(double));
}

PyObject * Uniform_dvec4_value_reader(Uniform * self) {
	double values[4] = {};
	OpenGL::glGetUniformdv(self->program, self->location, values);
	return PyBytes_FromStringAndSize((const char *)values, 4 * sizeof(double));
}

PyObject * Uniform_bool_array_value_reader(Uniform * self) {
	int size = self->info.array_len;

	PyObject * result = PyBytes_FromStringAndSize(0, size * sizeof(int));
	int * values = (int *)PyBytes_AS_STRING(result);

	for (int i = 0; i < size; ++i) {
		OpenGL::glGetUniformiv(self->program, self->location + i, values);
		values += 1;
	}

	return result;
}

PyObject * Uniform_int_array_value_reader(Uniform * self) {
	int size = self->info.array_len;

	PyObject * result = PyBytes_FromStringAndSize(0, size * sizeof(int));
	int * values = (int *)PyBytes_AS_STRING(result);

	for (int i = 0; i < size; ++i) {
		OpenGL::glGetUniformiv(self->program, self->location + i, values);
		values += 1;
	}

	return result;
}

PyObject * Uniform_uint_array_value_reader(Uniform * self) {
	int size = self->info.array_len;

	PyObject * result = PyBytes_FromStringAndSize(0, size * sizeof(unsigned));
	unsigned * values = (unsigned *)PyBytes_AS_STRING(result);

	for (int i = 0; i < size; ++i) {
		OpenGL::glGetUniformuiv(self->program, self->location + i, values);
		values += 1;
	}

	return result;
}

PyObject * Uniform_float_array_value_reader(Uniform * self) {
	int size = self->info.array_len;

	PyObject * result = PyBytes_FromStringAndSize(0, size * sizeof(float));
	float * values = (float *)PyBytes_AS_STRING(result);

	for (int i = 0; i < size; ++i) {
		OpenGL::glGetUniformfv(self->program, self->location + i, values);
		values += 1;
	}

	return result;
}

PyObject * Uniform_double_array_value_reader(Uniform * self) {
	int size = self->info.array_len;

	PyObject * result = PyBytes_FromStringAndSize(0, size * sizeof(double));
	double * values = (double *)PyBytes_AS_STRING(result);

	for (int i = 0; i < size; ++i) {
		OpenGL::glGetUniformdv(self->program, self->location + i, values);
		values += 1;
	}

	return result;
}

PyObject * Uniform_bvec2_array_value_reader(Uniform * self) {
	int size = self->info.array_len;

	PyObject * result = PyBytes_FromStringAndSize(0, size * 2 * sizeof(int));
	int * values = (int *)PyBytes_AS_STRING(result);

	for (int i = 0; i < size; ++i) {
		OpenGL::glGetUniformiv(self->program, self->location + i, values);
		values += 2;
	}

	return result;
}

PyObject * Uniform_bvec3_array_value_reader(Uniform * self) {
	int size = self->info.array_len;

	PyObject * result = PyBytes_FromStringAndSize(0, size * 3 * sizeof(int));
	int * values = (int *)PyBytes_AS_STRING(result);

	for (int i = 0; i < size; ++i) {
		OpenGL::glGetUniformiv(self->program, self->location + i, values);
		values += 3;
	}

	return result;
}

PyObject * Uniform_bvec4_array_value_reader(Uniform * self) {
	int size = self->info.array_len;

	PyObject * result = PyBytes_FromStringAndSize(0, size * 4 * sizeof(int));
	int * values = (int *)PyBytes_AS_STRING(result);

	for (int i = 0; i < size; ++i) {
		OpenGL::glGetUniformiv(self->program, self->location + i, values);
		values += 4;
	}

	return result;
}

PyObject * Uniform_ivec2_array_value_reader(Uniform * self) {
	int size = self->info.array_len;

	PyObject * result = PyBytes_FromStringAndSize(0, size * 2 * sizeof(int));
	int * values = (int *)PyBytes_AS_STRING(result);

	for (int i = 0; i < size; ++i) {
		OpenGL::glGetUniformiv(self->program, self->location + i, values);
		values += 2;
	}

	return result;
}

PyObject * Uniform_ivec3_array_value_reader(Uniform * self) {
	int size = self->info.array_len;

	PyObject * result = PyBytes_FromStringAndSize(0, size * 3 * sizeof(int));
	int * values = (int *)PyBytes_AS_STRING(result);

	for (int i = 0; i < size; ++i) {
		OpenGL::glGetUniformiv(self->program, self->location + i, values);
		values += 3;
	}

	return result;
}

PyObject * Uniform_ivec4_array_value_reader(Uniform * self) {
	int size = self->info.array_len;

	PyObject * result = PyBytes_FromStringAndSize(0, size * 4 * sizeof(int));
	int * values = (int *)PyBytes_AS_STRING(result);

	for (int i = 0; i < size; ++i) {
		OpenGL::glGetUniformiv(self->program, self->location + i, values);
		values += 4;
	}

	return result;
}

PyObject * Uniform_uvec2_array_value_reader(Uniform * self) {
	int size = self->info.array_len;

	PyObject * result = PyBytes_FromStringAndSize(0, size * 2 * sizeof(unsigned));
	unsigned * values = (unsigned *)PyBytes_AS_STRING(result);

	for (int i = 0; i < size; ++i) {
		OpenGL::glGetUniformuiv(self->program, self->location + i, values);
		values += 2;
	}

	return result;
}

PyObject * Uniform_uvec3_array_value_reader(Uniform * self) {
	int size = self->info.array_len;

	PyObject * result = PyBytes_FromStringAndSize(0, size * 3 * sizeof(unsigned));
	unsigned * values = (unsigned *)PyBytes_AS_STRING(result);

	for (int i = 0; i < size; ++i) {
		OpenGL::glGetUniformuiv(self->program, self->location + i, values);
		values += 3;
	}

	return result;
}

PyObject * Uniform_uvec4_array_value_reader(Uniform * self) {
	int size = self->info.array_len;

	PyObject * result = PyBytes_FromStringAndSize(0, size * 4 * sizeof(unsigned));
	unsigned * values = (unsigned *)PyBytes_AS_STRING(result);

	for (int i = 0; i < size; ++i) {
		OpenGL::glGetUniformuiv(self->program, self->location + i, values);
		values += 4;
	}

	return result;
}

PyObject * Uniform_vec2_array_value_reader(Uniform * self) {
	int size = self->info.array_len;

	PyObject * result = PyBytes_FromStringAndSize(0, size * 2 * sizeof(float));
	float * values = (float *)PyBytes_AS_STRING(result);

	for (int i = 0; i < size; ++i) {
		OpenGL::glGetUniformfv(self->program, self->location + i, values);
		values += 2;
	}

	return result;
}

PyObject * Uniform_vec3_array_value_reader(Uniform * self) {
	int size = self->info.array_len;

	PyObject * result = PyBytes_FromStringAndSize(0, size * 3 * sizeof(float));
	float * values = (float *)PyBytes_AS_STRING(result);

	for (int i = 0; i < size; ++i) {
		OpenGL::glGetUniformfv(self->program, self->location + i, values);
		values += 3;
	}

	return result;
}

PyObject * Uniform_vec4_array_value_reader(Uniform * self) {
	int size = self->info.array_len;

	PyObject * result = PyBytes_FromStringAndSize(0, size * 4 * sizeof(float));
	float * values = (float *)PyBytes_AS_STRING(result);

	for (int i = 0; i < size; ++i) {
		OpenGL::glGetUniformfv(self->program, self->location + i, values);
		values += 4;
	}

	return result;
}

PyObject * Uniform_dvec2_array_value_reader(Uniform * self) {
	int size = self->info.array_len;

	printf("%d\n", size * 2 * sizeof(double));

	PyObject * result = PyBytes_FromStringAndSize(0, size * 2 * sizeof(double));
	double * values = (double *)PyBytes_AS_STRING(result);

	for (int i = 0; i < size; ++i) {
		OpenGL::glGetUniformdv(self->program, self->location + i, values);
		values += 2;
	}

	return result;
}

PyObject * Uniform_dvec3_array_value_reader(Uniform * self) {
	int size = self->info.array_len;

	PyObject * result = PyBytes_FromStringAndSize(0, size * 3 * sizeof(double));
	double * values = (double *)PyBytes_AS_STRING(result);

	for (int i = 0; i < size; ++i) {
		OpenGL::glGetUniformdv(self->program, self->location + i, values);
		values += 3;
	}

	return result;
}

PyObject * Uniform_dvec4_array_value_reader(Uniform * self) {
	int size = self->info.array_len;

	PyObject * result = PyBytes_FromStringAndSize(0, size * 4 * sizeof(double));
	double * values = (double *)PyBytes_AS_STRING(result);

	for (int i = 0; i < size; ++i) {
		OpenGL::glGetUniformdv(self->program, self->location + i, values);
		values += 4;
	}

	return result;
}

PyObject * Uniform_sampler_value_reader(Uniform * self) {
	return 0;
}

PyObject * Uniform_sampler_array_value_reader(Uniform * self) {
	return 0;
}

PyObject * Uniform_float_matrix_2x2_value_reader(Uniform * self) {
	float values[4] = {};
	OpenGL::glGetUniformfv(self->program, self->location, values);
	return PyBytes_FromStringAndSize((const char *)values, 4 * sizeof(float));
}

PyObject * Uniform_float_matrix_2x3_value_reader(Uniform * self) {
	float values[6] = {};
	OpenGL::glGetUniformfv(self->program, self->location, values);
	return PyBytes_FromStringAndSize((const char *)values, 6 * sizeof(float));
}

PyObject * Uniform_float_matrix_2x4_value_reader(Uniform * self) {
	float values[8] = {};
	OpenGL::glGetUniformfv(self->program, self->location, values);
	return PyBytes_FromStringAndSize((const char *)values, 8 * sizeof(float));
}

PyObject * Uniform_float_matrix_3x2_value_reader(Uniform * self) {
	float values[6] = {};
	OpenGL::glGetUniformfv(self->program, self->location, values);
	return PyBytes_FromStringAndSize((const char *)values, 6 * sizeof(float));
}

PyObject * Uniform_float_matrix_3x3_value_reader(Uniform * self) {
	float values[9] = {};
	OpenGL::glGetUniformfv(self->program, self->location, values);
	return PyBytes_FromStringAndSize((const char *)values, 9 * sizeof(float));
}

PyObject * Uniform_float_matrix_3x4_value_reader(Uniform * self) {
	float values[12] = {};
	OpenGL::glGetUniformfv(self->program, self->location, values);
	return PyBytes_FromStringAndSize((const char *)values, 12 * sizeof(float));
}

PyObject * Uniform_float_matrix_4x2_value_reader(Uniform * self) {
	float values[8] = {};
	OpenGL::glGetUniformfv(self->program, self->location, values);
	return PyBytes_FromStringAndSize((const char *)values, 8 * sizeof(float));
}

PyObject * Uniform_float_matrix_4x3_value_reader(Uniform * self) {
	float values[12] = {};
	OpenGL::glGetUniformfv(self->program, self->location, values);
	return PyBytes_FromStringAndSize((const char *)values, 12 * sizeof(float));
}

PyObject * Uniform_float_matrix_4x4_value_reader(Uniform * self) {
	float values[16] = {};
	OpenGL::glGetUniformfv(self->program, self->location, values);
	return PyBytes_FromStringAndSize((const char *)values, 16 * sizeof(float));
}

PyObject * Uniform_double_matrix_2x2_value_reader(Uniform * self) {
	double values[4] = {};
	OpenGL::glGetUniformdv(self->program, self->location, values);
	return PyBytes_FromStringAndSize((const char *)values, 4 * sizeof(double));
}

PyObject * Uniform_double_matrix_2x3_value_reader(Uniform * self) {
	double values[6] = {};
	OpenGL::glGetUniformdv(self->program, self->location, values);
	return PyBytes_FromStringAndSize((const char *)values, 6 * sizeof(double));
}

PyObject * Uniform_double_matrix_2x4_value_reader(Uniform * self) {
	double values[8] = {};
	OpenGL::glGetUniformdv(self->program, self->location, values);
	return PyBytes_FromStringAndSize((const char *)values, 8 * sizeof(double));
}

PyObject * Uniform_double_matrix_3x2_value_reader(Uniform * self) {
	double values[6] = {};
	OpenGL::glGetUniformdv(self->program, self->location, values);
	return PyBytes_FromStringAndSize((const char *)values, 6 * sizeof(double));
}

PyObject * Uniform_double_matrix_3x3_value_reader(Uniform * self) {
	double values[9] = {};
	OpenGL::glGetUniformdv(self->program, self->location, values);
	return PyBytes_FromStringAndSize((const char *)values, 9 * sizeof(double));
}

PyObject * Uniform_double_matrix_3x4_value_reader(Uniform * self) {
	double values[12] = {};
	OpenGL::glGetUniformdv(self->program, self->location, values);
	return PyBytes_FromStringAndSize((const char *)values, 12 * sizeof(double));
}

PyObject * Uniform_double_matrix_4x2_value_reader(Uniform * self) {
	double values[8] = {};
	OpenGL::glGetUniformdv(self->program, self->location, values);
	return PyBytes_FromStringAndSize((const char *)values, 8 * sizeof(double));
}

PyObject * Uniform_double_matrix_4x3_value_reader(Uniform * self) {
	double values[12] = {};
	OpenGL::glGetUniformdv(self->program, self->location, values);
	return PyBytes_FromStringAndSize((const char *)values, 12 * sizeof(double));
}

PyObject * Uniform_double_matrix_4x4_value_reader(Uniform * self) {
	double values[16] = {};
	OpenGL::glGetUniformdv(self->program, self->location, values);
	return PyBytes_FromStringAndSize((const char *)values, 16 * sizeof(double));
}

PyObject * Uniform_float_matrix_2x2_array_value_reader(Uniform * self) {
	int size = self->info.array_len;

	PyObject * result = PyBytes_FromStringAndSize(0, size * 4 * sizeof(float));
	float * values = (float *)PyBytes_AS_STRING(result);

	for (int i = 0; i < size; ++i) {
		OpenGL::glGetUniformfv(self->program, self->location + i, values);
		values += 4;
	}

	return result;
}

PyObject * Uniform_float_matrix_2x3_array_value_reader(Uniform * self) {
	int size = self->info.array_len;

	PyObject * result = PyBytes_FromStringAndSize(0, size * 6 * sizeof(float));
	float * values = (float *)PyBytes_AS_STRING(result);

	for (int i = 0; i < size; ++i) {
		OpenGL::glGetUniformfv(self->program, self->location + i, values);
		values += 6;
	}

	return result;
}

PyObject * Uniform_float_matrix_2x4_array_value_reader(Uniform * self) {
	int size = self->info.array_len;

	PyObject * result = PyBytes_FromStringAndSize(0, size * 8 * sizeof(float));
	float * values = (float *)PyBytes_AS_STRING(result);

	for (int i = 0; i < size; ++i) {
		OpenGL::glGetUniformfv(self->program, self->location + i, values);
		values += 8;
	}

	return result;
}

PyObject * Uniform_float_matrix_3x2_array_value_reader(Uniform * self) {
	int size = self->info.array_len;

	PyObject * result = PyBytes_FromStringAndSize(0, size * 6 * sizeof(float));
	float * values = (float *)PyBytes_AS_STRING(result);

	for (int i = 0; i < size; ++i) {
		OpenGL::glGetUniformfv(self->program, self->location + i, values);
		values += 6;
	}

	return result;
}

PyObject * Uniform_float_matrix_3x3_array_value_reader(Uniform * self) {
	int size = self->info.array_len;

	PyObject * result = PyBytes_FromStringAndSize(0, size * 9 * sizeof(float));
	float * values = (float *)PyBytes_AS_STRING(result);

	for (int i = 0; i < size; ++i) {
		OpenGL::glGetUniformfv(self->program, self->location + i, values);
		values += 9;
	}

	return result;
}

PyObject * Uniform_float_matrix_3x4_array_value_reader(Uniform * self) {
	int size = self->info.array_len;

	PyObject * result = PyBytes_FromStringAndSize(0, size * 12 * sizeof(float));
	float * values = (float *)PyBytes_AS_STRING(result);

	for (int i = 0; i < size; ++i) {
		OpenGL::glGetUniformfv(self->program, self->location + i, values);
		values += 12;
	}

	return result;
}

PyObject * Uniform_float_matrix_4x2_array_value_reader(Uniform * self) {
	int size = self->info.array_len;

	PyObject * result = PyBytes_FromStringAndSize(0, size * 8 * sizeof(float));
	float * values = (float *)PyBytes_AS_STRING(result);

	for (int i = 0; i < size; ++i) {
		OpenGL::glGetUniformfv(self->program, self->location + i, values);
		values += 8;
	}

	return result;
}

PyObject * Uniform_float_matrix_4x3_array_value_reader(Uniform * self) {
	int size = self->info.array_len;

	PyObject * result = PyBytes_FromStringAndSize(0, size * 12 * sizeof(float));
	float * values = (float *)PyBytes_AS_STRING(result);

	for (int i = 0; i < size; ++i) {
		OpenGL::glGetUniformfv(self->program, self->location + i, values);
		values += 12;
	}

	return result;
}

PyObject * Uniform_float_matrix_4x4_array_value_reader(Uniform * self) {
	int size = self->info.array_len;

	PyObject * result = PyBytes_FromStringAndSize(0, size * 16 * sizeof(float));
	float * values = (float *)PyBytes_AS_STRING(result);

	for (int i = 0; i < size; ++i) {
		OpenGL::glGetUniformfv(self->program, self->location + i, values);
		values += 16;
	}

	return result;
}

PyObject * Uniform_double_matrix_2x2_array_value_reader(Uniform * self) {
	int size = self->info.array_len;

	PyObject * result = PyBytes_FromStringAndSize(0, size * 4 * sizeof(double));
	double * values = (double *)PyBytes_AS_STRING(result);

	for (int i = 0; i < size; ++i) {
		OpenGL::glGetUniformdv(self->program, self->location + i, values);
		values += 4;
	}

	return result;
}

PyObject * Uniform_double_matrix_2x3_array_value_reader(Uniform * self) {
	int size = self->info.array_len;

	PyObject * result = PyBytes_FromStringAndSize(0, size * 6 * sizeof(double));
	double * values = (double *)PyBytes_AS_STRING(result);

	for (int i = 0; i < size; ++i) {
		OpenGL::glGetUniformdv(self->program, self->location + i, values);
		values += 6;
	}

	return result;
}

PyObject * Uniform_double_matrix_2x4_array_value_reader(Uniform * self) {
	int size = self->info.array_len;

	PyObject * result = PyBytes_FromStringAndSize(0, size * 8 * sizeof(double));
	double * values = (double *)PyBytes_AS_STRING(result);

	for (int i = 0; i < size; ++i) {
		OpenGL::glGetUniformdv(self->program, self->location + i, values);
		values += 8;
	}

	return result;
}

PyObject * Uniform_double_matrix_3x2_array_value_reader(Uniform * self) {
	int size = self->info.array_len;

	PyObject * result = PyBytes_FromStringAndSize(0, size * 6 * sizeof(double));
	double * values = (double *)PyBytes_AS_STRING(result);

	for (int i = 0; i < size; ++i) {
		OpenGL::glGetUniformdv(self->program, self->location + i, values);
		values += 6;
	}

	return result;
}

PyObject * Uniform_double_matrix_3x3_array_value_reader(Uniform * self) {
	int size = self->info.array_len;

	PyObject * result = PyBytes_FromStringAndSize(0, size * 9 * sizeof(double));
	double * values = (double *)PyBytes_AS_STRING(result);

	for (int i = 0; i < size; ++i) {
		OpenGL::glGetUniformdv(self->program, self->location + i, values);
		values += 9;
	}

	return result;
}

PyObject * Uniform_double_matrix_3x4_array_value_reader(Uniform * self) {
	int size = self->info.array_len;

	PyObject * result = PyBytes_FromStringAndSize(0, size * 12 * sizeof(double));
	double * values = (double *)PyBytes_AS_STRING(result);

	for (int i = 0; i < size; ++i) {
		OpenGL::glGetUniformdv(self->program, self->location + i, values);
		values += 12;
	}

	return result;
}

PyObject * Uniform_double_matrix_4x2_array_value_reader(Uniform * self) {
	int size = self->info.array_len;

	PyObject * result = PyBytes_FromStringAndSize(0, size * 8 * sizeof(double));
	double * values = (double *)PyBytes_AS_STRING(result);

	for (int i = 0; i < size; ++i) {
		OpenGL::glGetUniformdv(self->program, self->location + i, values);
		values += 8;
	}

	return result;
}

PyObject * Uniform_double_matrix_4x3_array_value_reader(Uniform * self) {
	int size = self->info.array_len;

	PyObject * result = PyBytes_FromStringAndSize(0, size * 12 * sizeof(double));
	double * values = (double *)PyBytes_AS_STRING(result);

	for (int i = 0; i < size; ++i) {
		OpenGL::glGetUniformdv(self->program, self->location + i, values);
		values += 12;
	}

	return result;
}

PyObject * Uniform_double_matrix_4x4_array_value_reader(Uniform * self) {
	int size = self->info.array_len;

	PyObject * result = PyBytes_FromStringAndSize(0, size * 16 * sizeof(double));
	double * values = (double *)PyBytes_AS_STRING(result);

	for (int i = 0; i < size; ++i) {
		OpenGL::glGetUniformdv(self->program, self->location + i, values);
		values += 16;
	}

	return result;
}
