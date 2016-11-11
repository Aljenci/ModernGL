#include "UniformTools.hpp"

#include "Graphics/OpenGL.hpp"
#include "Graphics/GLVersion.hpp"
#include "Graphics/UniformGetters.hpp"
#include "Graphics/UniformSetters.hpp"
#include "Graphics/UniformReaders.hpp"
#include "Graphics/UniformWriters.hpp"

#include "Events/LoadEvent.hpp"
#include "Events/VersionChangeEvent.hpp"

namespace {
	int Lookup[0x10000];

	Uniform_value_getter Getter[1024];
	Uniform_value_reader Reader[1024];
	Uniform_value_setter Setter[1024];
	Uniform_value_writer Writer[1024];

	Uniform_value_getter ArrayGetter[1024];
	Uniform_value_setter ArraySetter[1024];
	Uniform_value_reader ArrayReader[1024];
	Uniform_value_writer ArrayWriter[1024];

	void OnLoad() {
		Lookup[OpenGL::GL_BOOL] = 1;
		Lookup[OpenGL::GL_INT] = 2;
		Lookup[OpenGL::GL_UNSIGNED_INT] = 3;
		Lookup[OpenGL::GL_FLOAT] = 4;
		Lookup[OpenGL::GL_DOUBLE] = 5;
		Lookup[OpenGL::GL_BOOL_VEC2] = 6;
		Lookup[OpenGL::GL_BOOL_VEC3] = 7;
		Lookup[OpenGL::GL_BOOL_VEC4] = 8;
		Lookup[OpenGL::GL_INT_VEC2] = 9;
		Lookup[OpenGL::GL_INT_VEC3] = 10;
		Lookup[OpenGL::GL_INT_VEC4] = 11;
		Lookup[OpenGL::GL_UNSIGNED_INT_VEC2] = 12;
		Lookup[OpenGL::GL_UNSIGNED_INT_VEC3] = 13;
		Lookup[OpenGL::GL_UNSIGNED_INT_VEC4] = 14;
		Lookup[OpenGL::GL_FLOAT_VEC2] = 15;
		Lookup[OpenGL::GL_FLOAT_VEC3] = 16;
		Lookup[OpenGL::GL_FLOAT_VEC4] = 17;
		Lookup[OpenGL::GL_DOUBLE_VEC2] = 18;
		Lookup[OpenGL::GL_DOUBLE_VEC3] = 19;
		Lookup[OpenGL::GL_DOUBLE_VEC4] = 20;
		Lookup[OpenGL::GL_SAMPLER_2D] = 21;
		Lookup[OpenGL::GL_SAMPLER_2D_SHADOW] = 22;
		Lookup[OpenGL::GL_SAMPLER_2D_MULTISAMPLE] = 23;
		Lookup[OpenGL::GL_SAMPLER_CUBE] = 24;
		Lookup[OpenGL::GL_FLOAT_MAT2] = 25;
		Lookup[OpenGL::GL_FLOAT_MAT2x3] = 26;
		Lookup[OpenGL::GL_FLOAT_MAT2x4] = 27;
		Lookup[OpenGL::GL_FLOAT_MAT3x2] = 28;
		Lookup[OpenGL::GL_FLOAT_MAT3] = 29;
		Lookup[OpenGL::GL_FLOAT_MAT3x4] = 30;
		Lookup[OpenGL::GL_FLOAT_MAT4x2] = 31;
		Lookup[OpenGL::GL_FLOAT_MAT4x3] = 32;
		Lookup[OpenGL::GL_FLOAT_MAT4] = 33;
		Lookup[OpenGL::GL_DOUBLE_MAT2] = 34;
		Lookup[OpenGL::GL_DOUBLE_MAT2x3] = 35;
		Lookup[OpenGL::GL_DOUBLE_MAT2x4] = 36;
		Lookup[OpenGL::GL_DOUBLE_MAT3x2] = 37;
		Lookup[OpenGL::GL_DOUBLE_MAT3] = 38;
		Lookup[OpenGL::GL_DOUBLE_MAT3x4] = 39;
		Lookup[OpenGL::GL_DOUBLE_MAT4x2] = 40;
		Lookup[OpenGL::GL_DOUBLE_MAT4x3] = 41;
		Lookup[OpenGL::GL_DOUBLE_MAT4] = 42;

		for (int i = 0; i < 1024; ++i) {
			Getter[i] = Uniform_invalid_getter;
			Setter[i] = Uniform_invalid_setter;
			Reader[i] = Uniform_invalid_reader;
			Writer[i] = Uniform_invalid_writer;

			ArrayGetter[i] = Uniform_invalid_getter;
			ArraySetter[i] = Uniform_invalid_setter;
			ArrayReader[i] = Uniform_invalid_reader;
			ArrayWriter[i] = Uniform_invalid_writer;
		}
	}

	void OnVersionChange(GLVER glver) {
		switch (glver) {
			case OPENGL_330:
			case OPENGL_400:
			case OPENGL_410:
			case OPENGL_420:
			case OPENGL_430:
			case OPENGL_440:
			case OPENGL_450:
				Getter[Lookup[OpenGL::GL_BOOL]] = Uniform_bool_value_getter;
				Getter[Lookup[OpenGL::GL_INT]] = Uniform_int_value_getter;
				Getter[Lookup[OpenGL::GL_UNSIGNED_INT]] = Uniform_uint_value_getter;
				Getter[Lookup[OpenGL::GL_FLOAT]] = Uniform_float_value_getter;
				Getter[Lookup[OpenGL::GL_BOOL_VEC2]] = Uniform_bvec2_value_getter;
				Getter[Lookup[OpenGL::GL_BOOL_VEC3]] = Uniform_bvec3_value_getter;
				Getter[Lookup[OpenGL::GL_BOOL_VEC4]] = Uniform_bvec4_value_getter;
				Getter[Lookup[OpenGL::GL_INT_VEC2]] = Uniform_ivec2_value_getter;
				Getter[Lookup[OpenGL::GL_INT_VEC3]] = Uniform_ivec3_value_getter;
				Getter[Lookup[OpenGL::GL_INT_VEC4]] = Uniform_ivec4_value_getter;
				Getter[Lookup[OpenGL::GL_UNSIGNED_INT_VEC2]] = Uniform_uvec2_value_getter;
				Getter[Lookup[OpenGL::GL_UNSIGNED_INT_VEC3]] = Uniform_uvec3_value_getter;
				Getter[Lookup[OpenGL::GL_UNSIGNED_INT_VEC4]] = Uniform_uvec4_value_getter;
				Getter[Lookup[OpenGL::GL_FLOAT_VEC2]] = Uniform_vec2_value_getter;
				Getter[Lookup[OpenGL::GL_FLOAT_VEC3]] = Uniform_vec3_value_getter;
				Getter[Lookup[OpenGL::GL_FLOAT_VEC4]] = Uniform_vec4_value_getter;

				Getter[Lookup[OpenGL::GL_SAMPLER_2D]] = Uniform_sampler_value_getter;
				Getter[Lookup[OpenGL::GL_SAMPLER_2D_SHADOW]] = Uniform_sampler_value_getter;
				Getter[Lookup[OpenGL::GL_SAMPLER_2D_MULTISAMPLE]] = Uniform_sampler_value_getter;
				Getter[Lookup[OpenGL::GL_SAMPLER_CUBE]] = Uniform_sampler_value_getter;

				Getter[Lookup[OpenGL::GL_FLOAT_MAT2]] = Uniform_float_matrix_2x2_value_getter;
				Getter[Lookup[OpenGL::GL_FLOAT_MAT2x3]] = Uniform_float_matrix_2x3_value_getter;
				Getter[Lookup[OpenGL::GL_FLOAT_MAT2x4]] = Uniform_float_matrix_2x4_value_getter;
				Getter[Lookup[OpenGL::GL_FLOAT_MAT3x2]] = Uniform_float_matrix_3x2_value_getter;
				Getter[Lookup[OpenGL::GL_FLOAT_MAT3]] = Uniform_float_matrix_3x3_value_getter;
				Getter[Lookup[OpenGL::GL_FLOAT_MAT3x4]] = Uniform_float_matrix_3x4_value_getter;
				Getter[Lookup[OpenGL::GL_FLOAT_MAT4x2]] = Uniform_float_matrix_4x2_value_getter;
				Getter[Lookup[OpenGL::GL_FLOAT_MAT4x3]] = Uniform_float_matrix_4x3_value_getter;
				Getter[Lookup[OpenGL::GL_FLOAT_MAT4]] = Uniform_float_matrix_4x4_value_getter;

				Reader[Lookup[OpenGL::GL_BOOL]] = Uniform_bool_value_reader;
				Reader[Lookup[OpenGL::GL_INT]] = Uniform_int_value_reader;
				Reader[Lookup[OpenGL::GL_UNSIGNED_INT]] = Uniform_uint_value_reader;
				Reader[Lookup[OpenGL::GL_FLOAT]] = Uniform_float_value_reader;
				Reader[Lookup[OpenGL::GL_BOOL_VEC2]] = Uniform_bvec2_value_reader;
				Reader[Lookup[OpenGL::GL_BOOL_VEC3]] = Uniform_bvec3_value_reader;
				Reader[Lookup[OpenGL::GL_BOOL_VEC4]] = Uniform_bvec4_value_reader;
				Reader[Lookup[OpenGL::GL_INT_VEC2]] = Uniform_ivec2_value_reader;
				Reader[Lookup[OpenGL::GL_INT_VEC3]] = Uniform_ivec3_value_reader;
				Reader[Lookup[OpenGL::GL_INT_VEC4]] = Uniform_ivec4_value_reader;
				Reader[Lookup[OpenGL::GL_UNSIGNED_INT_VEC2]] = Uniform_uvec2_value_reader;
				Reader[Lookup[OpenGL::GL_UNSIGNED_INT_VEC3]] = Uniform_uvec3_value_reader;
				Reader[Lookup[OpenGL::GL_UNSIGNED_INT_VEC4]] = Uniform_uvec4_value_reader;
				Reader[Lookup[OpenGL::GL_FLOAT_VEC2]] = Uniform_vec2_value_reader;
				Reader[Lookup[OpenGL::GL_FLOAT_VEC3]] = Uniform_vec3_value_reader;
				Reader[Lookup[OpenGL::GL_FLOAT_VEC4]] = Uniform_vec4_value_reader;

				Reader[Lookup[OpenGL::GL_SAMPLER_2D]] = Uniform_sampler_value_reader;
				Reader[Lookup[OpenGL::GL_SAMPLER_2D_SHADOW]] = Uniform_sampler_value_reader;
				Reader[Lookup[OpenGL::GL_SAMPLER_2D_MULTISAMPLE]] = Uniform_sampler_value_reader;
				Reader[Lookup[OpenGL::GL_SAMPLER_CUBE]] = Uniform_sampler_value_reader;

				Reader[Lookup[OpenGL::GL_FLOAT_MAT2]] = Uniform_float_matrix_2x2_value_reader;
				Reader[Lookup[OpenGL::GL_FLOAT_MAT2x3]] = Uniform_float_matrix_2x3_value_reader;
				Reader[Lookup[OpenGL::GL_FLOAT_MAT2x4]] = Uniform_float_matrix_2x4_value_reader;
				Reader[Lookup[OpenGL::GL_FLOAT_MAT3x2]] = Uniform_float_matrix_3x2_value_reader;
				Reader[Lookup[OpenGL::GL_FLOAT_MAT3]] = Uniform_float_matrix_3x3_value_reader;
				Reader[Lookup[OpenGL::GL_FLOAT_MAT3x4]] = Uniform_float_matrix_3x4_value_reader;
				Reader[Lookup[OpenGL::GL_FLOAT_MAT4x2]] = Uniform_float_matrix_4x2_value_reader;
				Reader[Lookup[OpenGL::GL_FLOAT_MAT4x3]] = Uniform_float_matrix_4x3_value_reader;
				Reader[Lookup[OpenGL::GL_FLOAT_MAT4]] = Uniform_float_matrix_4x4_value_reader;
				break;
		}

		switch (glver) {
			case OPENGL_330:
			case OPENGL_400:
			case OPENGL_410:
			case OPENGL_420:
			case OPENGL_430:
			case OPENGL_440:
			case OPENGL_450:
				ArrayGetter[Lookup[OpenGL::GL_BOOL]] = Uniform_bool_array_value_getter;
				ArrayGetter[Lookup[OpenGL::GL_INT]] = Uniform_int_array_value_getter;
				ArrayGetter[Lookup[OpenGL::GL_UNSIGNED_INT]] = Uniform_uint_array_value_getter;
				ArrayGetter[Lookup[OpenGL::GL_FLOAT]] = Uniform_float_array_value_getter;
				ArrayGetter[Lookup[OpenGL::GL_BOOL_VEC2]] = Uniform_bvec2_array_value_getter;
				ArrayGetter[Lookup[OpenGL::GL_BOOL_VEC3]] = Uniform_bvec3_array_value_getter;
				ArrayGetter[Lookup[OpenGL::GL_BOOL_VEC4]] = Uniform_bvec4_array_value_getter;
				ArrayGetter[Lookup[OpenGL::GL_INT_VEC2]] = Uniform_ivec2_array_value_getter;
				ArrayGetter[Lookup[OpenGL::GL_INT_VEC3]] = Uniform_ivec3_array_value_getter;
				ArrayGetter[Lookup[OpenGL::GL_INT_VEC4]] = Uniform_ivec4_array_value_getter;
				ArrayGetter[Lookup[OpenGL::GL_UNSIGNED_INT_VEC2]] = Uniform_uvec2_array_value_getter;
				ArrayGetter[Lookup[OpenGL::GL_UNSIGNED_INT_VEC3]] = Uniform_uvec3_array_value_getter;
				ArrayGetter[Lookup[OpenGL::GL_UNSIGNED_INT_VEC4]] = Uniform_uvec4_array_value_getter;
				ArrayGetter[Lookup[OpenGL::GL_FLOAT_VEC2]] = Uniform_vec2_array_value_getter;
				ArrayGetter[Lookup[OpenGL::GL_FLOAT_VEC3]] = Uniform_vec3_array_value_getter;
				ArrayGetter[Lookup[OpenGL::GL_FLOAT_VEC4]] = Uniform_vec4_array_value_getter;

				ArrayGetter[Lookup[OpenGL::GL_SAMPLER_2D]] = Uniform_sampler_array_value_getter;
				ArrayGetter[Lookup[OpenGL::GL_SAMPLER_2D_SHADOW]] = Uniform_sampler_array_value_getter;
				ArrayGetter[Lookup[OpenGL::GL_SAMPLER_2D_MULTISAMPLE]] = Uniform_sampler_array_value_getter;
				ArrayGetter[Lookup[OpenGL::GL_SAMPLER_CUBE]] = Uniform_sampler_array_value_getter;

				ArrayGetter[Lookup[OpenGL::GL_FLOAT_MAT2]] = Uniform_float_matrix_2x2_array_value_getter;
				ArrayGetter[Lookup[OpenGL::GL_FLOAT_MAT2x3]] = Uniform_float_matrix_2x3_array_value_getter;
				ArrayGetter[Lookup[OpenGL::GL_FLOAT_MAT2x4]] = Uniform_float_matrix_2x4_array_value_getter;
				ArrayGetter[Lookup[OpenGL::GL_FLOAT_MAT3x2]] = Uniform_float_matrix_3x2_array_value_getter;
				ArrayGetter[Lookup[OpenGL::GL_FLOAT_MAT3]] = Uniform_float_matrix_3x3_array_value_getter;
				ArrayGetter[Lookup[OpenGL::GL_FLOAT_MAT3x4]] = Uniform_float_matrix_3x4_array_value_getter;
				ArrayGetter[Lookup[OpenGL::GL_FLOAT_MAT4x2]] = Uniform_float_matrix_4x2_array_value_getter;
				ArrayGetter[Lookup[OpenGL::GL_FLOAT_MAT4x3]] = Uniform_float_matrix_4x3_array_value_getter;
				ArrayGetter[Lookup[OpenGL::GL_FLOAT_MAT4]] = Uniform_float_matrix_4x4_array_value_getter;

				ArrayReader[Lookup[OpenGL::GL_BOOL]] = Uniform_bool_array_value_reader;
				ArrayReader[Lookup[OpenGL::GL_INT]] = Uniform_int_array_value_reader;
				ArrayReader[Lookup[OpenGL::GL_UNSIGNED_INT]] = Uniform_uint_array_value_reader;
				ArrayReader[Lookup[OpenGL::GL_FLOAT]] = Uniform_float_array_value_reader;
				ArrayReader[Lookup[OpenGL::GL_BOOL_VEC2]] = Uniform_bvec2_array_value_reader;
				ArrayReader[Lookup[OpenGL::GL_BOOL_VEC3]] = Uniform_bvec3_array_value_reader;
				ArrayReader[Lookup[OpenGL::GL_BOOL_VEC4]] = Uniform_bvec4_array_value_reader;
				ArrayReader[Lookup[OpenGL::GL_INT_VEC2]] = Uniform_ivec2_array_value_reader;
				ArrayReader[Lookup[OpenGL::GL_INT_VEC3]] = Uniform_ivec3_array_value_reader;
				ArrayReader[Lookup[OpenGL::GL_INT_VEC4]] = Uniform_ivec4_array_value_reader;
				ArrayReader[Lookup[OpenGL::GL_UNSIGNED_INT_VEC2]] = Uniform_uvec2_array_value_reader;
				ArrayReader[Lookup[OpenGL::GL_UNSIGNED_INT_VEC3]] = Uniform_uvec3_array_value_reader;
				ArrayReader[Lookup[OpenGL::GL_UNSIGNED_INT_VEC4]] = Uniform_uvec4_array_value_reader;
				ArrayReader[Lookup[OpenGL::GL_FLOAT_VEC2]] = Uniform_vec2_array_value_reader;
				ArrayReader[Lookup[OpenGL::GL_FLOAT_VEC3]] = Uniform_vec3_array_value_reader;
				ArrayReader[Lookup[OpenGL::GL_FLOAT_VEC4]] = Uniform_vec4_array_value_reader;

				ArrayReader[Lookup[OpenGL::GL_SAMPLER_2D]] = Uniform_sampler_array_value_reader;
				ArrayReader[Lookup[OpenGL::GL_SAMPLER_2D_SHADOW]] = Uniform_sampler_array_value_reader;
				ArrayReader[Lookup[OpenGL::GL_SAMPLER_2D_MULTISAMPLE]] = Uniform_sampler_array_value_reader;
				ArrayReader[Lookup[OpenGL::GL_SAMPLER_CUBE]] = Uniform_sampler_array_value_reader;

				ArrayReader[Lookup[OpenGL::GL_FLOAT_MAT2]] = Uniform_float_matrix_2x2_array_value_reader;
				ArrayReader[Lookup[OpenGL::GL_FLOAT_MAT2x3]] = Uniform_float_matrix_2x3_array_value_reader;
				ArrayReader[Lookup[OpenGL::GL_FLOAT_MAT2x4]] = Uniform_float_matrix_2x4_array_value_reader;
				ArrayReader[Lookup[OpenGL::GL_FLOAT_MAT3x2]] = Uniform_float_matrix_3x2_array_value_reader;
				ArrayReader[Lookup[OpenGL::GL_FLOAT_MAT3]] = Uniform_float_matrix_3x3_array_value_reader;
				ArrayReader[Lookup[OpenGL::GL_FLOAT_MAT3x4]] = Uniform_float_matrix_3x4_array_value_reader;
				ArrayReader[Lookup[OpenGL::GL_FLOAT_MAT4x2]] = Uniform_float_matrix_4x2_array_value_reader;
				ArrayReader[Lookup[OpenGL::GL_FLOAT_MAT4x3]] = Uniform_float_matrix_4x3_array_value_reader;
				ArrayReader[Lookup[OpenGL::GL_FLOAT_MAT4]] = Uniform_float_matrix_4x4_array_value_reader;
				break;
		}

		switch (glver) {
			case OPENGL_330:
			case OPENGL_400:
				Setter[Lookup[OpenGL::GL_BOOL]] = Uniform_bool_value_setter_330;
				Setter[Lookup[OpenGL::GL_INT]] = Uniform_int_value_setter_330;
				Setter[Lookup[OpenGL::GL_UNSIGNED_INT]] = Uniform_uint_value_setter_330;
				Setter[Lookup[OpenGL::GL_FLOAT]] = Uniform_float_value_setter_330;
				Setter[Lookup[OpenGL::GL_BOOL_VEC2]] = Uniform_bvec2_value_setter_330;
				Setter[Lookup[OpenGL::GL_BOOL_VEC3]] = Uniform_bvec3_value_setter_330;
				Setter[Lookup[OpenGL::GL_BOOL_VEC4]] = Uniform_bvec4_value_setter_330;
				Setter[Lookup[OpenGL::GL_INT_VEC2]] = Uniform_ivec2_value_setter_330;
				Setter[Lookup[OpenGL::GL_INT_VEC3]] = Uniform_ivec3_value_setter_330;
				Setter[Lookup[OpenGL::GL_INT_VEC4]] = Uniform_ivec4_value_setter_330;
				Setter[Lookup[OpenGL::GL_UNSIGNED_INT_VEC2]] = Uniform_uvec2_value_setter_330;
				Setter[Lookup[OpenGL::GL_UNSIGNED_INT_VEC3]] = Uniform_uvec3_value_setter_330;
				Setter[Lookup[OpenGL::GL_UNSIGNED_INT_VEC4]] = Uniform_uvec4_value_setter_330;
				Setter[Lookup[OpenGL::GL_FLOAT_VEC2]] = Uniform_vec2_value_setter_330;
				Setter[Lookup[OpenGL::GL_FLOAT_VEC3]] = Uniform_vec3_value_setter_330;
				Setter[Lookup[OpenGL::GL_FLOAT_VEC4]] = Uniform_vec4_value_setter_330;

				Setter[Lookup[OpenGL::GL_SAMPLER_2D]] = Uniform_sampler_value_setter_330;
				Setter[Lookup[OpenGL::GL_SAMPLER_2D_SHADOW]] = Uniform_sampler_value_setter_330;
				Setter[Lookup[OpenGL::GL_SAMPLER_2D_MULTISAMPLE]] = Uniform_sampler_value_setter_330;
				Setter[Lookup[OpenGL::GL_SAMPLER_CUBE]] = Uniform_sampler_value_setter_330;

				Setter[Lookup[OpenGL::GL_FLOAT_MAT2]] = Uniform_float_matrix_2x2_value_setter_330;
				Setter[Lookup[OpenGL::GL_FLOAT_MAT2x3]] = Uniform_float_matrix_2x3_value_setter_330;
				Setter[Lookup[OpenGL::GL_FLOAT_MAT2x4]] = Uniform_float_matrix_2x4_value_setter_330;
				Setter[Lookup[OpenGL::GL_FLOAT_MAT3x2]] = Uniform_float_matrix_3x2_value_setter_330;
				Setter[Lookup[OpenGL::GL_FLOAT_MAT3]] = Uniform_float_matrix_3x3_value_setter_330;
				Setter[Lookup[OpenGL::GL_FLOAT_MAT3x4]] = Uniform_float_matrix_3x4_value_setter_330;
				Setter[Lookup[OpenGL::GL_FLOAT_MAT4x2]] = Uniform_float_matrix_4x2_value_setter_330;
				Setter[Lookup[OpenGL::GL_FLOAT_MAT4x3]] = Uniform_float_matrix_4x3_value_setter_330;
				Setter[Lookup[OpenGL::GL_FLOAT_MAT4]] = Uniform_float_matrix_4x4_value_setter_330;
				break;

			case OPENGL_410:
			case OPENGL_420:
			case OPENGL_430:
			case OPENGL_440:
			case OPENGL_450:
				Setter[Lookup[OpenGL::GL_BOOL]] = Uniform_bool_value_setter_410;
				Setter[Lookup[OpenGL::GL_INT]] = Uniform_int_value_setter_410;
				Setter[Lookup[OpenGL::GL_UNSIGNED_INT]] = Uniform_uint_value_setter_410;
				Setter[Lookup[OpenGL::GL_FLOAT]] = Uniform_float_value_setter_410;
				Setter[Lookup[OpenGL::GL_BOOL_VEC2]] = Uniform_bvec2_value_setter_410;
				Setter[Lookup[OpenGL::GL_BOOL_VEC3]] = Uniform_bvec3_value_setter_410;
				Setter[Lookup[OpenGL::GL_BOOL_VEC4]] = Uniform_bvec4_value_setter_410;
				Setter[Lookup[OpenGL::GL_INT_VEC2]] = Uniform_ivec2_value_setter_410;
				Setter[Lookup[OpenGL::GL_INT_VEC3]] = Uniform_ivec3_value_setter_410;
				Setter[Lookup[OpenGL::GL_INT_VEC4]] = Uniform_ivec4_value_setter_410;
				Setter[Lookup[OpenGL::GL_UNSIGNED_INT_VEC2]] = Uniform_uvec2_value_setter_410;
				Setter[Lookup[OpenGL::GL_UNSIGNED_INT_VEC3]] = Uniform_uvec3_value_setter_410;
				Setter[Lookup[OpenGL::GL_UNSIGNED_INT_VEC4]] = Uniform_uvec4_value_setter_410;
				Setter[Lookup[OpenGL::GL_FLOAT_VEC2]] = Uniform_vec2_value_setter_410;
				Setter[Lookup[OpenGL::GL_FLOAT_VEC3]] = Uniform_vec3_value_setter_410;
				Setter[Lookup[OpenGL::GL_FLOAT_VEC4]] = Uniform_vec4_value_setter_410;

				Setter[Lookup[OpenGL::GL_SAMPLER_2D]] = Uniform_sampler_value_setter_410;
				Setter[Lookup[OpenGL::GL_SAMPLER_2D_SHADOW]] = Uniform_sampler_value_setter_410;
				Setter[Lookup[OpenGL::GL_SAMPLER_2D_MULTISAMPLE]] = Uniform_sampler_value_setter_410;
				Setter[Lookup[OpenGL::GL_SAMPLER_CUBE]] = Uniform_sampler_value_setter_410;

				Setter[Lookup[OpenGL::GL_FLOAT_MAT2]] = Uniform_float_matrix_2x2_value_setter_410;
				Setter[Lookup[OpenGL::GL_FLOAT_MAT2x3]] = Uniform_float_matrix_2x3_value_setter_410;
				Setter[Lookup[OpenGL::GL_FLOAT_MAT2x4]] = Uniform_float_matrix_2x4_value_setter_410;
				Setter[Lookup[OpenGL::GL_FLOAT_MAT3x2]] = Uniform_float_matrix_3x2_value_setter_410;
				Setter[Lookup[OpenGL::GL_FLOAT_MAT3]] = Uniform_float_matrix_3x3_value_setter_410;
				Setter[Lookup[OpenGL::GL_FLOAT_MAT3x4]] = Uniform_float_matrix_3x4_value_setter_410;
				Setter[Lookup[OpenGL::GL_FLOAT_MAT4x2]] = Uniform_float_matrix_4x2_value_setter_410;
				Setter[Lookup[OpenGL::GL_FLOAT_MAT4x3]] = Uniform_float_matrix_4x3_value_setter_410;
				Setter[Lookup[OpenGL::GL_FLOAT_MAT4]] = Uniform_float_matrix_4x4_value_setter_410;
				break;
		}

		switch (glver) {
			case OPENGL_330:
			case OPENGL_400:
				ArraySetter[Lookup[OpenGL::GL_BOOL]] = Uniform_bool_array_value_setter_330;
				ArraySetter[Lookup[OpenGL::GL_INT]] = Uniform_int_array_value_setter_330;
				ArraySetter[Lookup[OpenGL::GL_UNSIGNED_INT]] = Uniform_uint_array_value_setter_330;
				ArraySetter[Lookup[OpenGL::GL_FLOAT]] = Uniform_float_array_value_setter_330;
				ArraySetter[Lookup[OpenGL::GL_BOOL_VEC2]] = Uniform_bvec2_array_value_setter_330;
				ArraySetter[Lookup[OpenGL::GL_BOOL_VEC3]] = Uniform_bvec3_array_value_setter_330;
				ArraySetter[Lookup[OpenGL::GL_BOOL_VEC4]] = Uniform_bvec4_array_value_setter_330;
				ArraySetter[Lookup[OpenGL::GL_INT_VEC2]] = Uniform_ivec2_array_value_setter_330;
				ArraySetter[Lookup[OpenGL::GL_INT_VEC3]] = Uniform_ivec3_array_value_setter_330;
				ArraySetter[Lookup[OpenGL::GL_INT_VEC4]] = Uniform_ivec4_array_value_setter_330;
				ArraySetter[Lookup[OpenGL::GL_UNSIGNED_INT_VEC2]] = Uniform_uvec2_array_value_setter_330;
				ArraySetter[Lookup[OpenGL::GL_UNSIGNED_INT_VEC3]] = Uniform_uvec3_array_value_setter_330;
				ArraySetter[Lookup[OpenGL::GL_UNSIGNED_INT_VEC4]] = Uniform_uvec4_array_value_setter_330;
				ArraySetter[Lookup[OpenGL::GL_FLOAT_VEC2]] = Uniform_vec2_array_value_setter_330;
				ArraySetter[Lookup[OpenGL::GL_FLOAT_VEC3]] = Uniform_vec3_array_value_setter_330;
				ArraySetter[Lookup[OpenGL::GL_FLOAT_VEC4]] = Uniform_vec4_array_value_setter_330;

				ArraySetter[Lookup[OpenGL::GL_SAMPLER_2D]] = Uniform_sampler_array_value_setter_330;
				ArraySetter[Lookup[OpenGL::GL_SAMPLER_2D_SHADOW]] = Uniform_sampler_array_value_setter_330;
				ArraySetter[Lookup[OpenGL::GL_SAMPLER_2D_MULTISAMPLE]] = Uniform_sampler_array_value_setter_330;
				ArraySetter[Lookup[OpenGL::GL_SAMPLER_CUBE]] = Uniform_sampler_array_value_setter_330;

				ArraySetter[Lookup[OpenGL::GL_FLOAT_MAT2]] = Uniform_float_matrix_2x2_array_value_setter_330;
				ArraySetter[Lookup[OpenGL::GL_FLOAT_MAT2x3]] = Uniform_float_matrix_2x3_array_value_setter_330;
				ArraySetter[Lookup[OpenGL::GL_FLOAT_MAT2x4]] = Uniform_float_matrix_2x4_array_value_setter_330;
				ArraySetter[Lookup[OpenGL::GL_FLOAT_MAT3x2]] = Uniform_float_matrix_3x2_array_value_setter_330;
				ArraySetter[Lookup[OpenGL::GL_FLOAT_MAT3]] = Uniform_float_matrix_3x3_array_value_setter_330;
				ArraySetter[Lookup[OpenGL::GL_FLOAT_MAT3x4]] = Uniform_float_matrix_3x4_array_value_setter_330;
				ArraySetter[Lookup[OpenGL::GL_FLOAT_MAT4x2]] = Uniform_float_matrix_4x2_array_value_setter_330;
				ArraySetter[Lookup[OpenGL::GL_FLOAT_MAT4x3]] = Uniform_float_matrix_4x3_array_value_setter_330;
				ArraySetter[Lookup[OpenGL::GL_FLOAT_MAT4]] = Uniform_float_matrix_4x4_array_value_setter_330;
				break;

			case OPENGL_410:
			case OPENGL_420:
			case OPENGL_430:
			case OPENGL_440:
			case OPENGL_450:
				ArraySetter[Lookup[OpenGL::GL_BOOL]] = Uniform_bool_array_value_setter_410;
				ArraySetter[Lookup[OpenGL::GL_INT]] = Uniform_int_array_value_setter_410;
				ArraySetter[Lookup[OpenGL::GL_UNSIGNED_INT]] = Uniform_uint_array_value_setter_410;
				ArraySetter[Lookup[OpenGL::GL_FLOAT]] = Uniform_float_array_value_setter_410;
				ArraySetter[Lookup[OpenGL::GL_BOOL_VEC2]] = Uniform_bvec2_array_value_setter_410;
				ArraySetter[Lookup[OpenGL::GL_BOOL_VEC3]] = Uniform_bvec3_array_value_setter_410;
				ArraySetter[Lookup[OpenGL::GL_BOOL_VEC4]] = Uniform_bvec4_array_value_setter_410;
				ArraySetter[Lookup[OpenGL::GL_INT_VEC2]] = Uniform_ivec2_array_value_setter_410;
				ArraySetter[Lookup[OpenGL::GL_INT_VEC3]] = Uniform_ivec3_array_value_setter_410;
				ArraySetter[Lookup[OpenGL::GL_INT_VEC4]] = Uniform_ivec4_array_value_setter_410;
				ArraySetter[Lookup[OpenGL::GL_UNSIGNED_INT_VEC2]] = Uniform_uvec2_array_value_setter_410;
				ArraySetter[Lookup[OpenGL::GL_UNSIGNED_INT_VEC3]] = Uniform_uvec3_array_value_setter_410;
				ArraySetter[Lookup[OpenGL::GL_UNSIGNED_INT_VEC4]] = Uniform_uvec4_array_value_setter_410;
				ArraySetter[Lookup[OpenGL::GL_FLOAT_VEC2]] = Uniform_vec2_array_value_setter_410;
				ArraySetter[Lookup[OpenGL::GL_FLOAT_VEC3]] = Uniform_vec3_array_value_setter_410;
				ArraySetter[Lookup[OpenGL::GL_FLOAT_VEC4]] = Uniform_vec4_array_value_setter_410;

				ArraySetter[Lookup[OpenGL::GL_SAMPLER_2D]] = Uniform_sampler_array_value_setter_410;
				ArraySetter[Lookup[OpenGL::GL_SAMPLER_2D_SHADOW]] = Uniform_sampler_array_value_setter_410;
				ArraySetter[Lookup[OpenGL::GL_SAMPLER_2D_MULTISAMPLE]] = Uniform_sampler_array_value_setter_410;
				ArraySetter[Lookup[OpenGL::GL_SAMPLER_CUBE]] = Uniform_sampler_array_value_setter_410;

				ArraySetter[Lookup[OpenGL::GL_FLOAT_MAT2]] = Uniform_float_matrix_2x2_array_value_setter_410;
				ArraySetter[Lookup[OpenGL::GL_FLOAT_MAT2x3]] = Uniform_float_matrix_2x3_array_value_setter_410;
				ArraySetter[Lookup[OpenGL::GL_FLOAT_MAT2x4]] = Uniform_float_matrix_2x4_array_value_setter_410;
				ArraySetter[Lookup[OpenGL::GL_FLOAT_MAT3x2]] = Uniform_float_matrix_3x2_array_value_setter_410;
				ArraySetter[Lookup[OpenGL::GL_FLOAT_MAT3]] = Uniform_float_matrix_3x3_array_value_setter_410;
				ArraySetter[Lookup[OpenGL::GL_FLOAT_MAT3x4]] = Uniform_float_matrix_3x4_array_value_setter_410;
				ArraySetter[Lookup[OpenGL::GL_FLOAT_MAT4x2]] = Uniform_float_matrix_4x2_array_value_setter_410;
				ArraySetter[Lookup[OpenGL::GL_FLOAT_MAT4x3]] = Uniform_float_matrix_4x3_array_value_setter_410;
				ArraySetter[Lookup[OpenGL::GL_FLOAT_MAT4]] = Uniform_float_matrix_4x4_array_value_setter_410;
				break;
		}

		switch (glver) {
			case OPENGL_400:
			case OPENGL_410:
			case OPENGL_420:
			case OPENGL_430:
			case OPENGL_440:
			case OPENGL_450:
				Getter[Lookup[OpenGL::GL_DOUBLE]] = Uniform_double_value_getter;
				Getter[Lookup[OpenGL::GL_DOUBLE_VEC2]] = Uniform_dvec2_value_getter;
				Getter[Lookup[OpenGL::GL_DOUBLE_VEC3]] = Uniform_dvec3_value_getter;
				Getter[Lookup[OpenGL::GL_DOUBLE_VEC4]] = Uniform_dvec4_value_getter;

				Getter[Lookup[OpenGL::GL_DOUBLE_MAT2]] = Uniform_double_matrix_2x2_value_getter;
				Getter[Lookup[OpenGL::GL_DOUBLE_MAT2x3]] = Uniform_double_matrix_2x3_value_getter;
				Getter[Lookup[OpenGL::GL_DOUBLE_MAT2x4]] = Uniform_double_matrix_2x4_value_getter;
				Getter[Lookup[OpenGL::GL_DOUBLE_MAT3x2]] = Uniform_double_matrix_3x2_value_getter;
				Getter[Lookup[OpenGL::GL_DOUBLE_MAT3]] = Uniform_double_matrix_3x3_value_getter;
				Getter[Lookup[OpenGL::GL_DOUBLE_MAT3x4]] = Uniform_double_matrix_3x4_value_getter;
				Getter[Lookup[OpenGL::GL_DOUBLE_MAT4x2]] = Uniform_double_matrix_4x2_value_getter;
				Getter[Lookup[OpenGL::GL_DOUBLE_MAT4x3]] = Uniform_double_matrix_4x3_value_getter;
				Getter[Lookup[OpenGL::GL_DOUBLE_MAT4]] = Uniform_double_matrix_4x4_value_getter;

				Reader[Lookup[OpenGL::GL_DOUBLE]] = Uniform_double_value_reader;
				Reader[Lookup[OpenGL::GL_DOUBLE_VEC2]] = Uniform_dvec2_value_reader;
				Reader[Lookup[OpenGL::GL_DOUBLE_VEC3]] = Uniform_dvec3_value_reader;
				Reader[Lookup[OpenGL::GL_DOUBLE_VEC4]] = Uniform_dvec4_value_reader;

				Reader[Lookup[OpenGL::GL_DOUBLE_MAT2]] = Uniform_double_matrix_2x2_value_reader;
				Reader[Lookup[OpenGL::GL_DOUBLE_MAT2x3]] = Uniform_double_matrix_2x3_value_reader;
				Reader[Lookup[OpenGL::GL_DOUBLE_MAT2x4]] = Uniform_double_matrix_2x4_value_reader;
				Reader[Lookup[OpenGL::GL_DOUBLE_MAT3x2]] = Uniform_double_matrix_3x2_value_reader;
				Reader[Lookup[OpenGL::GL_DOUBLE_MAT3]] = Uniform_double_matrix_3x3_value_reader;
				Reader[Lookup[OpenGL::GL_DOUBLE_MAT3x4]] = Uniform_double_matrix_3x4_value_reader;
				Reader[Lookup[OpenGL::GL_DOUBLE_MAT4x2]] = Uniform_double_matrix_4x2_value_reader;
				Reader[Lookup[OpenGL::GL_DOUBLE_MAT4x3]] = Uniform_double_matrix_4x3_value_reader;
				Reader[Lookup[OpenGL::GL_DOUBLE_MAT4]] = Uniform_double_matrix_4x4_value_reader;

				ArrayGetter[Lookup[OpenGL::GL_DOUBLE]] = Uniform_double_array_value_getter;
				ArrayGetter[Lookup[OpenGL::GL_DOUBLE_VEC2]] = Uniform_dvec2_array_value_getter;
				ArrayGetter[Lookup[OpenGL::GL_DOUBLE_VEC3]] = Uniform_dvec3_array_value_getter;
				ArrayGetter[Lookup[OpenGL::GL_DOUBLE_VEC4]] = Uniform_dvec4_array_value_getter;

				ArrayGetter[Lookup[OpenGL::GL_DOUBLE_MAT2]] = Uniform_double_matrix_2x2_array_value_getter;
				ArrayGetter[Lookup[OpenGL::GL_DOUBLE_MAT2x3]] = Uniform_double_matrix_2x3_array_value_getter;
				ArrayGetter[Lookup[OpenGL::GL_DOUBLE_MAT2x4]] = Uniform_double_matrix_2x4_array_value_getter;
				ArrayGetter[Lookup[OpenGL::GL_DOUBLE_MAT3x2]] = Uniform_double_matrix_3x2_array_value_getter;
				ArrayGetter[Lookup[OpenGL::GL_DOUBLE_MAT3]] = Uniform_double_matrix_3x3_array_value_getter;
				ArrayGetter[Lookup[OpenGL::GL_DOUBLE_MAT3x4]] = Uniform_double_matrix_3x4_array_value_getter;
				ArrayGetter[Lookup[OpenGL::GL_DOUBLE_MAT4x2]] = Uniform_double_matrix_4x2_array_value_getter;
				ArrayGetter[Lookup[OpenGL::GL_DOUBLE_MAT4x3]] = Uniform_double_matrix_4x3_array_value_getter;
				ArrayGetter[Lookup[OpenGL::GL_DOUBLE_MAT4]] = Uniform_double_matrix_4x4_array_value_getter;

				ArrayReader[Lookup[OpenGL::GL_DOUBLE]] = Uniform_double_array_value_reader;
				ArrayReader[Lookup[OpenGL::GL_DOUBLE_VEC2]] = Uniform_dvec2_array_value_reader;
				ArrayReader[Lookup[OpenGL::GL_DOUBLE_VEC3]] = Uniform_dvec3_array_value_reader;
				ArrayReader[Lookup[OpenGL::GL_DOUBLE_VEC4]] = Uniform_dvec4_array_value_reader;

				ArrayReader[Lookup[OpenGL::GL_DOUBLE_MAT2]] = Uniform_double_matrix_2x2_array_value_reader;
				ArrayReader[Lookup[OpenGL::GL_DOUBLE_MAT2x3]] = Uniform_double_matrix_2x3_array_value_reader;
				ArrayReader[Lookup[OpenGL::GL_DOUBLE_MAT2x4]] = Uniform_double_matrix_2x4_array_value_reader;
				ArrayReader[Lookup[OpenGL::GL_DOUBLE_MAT3x2]] = Uniform_double_matrix_3x2_array_value_reader;
				ArrayReader[Lookup[OpenGL::GL_DOUBLE_MAT3]] = Uniform_double_matrix_3x3_array_value_reader;
				ArrayReader[Lookup[OpenGL::GL_DOUBLE_MAT3x4]] = Uniform_double_matrix_3x4_array_value_reader;
				ArrayReader[Lookup[OpenGL::GL_DOUBLE_MAT4x2]] = Uniform_double_matrix_4x2_array_value_reader;
				ArrayReader[Lookup[OpenGL::GL_DOUBLE_MAT4x3]] = Uniform_double_matrix_4x3_array_value_reader;
				ArrayReader[Lookup[OpenGL::GL_DOUBLE_MAT4]] = Uniform_double_matrix_4x4_array_value_reader;
				break;
		}

		switch (glver) {
			case OPENGL_400:
				Setter[Lookup[OpenGL::GL_DOUBLE]] = Uniform_double_value_setter_400;
				Setter[Lookup[OpenGL::GL_DOUBLE_VEC2]] = Uniform_dvec2_value_setter_400;
				Setter[Lookup[OpenGL::GL_DOUBLE_VEC3]] = Uniform_dvec3_value_setter_400;
				Setter[Lookup[OpenGL::GL_DOUBLE_VEC4]] = Uniform_dvec4_value_setter_400;

				Setter[Lookup[OpenGL::GL_DOUBLE_MAT2]] = Uniform_double_matrix_2x2_value_setter_400;
				Setter[Lookup[OpenGL::GL_DOUBLE_MAT2x3]] = Uniform_double_matrix_2x3_value_setter_400;
				Setter[Lookup[OpenGL::GL_DOUBLE_MAT2x4]] = Uniform_double_matrix_2x4_value_setter_400;
				Setter[Lookup[OpenGL::GL_DOUBLE_MAT3x2]] = Uniform_double_matrix_3x2_value_setter_400;
				Setter[Lookup[OpenGL::GL_DOUBLE_MAT3]] = Uniform_double_matrix_3x3_value_setter_400;
				Setter[Lookup[OpenGL::GL_DOUBLE_MAT3x4]] = Uniform_double_matrix_3x4_value_setter_400;
				Setter[Lookup[OpenGL::GL_DOUBLE_MAT4x2]] = Uniform_double_matrix_4x2_value_setter_400;
				Setter[Lookup[OpenGL::GL_DOUBLE_MAT4x3]] = Uniform_double_matrix_4x3_value_setter_400;
				Setter[Lookup[OpenGL::GL_DOUBLE_MAT4]] = Uniform_double_matrix_4x4_value_setter_400;

				ArraySetter[Lookup[OpenGL::GL_DOUBLE]] = Uniform_double_array_value_setter_400;
				ArraySetter[Lookup[OpenGL::GL_DOUBLE_VEC2]] = Uniform_dvec2_array_value_setter_400;
				ArraySetter[Lookup[OpenGL::GL_DOUBLE_VEC3]] = Uniform_dvec3_array_value_setter_400;
				ArraySetter[Lookup[OpenGL::GL_DOUBLE_VEC4]] = Uniform_dvec4_array_value_setter_400;

				ArraySetter[Lookup[OpenGL::GL_DOUBLE_MAT2]] = Uniform_double_matrix_2x2_array_value_setter_400;
				ArraySetter[Lookup[OpenGL::GL_DOUBLE_MAT2x3]] = Uniform_double_matrix_2x3_array_value_setter_400;
				ArraySetter[Lookup[OpenGL::GL_DOUBLE_MAT2x4]] = Uniform_double_matrix_2x4_array_value_setter_400;
				ArraySetter[Lookup[OpenGL::GL_DOUBLE_MAT3x2]] = Uniform_double_matrix_3x2_array_value_setter_400;
				ArraySetter[Lookup[OpenGL::GL_DOUBLE_MAT3]] = Uniform_double_matrix_3x3_array_value_setter_400;
				ArraySetter[Lookup[OpenGL::GL_DOUBLE_MAT3x4]] = Uniform_double_matrix_3x4_array_value_setter_400;
				ArraySetter[Lookup[OpenGL::GL_DOUBLE_MAT4x2]] = Uniform_double_matrix_4x2_array_value_setter_400;
				ArraySetter[Lookup[OpenGL::GL_DOUBLE_MAT4x3]] = Uniform_double_matrix_4x3_array_value_setter_400;
				ArraySetter[Lookup[OpenGL::GL_DOUBLE_MAT4]] = Uniform_double_matrix_4x4_array_value_setter_400;
				break;

			case OPENGL_410:
			case OPENGL_420:
			case OPENGL_430:
			case OPENGL_440:
			case OPENGL_450:
				Setter[Lookup[OpenGL::GL_DOUBLE]] = Uniform_double_value_setter_410;
				Setter[Lookup[OpenGL::GL_DOUBLE_VEC2]] = Uniform_dvec2_value_setter_410;
				Setter[Lookup[OpenGL::GL_DOUBLE_VEC3]] = Uniform_dvec3_value_setter_410;
				Setter[Lookup[OpenGL::GL_DOUBLE_VEC4]] = Uniform_dvec4_value_setter_410;

				Setter[Lookup[OpenGL::GL_DOUBLE_MAT2]] = Uniform_double_matrix_2x2_value_setter_410;
				Setter[Lookup[OpenGL::GL_DOUBLE_MAT2x3]] = Uniform_double_matrix_2x3_value_setter_410;
				Setter[Lookup[OpenGL::GL_DOUBLE_MAT2x4]] = Uniform_double_matrix_2x4_value_setter_410;
				Setter[Lookup[OpenGL::GL_DOUBLE_MAT3x2]] = Uniform_double_matrix_3x2_value_setter_410;
				Setter[Lookup[OpenGL::GL_DOUBLE_MAT3]] = Uniform_double_matrix_3x3_value_setter_410;
				Setter[Lookup[OpenGL::GL_DOUBLE_MAT3x4]] = Uniform_double_matrix_3x4_value_setter_410;
				Setter[Lookup[OpenGL::GL_DOUBLE_MAT4x2]] = Uniform_double_matrix_4x2_value_setter_410;
				Setter[Lookup[OpenGL::GL_DOUBLE_MAT4x3]] = Uniform_double_matrix_4x3_value_setter_410;
				Setter[Lookup[OpenGL::GL_DOUBLE_MAT4]] = Uniform_double_matrix_4x4_value_setter_410;

				ArraySetter[Lookup[OpenGL::GL_DOUBLE]] = Uniform_double_array_value_setter_410;
				ArraySetter[Lookup[OpenGL::GL_DOUBLE_VEC2]] = Uniform_dvec2_array_value_setter_410;
				ArraySetter[Lookup[OpenGL::GL_DOUBLE_VEC3]] = Uniform_dvec3_array_value_setter_410;
				ArraySetter[Lookup[OpenGL::GL_DOUBLE_VEC4]] = Uniform_dvec4_array_value_setter_410;

				ArraySetter[Lookup[OpenGL::GL_DOUBLE_MAT2]] = Uniform_double_matrix_2x2_array_value_setter_410;
				ArraySetter[Lookup[OpenGL::GL_DOUBLE_MAT2x3]] = Uniform_double_matrix_2x3_array_value_setter_410;
				ArraySetter[Lookup[OpenGL::GL_DOUBLE_MAT2x4]] = Uniform_double_matrix_2x4_array_value_setter_410;
				ArraySetter[Lookup[OpenGL::GL_DOUBLE_MAT3x2]] = Uniform_double_matrix_3x2_array_value_setter_410;
				ArraySetter[Lookup[OpenGL::GL_DOUBLE_MAT3]] = Uniform_double_matrix_3x3_array_value_setter_410;
				ArraySetter[Lookup[OpenGL::GL_DOUBLE_MAT3x4]] = Uniform_double_matrix_3x4_array_value_setter_410;
				ArraySetter[Lookup[OpenGL::GL_DOUBLE_MAT4x2]] = Uniform_double_matrix_4x2_array_value_setter_410;
				ArraySetter[Lookup[OpenGL::GL_DOUBLE_MAT4x3]] = Uniform_double_matrix_4x3_array_value_setter_410;
				ArraySetter[Lookup[OpenGL::GL_DOUBLE_MAT4]] = Uniform_double_matrix_4x4_array_value_setter_410;
				break;
		}
	}

	bool registered[] = {
		RegisterLoadEventHandler(OnLoad),
		RegisterVersionChangeEventHandler(OnVersionChange),
	};
}

void CompleteUniform(Uniform * uniform) {
	UniformInfo & info = uniform->info;
	
	int index = Lookup[info.type];
	
	if (info.array_len == 1) {
		uniform->getter = Getter[index];
		uniform->setter = Setter[index];
		uniform->reader = Reader[index];
		uniform->writer = Writer[index];
	} else {
		uniform->getter = ArrayGetter[index];
		uniform->setter = ArraySetter[index];
		uniform->reader = ArrayReader[index];
		uniform->writer = ArrayWriter[index];
	}
}
