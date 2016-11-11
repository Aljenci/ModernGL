#pragma once

#include "Python.h"

#include "Graphics/OpenGL.hpp"
#include "Graphics/ShadingLanguage.hpp"
#include "Graphics/ProgramUniforms.hpp"

#include "Types/Uniform.hpp"

struct Program {
	PyObject_HEAD
	int obj;
	int geometry_in;
	int geometry_out;
	int varyings;

	int shaders_slots[NUM_SHADER_SLOTS];

	UniformMap * uniforms;
};

extern PyTypeObject ProgramType;
