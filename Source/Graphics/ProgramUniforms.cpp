#include "ProgramUniforms.hpp"

#include "Parts/Errors.hpp"

#include "Graphics/OpenGL.hpp"
#include "Graphics/UniformTools.hpp"

UniformMap * GetProgramUniforms(int program) {
	UniformMap * result = new UniformMap();

	int uniforms = 0;
	OpenGL::glGetProgramiv(program, OpenGL::GL_ACTIVE_UNIFORMS, &uniforms);
	for (int i = 0; i < uniforms; ++i) {
		Uniform * uniform = NewUniform();
		UniformInfo & info = uniform->info;

		OpenGL::glGetActiveUniform(program, i, 64, &info.name_len, &info.array_len, (OpenGL::GLenum *)&info.type, info.name);

		if (info.name[info.name_len - 1] == ']') {
			while (info.name_len && info.name[info.name_len] != '[') {
				--info.name_len;
			}
		}

		info.name[info.name_len] = 0;

		uniform->location = OpenGL::glGetUniformLocation(program, info.name);
		uniform->program = program;

		if (uniform->location < 0) {
			Py_DECREF((PyObject *)uniform);
			continue;
		}

		CompleteUniform(uniform);

		result->insert(std::pair<std::string, Uniform *>(info.name, uniform));
	}

	return result;
}
