#include "UniformWriters.hpp"

#include "Parts/Errors.hpp"

#include "Graphics/OpenGL.hpp"

PyObject * Uniform_invalid_writer(Uniform * self, PyObject * args) {
	PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
	return 0;
}

PyObject * Uniform_bool_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != sizeof(int)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform1iv(self->location, 1, (int *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_int_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != sizeof(int)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform1iv(self->location, 1, (int *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_uint_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != sizeof(unsigned)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform1uiv(self->location, 1, (unsigned *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_float_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform1fv(self->location, 1, (float *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_double_value_writer_400(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform1dv(self->location, 1, (double *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_bvec2_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 2 * sizeof(int)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform2iv(self->location, 1, (int *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_ivec2_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 2 * sizeof(int)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform2iv(self->location, 1, (int *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_uvec2_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 2 * sizeof(unsigned)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform2uiv(self->location, 1, (unsigned *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_vec2_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 2 * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform2fv(self->location, 1, (float *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_dvec2_value_writer_400(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 2 * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform2dv(self->location, 1, (double *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_bvec3_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 3 * sizeof(int)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform3iv(self->location, 1, (int *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_ivec3_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 3 * sizeof(int)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform3iv(self->location, 1, (int *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_uvec3_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 3 * sizeof(unsigned)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform3uiv(self->location, 1, (unsigned *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_vec3_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 3 * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform3fv(self->location, 1, (float *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_dvec3_value_writer_400(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 3 * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform3dv(self->location, 1, (double *)data);

	Py_RETURN_NONE;
}


PyObject * Uniform_bvec4_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 4 * sizeof(int)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform4iv(self->location, 1, (int *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_ivec4_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 4 * sizeof(int)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform4iv(self->location, 1, (int *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_uvec4_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 4 * sizeof(unsigned)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform4uiv(self->location, 1, (unsigned *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_vec4_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 4 * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform4fv(self->location, 1, (float *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_dvec4_value_writer_400(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 4 * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform4dv(self->location, 1, (double *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_bool_array_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * sizeof(int)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform1iv(self->location, size, (int *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_int_array_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * sizeof(int)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform1iv(self->location, size, (int *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_uint_array_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * sizeof(unsigned)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform1uiv(self->location, size, (unsigned *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_float_array_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform1fv(self->location, size, (float *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_double_array_value_writer_400(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform1dv(self->location, size, (double *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_bvec2_array_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 2 * sizeof(int)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform2iv(self->location, size, (int *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_ivec2_array_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 2 * sizeof(int)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform2iv(self->location, size, (int *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_uvec2_array_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 2 * sizeof(unsigned)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform2uiv(self->location, size, (unsigned *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_vec2_array_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 2 * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform2fv(self->location, size, (float *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_dvec2_array_value_writer_400(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 2 * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform2dv(self->location, size, (double *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_bvec3_array_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 3 * sizeof(int)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform3iv(self->location, size, (int *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_ivec3_array_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 3 * sizeof(int)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform3iv(self->location, size, (int *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_uvec3_array_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 3 * sizeof(unsigned)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform3uiv(self->location, size, (unsigned *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_vec3_array_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 3 * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform3fv(self->location, size, (float *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_dvec3_array_value_writer_400(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 3 * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform3dv(self->location, size, (double *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_bvec4_array_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 4 * sizeof(int)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform4iv(self->location, size, (int *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_ivec4_array_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 4 * sizeof(int)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform4iv(self->location, size, (int *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_uvec4_array_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 4 * sizeof(unsigned)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform4uiv(self->location, size, (unsigned *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_vec4_array_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 4 * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform4fv(self->location, size, (float *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_dvec4_array_value_writer_400(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 4 * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform4dv(self->location, size, (double *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_bool_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != sizeof(int)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniform1iv(self->program, self->location, 1, (int *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_int_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != sizeof(int)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniform1iv(self->program, self->location, 1, (int *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_uint_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != sizeof(unsigned)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniform1uiv(self->program, self->location, 1, (unsigned *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_float_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniform1fv(self->program, self->location, 1, (float *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_double_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniform1dv(self->program, self->location, 1, (double *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_bvec2_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 2 * sizeof(int)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniform2iv(self->program, self->location, 1, (int *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_ivec2_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 2 * sizeof(int)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniform2iv(self->program, self->location, 1, (int *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_uvec2_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 2 * sizeof(unsigned)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniform2uiv(self->program, self->location, 1, (unsigned *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_vec2_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 2 * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniform2fv(self->program, self->location, 1, (float *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_dvec2_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 2 * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniform2dv(self->program, self->location, 1, (double *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_bvec3_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 3 * sizeof(int)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniform3iv(self->program, self->location, 1, (int *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_ivec3_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 3 * sizeof(int)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniform3iv(self->program, self->location, 1, (int *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_uvec3_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 3 * sizeof(unsigned)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniform3uiv(self->program, self->location, 1, (unsigned *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_vec3_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 3 * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniform3fv(self->program, self->location, 1, (float *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_dvec3_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 3 * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniform3dv(self->program, self->location, 1, (double *)data);

	Py_RETURN_NONE;
}


PyObject * Uniform_bvec4_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 4 * sizeof(int)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniform4iv(self->program, self->location, 1, (int *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_ivec4_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 4 * sizeof(int)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniform4iv(self->program, self->location, 1, (int *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_uvec4_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 4 * sizeof(unsigned)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniform4uiv(self->program, self->location, 1, (unsigned *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_vec4_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 4 * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniform4fv(self->program, self->location, 1, (float *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_dvec4_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 4 * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniform4dv(self->program, self->location, 1, (double *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_bool_array_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * sizeof(int)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniform1iv(self->program, self->location, size, (int *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_int_array_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * sizeof(int)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniform1iv(self->program, self->location, size, (int *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_uint_array_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * sizeof(unsigned)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}


	OpenGL::glProgramUniform1uiv(self->program, self->location, size, (unsigned *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_float_array_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniform1fv(self->program, self->location, size, (float *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_double_array_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniform1dv(self->program, self->location, size, (double *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_bvec2_array_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 2 * sizeof(int)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniform2iv(self->program, self->location, size, (int *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_ivec2_array_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 2 * sizeof(int)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniform2iv(self->program, self->location, size, (int *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_uvec2_array_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 2 * sizeof(unsigned)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniform2uiv(self->program, self->location, size, (unsigned *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_vec2_array_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 2 * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniform2fv(self->program, self->location, size, (float *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_dvec2_array_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 2 * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniform2dv(self->program, self->location, size, (double *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_bvec3_array_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 3 * sizeof(int)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniform3iv(self->program, self->location, size, (int *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_ivec3_array_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 3 * sizeof(int)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniform3iv(self->program, self->location, size, (int *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_uvec3_array_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 3 * sizeof(unsigned)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniform3uiv(self->program, self->location, size, (unsigned *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_vec3_array_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 3 * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniform3fv(self->program, self->location, size, (float *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_dvec3_array_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 3 * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniform3dv(self->program, self->location, size, (double *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_bvec4_array_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 4 * sizeof(int)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniform4iv(self->program, self->location, size, (int *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_ivec4_array_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 4 * sizeof(int)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniform4iv(self->program, self->location, size, (int *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_uvec4_array_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 4 * sizeof(unsigned)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniform4uiv(self->program, self->location, size, (unsigned *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_vec4_array_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 4 * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniform4fv(self->program, self->location, size, (float *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_dvec4_array_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 4 * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniform4dv(self->program, self->location, size, (double *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_sampler_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != sizeof(int)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform1iv(self->location, 1, (int *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_sampler_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != sizeof(int)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniform1iv(self->program, self->location, 1, (int *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_sampler_array_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * sizeof(int)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniform1iv(self->location, size, (int *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_sampler_array_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * sizeof(int)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniform1iv(self->program, self->location, size, (int *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_float_matrix_2x2_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 4 * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix2fv(self->location, 1, false, (float *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_float_matrix_2x3_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 6 * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix2x3fv(self->location, 1, false, (float *)data);
	
	Py_RETURN_NONE;
}

PyObject * Uniform_float_matrix_2x4_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 8 * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix2x4fv(self->location, 1, false, (float *)data);
	
	Py_RETURN_NONE;
}

PyObject * Uniform_float_matrix_3x2_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 6 * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix3x2fv(self->location, 1, false, (float *)data);
	
	Py_RETURN_NONE;

	Py_RETURN_NONE;
}

PyObject * Uniform_float_matrix_3x3_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 9 * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix3fv(self->location, 1, false, (float *)data);
	
	Py_RETURN_NONE;
}

PyObject * Uniform_float_matrix_3x4_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 12 * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix3x4fv(self->location, 1, false, (float *)data);
	
	Py_RETURN_NONE;
}

PyObject * Uniform_float_matrix_4x2_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 8 * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix4x2fv(self->location, 1, false, (float *)data);
	
	Py_RETURN_NONE;
}

PyObject * Uniform_float_matrix_4x3_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 12 * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix4x3fv(self->location, 1, false, (float *)data);
	
	Py_RETURN_NONE;
}

PyObject * Uniform_float_matrix_4x4_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 16 * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix4fv(self->location, 1, false, (float *)data);
	
	Py_RETURN_NONE;
}

PyObject * Uniform_double_matrix_2x2_value_writer_400(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 4 * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix2dv(self->location, 1, false, (double *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_double_matrix_2x3_value_writer_400(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 6 * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix2x3dv(self->location, 1, false, (double *)data);
	
	Py_RETURN_NONE;
}

PyObject * Uniform_double_matrix_2x4_value_writer_400(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 8 * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix2x4dv(self->location, 1, false, (double *)data);
	
	Py_RETURN_NONE;
}

PyObject * Uniform_double_matrix_3x2_value_writer_400(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 6 * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix3x2dv(self->location, 1, false, (double *)data);
	
	Py_RETURN_NONE;

	Py_RETURN_NONE;
}

PyObject * Uniform_double_matrix_3x3_value_writer_400(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 9 * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix3dv(self->location, 1, false, (double *)data);
	
	Py_RETURN_NONE;
}

PyObject * Uniform_double_matrix_3x4_value_writer_400(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 12 * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix3x4dv(self->location, 1, false, (double *)data);
	
	Py_RETURN_NONE;
}

PyObject * Uniform_double_matrix_4x2_value_writer_400(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 8 * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix4x2dv(self->location, 1, false, (double *)data);
	
	Py_RETURN_NONE;
}

PyObject * Uniform_double_matrix_4x3_value_writer_400(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 12 * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix4x3dv(self->location, 1, false, (double *)data);
	
	Py_RETURN_NONE;
}

PyObject * Uniform_double_matrix_4x4_value_writer_400(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 16 * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix4dv(self->location, 1, false, (double *)data);
	
	Py_RETURN_NONE;
}

PyObject * Uniform_float_matrix_2x2_array_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 4 * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix2fv(self->location, size, false, (float *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_float_matrix_2x3_array_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 6 * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix2x3fv(self->location, size, false, (float *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_float_matrix_2x4_array_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 8 * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix2x4fv(self->location, size, false, (float *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_float_matrix_3x2_array_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 6 * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix3x2fv(self->location, size, false, (float *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_float_matrix_3x3_array_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 9 * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix3fv(self->location, size, false, (float *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_float_matrix_3x4_array_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 12 * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix3x4fv(self->location, size, false, (float *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_float_matrix_4x2_array_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 8 * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix4x2fv(self->location, size, false, (float *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_float_matrix_4x3_array_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 12 * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix4x3fv(self->location, size, false, (float *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_float_matrix_4x4_array_value_writer_330(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 16 * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix4fv(self->location, size, false, (float *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_double_matrix_2x2_array_value_writer_400(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 4 * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix2dv(self->location, size, false, (double *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_double_matrix_2x3_array_value_writer_400(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 6 * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix2x3dv(self->location, size, false, (double *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_double_matrix_2x4_array_value_writer_400(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 8 * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix2x4dv(self->location, size, false, (double *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_double_matrix_3x2_array_value_writer_400(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 6 * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix3x2dv(self->location, size, false, (double *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_double_matrix_3x3_array_value_writer_400(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 9 * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix3dv(self->location, size, false, (double *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_double_matrix_3x4_array_value_writer_400(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 12 * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix3x4dv(self->location, size, false, (double *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_double_matrix_4x2_array_value_writer_400(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 8 * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix4x2dv(self->location, size, false, (double *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_double_matrix_4x3_array_value_writer_400(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 12 * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix4x3dv(self->location, size, false, (double *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_double_matrix_4x4_array_value_writer_400(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 16 * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glUseProgram(self->program);
	OpenGL::glUniformMatrix4dv(self->location, size, false, (double *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_float_matrix_2x2_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 4 * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniformMatrix2fv(self->program, self->location, 1, false, (float *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_float_matrix_2x3_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 6 * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniformMatrix2x3fv(self->program, self->location, 1, false, (float *)data);
	
	Py_RETURN_NONE;
}

PyObject * Uniform_float_matrix_2x4_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 8 * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniformMatrix2x4fv(self->program, self->location, 1, false, (float *)data);
	
	Py_RETURN_NONE;
}

PyObject * Uniform_float_matrix_3x2_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 6 * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniformMatrix3x2fv(self->program, self->location, 1, false, (float *)data);
	
	Py_RETURN_NONE;

	Py_RETURN_NONE;
}

PyObject * Uniform_float_matrix_3x3_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 9 * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniformMatrix3fv(self->program, self->location, 1, false, (float *)data);
	
	Py_RETURN_NONE;
}

PyObject * Uniform_float_matrix_3x4_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 12 * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniformMatrix3x4fv(self->program, self->location, 1, false, (float *)data);
	
	Py_RETURN_NONE;
}

PyObject * Uniform_float_matrix_4x2_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 8 * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniformMatrix4x2fv(self->program, self->location, 1, false, (float *)data);
	
	Py_RETURN_NONE;
}

PyObject * Uniform_float_matrix_4x3_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 12 * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniformMatrix4x3fv(self->program, self->location, 1, false, (float *)data);
	
	Py_RETURN_NONE;
}

PyObject * Uniform_float_matrix_4x4_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 16 * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniformMatrix4fv(self->program, self->location, 1, false, (float *)data);
	
	Py_RETURN_NONE;
}

PyObject * Uniform_double_matrix_2x2_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 4 * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniformMatrix2dv(self->program, self->location, 1, false, (double *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_double_matrix_2x3_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 6 * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniformMatrix2x3dv(self->program, self->location, 1, false, (double *)data);
	
	Py_RETURN_NONE;
}

PyObject * Uniform_double_matrix_2x4_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 8 * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniformMatrix2x4dv(self->program, self->location, 1, false, (double *)data);
	
	Py_RETURN_NONE;
}

PyObject * Uniform_double_matrix_3x2_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 6 * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniformMatrix3x2dv(self->program, self->location, 1, false, (double *)data);
	
	Py_RETURN_NONE;

	Py_RETURN_NONE;
}

PyObject * Uniform_double_matrix_3x3_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 9 * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniformMatrix3dv(self->program, self->location, 1, false, (double *)data);
	
	Py_RETURN_NONE;
}

PyObject * Uniform_double_matrix_3x4_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 12 * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniformMatrix3x4dv(self->program, self->location, 1, false, (double *)data);
	
	Py_RETURN_NONE;
}

PyObject * Uniform_double_matrix_4x2_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 8 * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniformMatrix4x2dv(self->program, self->location, 1, false, (double *)data);
	
	Py_RETURN_NONE;
}

PyObject * Uniform_double_matrix_4x3_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 12 * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniformMatrix4x3dv(self->program, self->location, 1, false, (double *)data);
	
	Py_RETURN_NONE;
}

PyObject * Uniform_double_matrix_4x4_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != 16 * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniformMatrix4dv(self->program, self->location, 1, false, (double *)data);
	
	Py_RETURN_NONE;
}

PyObject * Uniform_float_matrix_2x2_array_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 4 * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniformMatrix2fv(self->program, self->location, size, false, (float *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_float_matrix_2x3_array_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 6 * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniformMatrix2x3fv(self->program, self->location, size, false, (float *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_float_matrix_2x4_array_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 8 * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniformMatrix2x4fv(self->program, self->location, size, false, (float *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_float_matrix_3x2_array_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 6 * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniformMatrix3x2fv(self->program, self->location, size, false, (float *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_float_matrix_3x3_array_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 9 * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniformMatrix3fv(self->program, self->location, size, false, (float *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_float_matrix_3x4_array_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 12 * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniformMatrix3x4fv(self->program, self->location, size, false, (float *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_float_matrix_4x2_array_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 8 * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniformMatrix4x2fv(self->program, self->location, size, false, (float *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_float_matrix_4x3_array_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 12 * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniformMatrix4x3fv(self->program, self->location, size, false, (float *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_float_matrix_4x4_array_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 16 * sizeof(float)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniformMatrix4fv(self->program, self->location, size, false, (float *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_double_matrix_2x2_array_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 4 * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniformMatrix2dv(self->program, self->location, size, false, (double *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_double_matrix_2x3_array_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 6 * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniformMatrix2x3dv(self->program, self->location, size, false, (double *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_double_matrix_2x4_array_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 8 * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniformMatrix2x4dv(self->program, self->location, size, false, (double *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_double_matrix_3x2_array_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 6 * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniformMatrix3x2dv(self->program, self->location, size, false, (double *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_double_matrix_3x3_array_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 9 * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniformMatrix3dv(self->program, self->location, size, false, (double *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_double_matrix_3x4_array_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 12 * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniformMatrix3x4dv(self->program, self->location, size, false, (double *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_double_matrix_4x2_array_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 8 * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniformMatrix4x2dv(self->program, self->location, size, false, (double *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_double_matrix_4x3_array_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 12 * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniformMatrix4x3dv(self->program, self->location, size, false, (double *)data);

	Py_RETURN_NONE;
}

PyObject * Uniform_double_matrix_4x4_array_value_writer_410(Uniform * self, PyObject * args) {
	const char * data;
	int size;

	if (!PyArg_ParseTuple(args, "y#", &data, &size)) {
		return 0;
	}

	if (size != self->info.array_len * 16 * sizeof(double)) {
		PyErr_Format(BaseError, "Unknown error in %s (%s:%d)", __FUNCTION__, __FILE__, __LINE__);
		return 0;
	}

	OpenGL::glProgramUniformMatrix4dv(self->program, self->location, size, false, (double *)data);

	Py_RETURN_NONE;
}
