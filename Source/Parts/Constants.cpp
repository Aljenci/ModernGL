#include "Constants.hpp"

#include "Graphics/OpenGL.hpp"

#include "Types/Primitive.hpp"

bool RegisterConstants(PyObject * module) {
	Primitive * TRIANGLES = NewPrimitive();
	TRIANGLES->name = "TRIANGLES";
	TRIANGLES->primitive = OpenGL::GL_TRIANGLES;
	TRIANGLES->transform_primitive = OpenGL::GL_TRIANGLES;
	PyModule_AddObject(module, "TRIANGLES", (PyObject *)TRIANGLES);

	Primitive * TRIANGLE_STRIP = NewPrimitive();
	TRIANGLE_STRIP->name = "TRIANGLE_STRIP";
	TRIANGLE_STRIP->primitive = OpenGL::GL_TRIANGLE_STRIP;
	TRIANGLE_STRIP->transform_primitive = OpenGL::GL_TRIANGLES;
	PyModule_AddObject(module, "TRIANGLE_STRIP", (PyObject *)TRIANGLE_STRIP);

	Primitive * TRIANGLE_FAN = NewPrimitive();
	TRIANGLE_FAN->name = "TRIANGLE_FAN";
	TRIANGLE_FAN->primitive = OpenGL::GL_TRIANGLE_FAN;
	TRIANGLE_FAN->transform_primitive = OpenGL::GL_TRIANGLES;
	PyModule_AddObject(module, "TRIANGLE_FAN", (PyObject *)TRIANGLE_FAN);

	Primitive * LINES = NewPrimitive();
	LINES->name = "LINES";
	LINES->primitive = OpenGL::GL_LINES;
	LINES->transform_primitive = OpenGL::GL_LINES;
	PyModule_AddObject(module, "LINES", (PyObject *)LINES);

	Primitive * LINE_STRIP = NewPrimitive();
	LINE_STRIP->name = "LINE_STRIP";
	LINE_STRIP->primitive = OpenGL::GL_LINE_STRIP;
	LINE_STRIP->transform_primitive = OpenGL::GL_LINES;
	PyModule_AddObject(module, "LINE_STRIP", (PyObject *)LINE_STRIP);

	Primitive * LINE_LOOP = NewPrimitive();
	LINE_LOOP->name = "LINE_LOOP";
	LINE_LOOP->primitive = OpenGL::GL_LINE_LOOP;
	LINE_LOOP->transform_primitive = OpenGL::GL_LINES;
	PyModule_AddObject(module, "LINE_LOOP", (PyObject *)LINE_LOOP);

	Primitive * POINTS = NewPrimitive();
	POINTS->name = "POINTS";
	POINTS->primitive = OpenGL::GL_POINTS;
	POINTS->transform_primitive = OpenGL::GL_POINTS;
	PyModule_AddObject(module, "POINTS", (PyObject *)POINTS);

	Primitive * LINE_STRIP_ADJACENCY = NewPrimitive();
	LINE_STRIP_ADJACENCY->name = "LINE_STRIP_ADJACENCY";
	LINE_STRIP_ADJACENCY->primitive = OpenGL::GL_LINE_STRIP_ADJACENCY;
	LINE_STRIP_ADJACENCY->transform_primitive = OpenGL::GL_LINES;
	PyModule_AddObject(module, "LINE_STRIP_ADJACENCY", (PyObject *)LINE_STRIP_ADJACENCY);

	Primitive * LINES_ADJACENCY = NewPrimitive();
	LINES_ADJACENCY->name = "LINES_ADJACENCY";
	LINES_ADJACENCY->primitive = OpenGL::GL_LINES_ADJACENCY;
	LINES_ADJACENCY->transform_primitive = OpenGL::GL_LINES;
	PyModule_AddObject(module, "LINES_ADJACENCY", (PyObject *)LINES_ADJACENCY);

	Primitive * TRIANGLE_STRIP_ADJACENCY = NewPrimitive();
	TRIANGLE_STRIP_ADJACENCY->name = "TRIANGLE_STRIP_ADJACENCY";
	TRIANGLE_STRIP_ADJACENCY->primitive = OpenGL::GL_TRIANGLE_STRIP_ADJACENCY;
	TRIANGLE_STRIP_ADJACENCY->transform_primitive = OpenGL::GL_TRIANGLES;
	PyModule_AddObject(module, "TRIANGLE_STRIP_ADJACENCY", (PyObject *)TRIANGLE_STRIP_ADJACENCY);

	Primitive * TRIANGLES_ADJACENCY = NewPrimitive();
	TRIANGLES_ADJACENCY->name = "TRIANGLES_ADJACENCY";
	TRIANGLES_ADJACENCY->primitive = OpenGL::GL_TRIANGLES_ADJACENCY;
	TRIANGLES_ADJACENCY->transform_primitive = OpenGL::GL_TRIANGLES;
	PyModule_AddObject(module, "TRIANGLES_ADJACENCY", (PyObject *)TRIANGLES_ADJACENCY);

	PyModule_AddObject(module, "BLEND", PyLong_FromLong(OpenGL::GL_BLEND));
	PyModule_AddObject(module, "CULL_FACE", PyLong_FromLong(OpenGL::GL_CULL_FACE));
	PyModule_AddObject(module, "DEPTH_TEST", PyLong_FromLong(OpenGL::GL_DEPTH_TEST));
	PyModule_AddObject(module, "MULTISAMPLE", PyLong_FromLong(OpenGL::GL_MULTISAMPLE));

	return true;
}
