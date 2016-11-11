#pragma once

#include "Python.h"

struct Uniform;

typedef PyObject * (* Uniform_value_getter)(Uniform * self);
typedef PyObject * (* Uniform_value_reader)(Uniform * self);
typedef int (* Uniform_value_setter)(Uniform * self, PyObject * value);
typedef PyObject * (* Uniform_value_writer)(Uniform * self, PyObject * args);

struct UniformInfo {
	int array_len;
	int type;
	int name_len;
	char name[64 + 1];
};

struct Uniform {
	PyObject_HEAD
	
	int program;
	int location;
	
	UniformInfo info;
	
	Uniform_value_getter getter;
	Uniform_value_setter setter;

	Uniform_value_reader reader;
	Uniform_value_writer writer;
};

extern PyTypeObject UniformType;

Uniform * NewUniform();
