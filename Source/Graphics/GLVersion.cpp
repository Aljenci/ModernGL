#include "GLVersion.hpp"

GLVER GLVersionIndex(int major, int minor) {
	switch (major) {
		case 3:
			switch (minor) {
				case 3: return OPENGL_330;
				default:
					return OPENGL_UNK;
			}
		case 4:
			switch (minor) {
				case 0: return OPENGL_400;
				case 1: return OPENGL_410;
				case 2: return OPENGL_420;
				case 3: return OPENGL_430;
				case 4: return OPENGL_440;
				case 5: return OPENGL_450;
				default:
					return OPENGL_UNK;
			}
		default:
			return OPENGL_UNK;
	}
}
