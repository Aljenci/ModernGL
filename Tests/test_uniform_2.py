import ModernGL as GL
import GLWindow as WND
import struct

WND.Init()
GL.Init()

vs = GL.VertexShader('''
	#version 410

	uniform double A;
	uniform dvec2 B[2];
	uniform dvec2 C;
	uniform vec2 X;

	uniform sampler2D s1[16];

	uniform dmat4 xyz[3];

	void main() {
		gl_Position = vec4(xyz[0] * vec4(A, B[1], C) + texture(s1[0], X));
	}
''')

prog = GL.Program([vs])

prog['B'].value = [(1.0, 2.0), (3.0, 4.0)]
prog['C'].value = (1.11115, 1.1234)

print(prog['A'].value)
print(prog['B'].value)
print(prog['C'].value)

prog['s1'].value = [i for i in range(16)]
prog['xyz'].value = [
	(
		1, 0, 0, 0,
		0, 1, 0, 0,
		0, 0, 1, 0,
		0, 0, 0, 1,
	),
	(
		2, 0, 0, 0,
		0, 2, 0, 0,
		0, 0, 2, 0,
		0, 0, 0, 2,
	),
	(
		1, 0, 0, 0,
		0, 1, 0, 0,
		0, 0, 1, 0,
		0, 0, 0, 1,
	),
]

print(prog['xyz'].value)
print(prog['s1'].value)
print(struct.unpack('dd', prog['C'].read()))

# prog['zxc'].value = 1
# print(prog['zxc'].value)
