#pragma once

#include "Python.h"

#include "Types/Uniform.hpp"

PyObject * Uniform_invalid_getter(Uniform * self);

PyObject * Uniform_bool_value_getter(Uniform * self);
PyObject * Uniform_int_value_getter(Uniform * self);
PyObject * Uniform_uint_value_getter(Uniform * self);
PyObject * Uniform_float_value_getter(Uniform * self);
PyObject * Uniform_double_value_getter(Uniform * self);

PyObject * Uniform_bvec2_value_getter(Uniform * self);
PyObject * Uniform_bvec3_value_getter(Uniform * self);
PyObject * Uniform_bvec4_value_getter(Uniform * self);

PyObject * Uniform_ivec2_value_getter(Uniform * self);
PyObject * Uniform_ivec3_value_getter(Uniform * self);
PyObject * Uniform_ivec4_value_getter(Uniform * self);

PyObject * Uniform_uvec2_value_getter(Uniform * self);
PyObject * Uniform_uvec3_value_getter(Uniform * self);
PyObject * Uniform_uvec4_value_getter(Uniform * self);

PyObject * Uniform_vec2_value_getter(Uniform * self);
PyObject * Uniform_vec3_value_getter(Uniform * self);
PyObject * Uniform_vec4_value_getter(Uniform * self);

PyObject * Uniform_dvec2_value_getter(Uniform * self);
PyObject * Uniform_dvec3_value_getter(Uniform * self);
PyObject * Uniform_dvec4_value_getter(Uniform * self);

PyObject * Uniform_bool_array_value_getter(Uniform * self);
PyObject * Uniform_int_array_value_getter(Uniform * self);
PyObject * Uniform_uint_array_value_getter(Uniform * self);
PyObject * Uniform_float_array_value_getter(Uniform * self);
PyObject * Uniform_double_array_value_getter(Uniform * self);

PyObject * Uniform_bvec2_array_value_getter(Uniform * self);
PyObject * Uniform_bvec3_array_value_getter(Uniform * self);
PyObject * Uniform_bvec4_array_value_getter(Uniform * self);

PyObject * Uniform_ivec2_array_value_getter(Uniform * self);
PyObject * Uniform_ivec3_array_value_getter(Uniform * self);
PyObject * Uniform_ivec4_array_value_getter(Uniform * self);

PyObject * Uniform_uvec2_array_value_getter(Uniform * self);
PyObject * Uniform_uvec3_array_value_getter(Uniform * self);
PyObject * Uniform_uvec4_array_value_getter(Uniform * self);

PyObject * Uniform_vec2_array_value_getter(Uniform * self);
PyObject * Uniform_vec3_array_value_getter(Uniform * self);
PyObject * Uniform_vec4_array_value_getter(Uniform * self);

PyObject * Uniform_dvec2_array_value_getter(Uniform * self);
PyObject * Uniform_dvec3_array_value_getter(Uniform * self);
PyObject * Uniform_dvec4_array_value_getter(Uniform * self);

PyObject * Uniform_sampler_value_getter(Uniform * self);
PyObject * Uniform_sampler_array_value_getter(Uniform * self);

PyObject * Uniform_float_matrix_2x2_value_getter(Uniform * self);
PyObject * Uniform_float_matrix_2x3_value_getter(Uniform * self);
PyObject * Uniform_float_matrix_2x4_value_getter(Uniform * self);
PyObject * Uniform_float_matrix_3x2_value_getter(Uniform * self);
PyObject * Uniform_float_matrix_3x3_value_getter(Uniform * self);
PyObject * Uniform_float_matrix_3x4_value_getter(Uniform * self);
PyObject * Uniform_float_matrix_4x2_value_getter(Uniform * self);
PyObject * Uniform_float_matrix_4x3_value_getter(Uniform * self);
PyObject * Uniform_float_matrix_4x4_value_getter(Uniform * self);

PyObject * Uniform_double_matrix_2x2_value_getter(Uniform * self);
PyObject * Uniform_double_matrix_2x3_value_getter(Uniform * self);
PyObject * Uniform_double_matrix_2x4_value_getter(Uniform * self);
PyObject * Uniform_double_matrix_3x2_value_getter(Uniform * self);
PyObject * Uniform_double_matrix_3x3_value_getter(Uniform * self);
PyObject * Uniform_double_matrix_3x4_value_getter(Uniform * self);
PyObject * Uniform_double_matrix_4x2_value_getter(Uniform * self);
PyObject * Uniform_double_matrix_4x3_value_getter(Uniform * self);
PyObject * Uniform_double_matrix_4x4_value_getter(Uniform * self);

PyObject * Uniform_float_matrix_2x2_array_value_getter(Uniform * self);
PyObject * Uniform_float_matrix_2x3_array_value_getter(Uniform * self);
PyObject * Uniform_float_matrix_2x4_array_value_getter(Uniform * self);
PyObject * Uniform_float_matrix_3x2_array_value_getter(Uniform * self);
PyObject * Uniform_float_matrix_3x3_array_value_getter(Uniform * self);
PyObject * Uniform_float_matrix_3x4_array_value_getter(Uniform * self);
PyObject * Uniform_float_matrix_4x2_array_value_getter(Uniform * self);
PyObject * Uniform_float_matrix_4x3_array_value_getter(Uniform * self);
PyObject * Uniform_float_matrix_4x4_array_value_getter(Uniform * self);

PyObject * Uniform_double_matrix_2x2_array_value_getter(Uniform * self);
PyObject * Uniform_double_matrix_2x3_array_value_getter(Uniform * self);
PyObject * Uniform_double_matrix_2x4_array_value_getter(Uniform * self);
PyObject * Uniform_double_matrix_3x2_array_value_getter(Uniform * self);
PyObject * Uniform_double_matrix_3x3_array_value_getter(Uniform * self);
PyObject * Uniform_double_matrix_3x4_array_value_getter(Uniform * self);
PyObject * Uniform_double_matrix_4x2_array_value_getter(Uniform * self);
PyObject * Uniform_double_matrix_4x3_array_value_getter(Uniform * self);
PyObject * Uniform_double_matrix_4x4_array_value_getter(Uniform * self);
