#pragma once

enum GLVER {
	OPENGL_UNK, // unknown
	OPENGL_330, // 2010
	OPENGL_400, // 2010
	OPENGL_410, // 2010
	OPENGL_420, // 2011
	OPENGL_430, // 2012
	OPENGL_440, // 2013
	OPENGL_450, // 2014
	NUM_GLVER,
};

GLVER GLVersionIndex(int major, int minor);
