#pragma once

#include "Python.h"

#include "OpenGL.hpp"

enum ShaderSlot {
	VERT_SHADER_SLOT,
	FRAGMENT_SHADER_SLOT,
	GEOMETRY_SHADER_SLOT,
	TESS_EVALUATION_SHADER_SLOT,
	TESS_CONTROL_SHADER_SLOT,
	NUM_SHADER_SLOTS,
};

int CompileShader(int type, const char * source);
int LinkProgram(int shader_slots[NUM_SHADER_SLOTS], const char * const * varyings, int varyings_len);

