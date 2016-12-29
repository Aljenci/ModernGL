#pragma once

#include "Python.h"

struct Texture {
	PyObject_HEAD
	int obj;
	int width;
	int height;
	int components;
};

extern PyTypeObject TextureType;
