#include "ShadingLanguage.hpp"

int CompileShader(int type, const char * source) {
	int shader = OpenGL::glCreateShader(type);
	OpenGL::glShaderSource(shader, 1, &source, 0);
	OpenGL::glCompileShader(shader);

	int compiled = OpenGL::GL_FALSE;
	OpenGL::glGetShaderiv(shader, OpenGL::GL_COMPILE_STATUS, &compiled);
	if (!compiled) {
		static const char * logTitle = "GLSL Compiler failed\n";
		static int logTitleLength = strlen(logTitle);

		int logLength = 0;
		OpenGL::glGetShaderiv(shader, OpenGL::GL_INFO_LOG_LENGTH, &logLength);
		int logTotalLength = logLength + logTitleLength;

		PyObject * content = PyUnicode_New(logTotalLength, 255);
		if (PyUnicode_READY(content)) {
			OpenGL::glDeleteShader(shader);
			return 0;
		}

		char * data = (char *)PyUnicode_1BYTE_DATA(content);
		memcpy(data, logTitle, logTitleLength);

		int logSize = 0;
		OpenGL::glGetShaderInfoLog(shader, logLength, &logSize, data + logTitleLength);
		data[logTitleLength] = 0;

		OpenGL::glDeleteShader(shader);

		PyErr_SetObject(PyExc_RuntimeError, content);
		return 0;
	}

	return shader;
}

int LinkProgram(int * shader_slots, const char * const * varyings, int varyings_len) {
	int program = OpenGL::glCreateProgram();

	for (int i = 0; i < NUM_SHADER_SLOTS; ++i) {
		if (shader_slots[i]) {
			OpenGL::glAttachShader(program, shader_slots[i]);
		}
	}

	if (varyings_len) {
		OpenGL::glTransformFeedbackVaryings(program, varyings_len, varyings, OpenGL::GL_INTERLEAVED_ATTRIBS);
	}

	int linked = OpenGL::GL_FALSE;
	OpenGL::glLinkProgram(program);
	OpenGL::glGetProgramiv(program, OpenGL::GL_LINK_STATUS, &linked);

	if (!linked) {
		static const char * logTitle = "GLSL Linker failed\n";
		static int logTitleLength = strlen(logTitle);

		int logLength = 0;
		OpenGL::glGetProgramiv(program, OpenGL::GL_INFO_LOG_LENGTH, &logLength);
		int logTotalLength = logLength + logTitleLength;

		PyObject * content = PyUnicode_New(logTotalLength, 255);
		if (PyUnicode_READY(content)) {
			OpenGL::glDeleteProgram(program);
			return 0;
		}

		char * data = (char *)PyUnicode_1BYTE_DATA(content);
		memcpy(data, logTitle, logTitleLength);

		int logSize = 0;
		OpenGL::glGetProgramInfoLog(program, logLength, &logSize, data + logTitleLength);
		data[logTitleLength] = 0;

		OpenGL::glDeleteProgram(program);
		PyErr_SetObject(PyExc_RuntimeError, content);
		return 0;
	}

	return program;
}
