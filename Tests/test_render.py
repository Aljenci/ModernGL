import ModernGL as GL
import GLWindow as WND
import struct, vmath
from math import *
import random

WND.Init()
GL.Init()

prog = GL.Program([
	GL.VertexShader('''
		#version 330

		uniform mat4 projection;
		uniform mat4 modelview;

		in vec3 in_vert;
		in vec3 in_normal;

		out vec3 v_vert;
		out vec3 v_normal;

		void main() {
			gl_Position = projection * modelview * vec4(in_vert, 1.0);
			v_normal = (modelview * vec4(in_normal, 0.0)).xyz;
			v_vert = (modelview * vec4(in_vert, 1.0)).xyz;
		}
	'''),
	GL.FragmentShader('''
		#version 330

		uniform vec3 color;

		in vec3 v_vert;
		in vec3 v_normal;

		out vec4 f_color;

		void main() {
			f_color = vec4(color, 1.0 + v_normal.x);
		}
	'''),
])

vbo = GL.Buffer(struct.pack('3f3f3f3f3f3f',
	-10, -10, 0,
	0, 0, 1,
	10, -10, 0,
	0, 0, 1,
	10, 10, 0,
	0, 0, 1
))

def Tree(mat, depth):
	result = []

	result += [(mat * vmath.Vector(0, 0, 0)).v]
	result += [(mat * vmath.Vector(0, 0, 1)).v]

	if depth:
		for i in range(3):
			a = pi * 2 * i / 3 + 0.1;
			b = pi / 8;
			c = random.uniform(0.8, 0.95)
			M = vmath.Matrix(
				cos(b), 0, -sin(b), 0,
				0, 1, 0, 0,
				sin(b), 0, cos(b), 0,
				0, 0, 0, 1
			) * vmath.Matrix(
				cos(a), -sin(a), 0, 0,
				sin(a), cos(a), 0, 0,
				0, 0, 1, 0,
				0, 0, 0, 1
			) * vmath.Matrix(
				c, 0, 0, 0,
				0, c, 0, 0,
				0, 0, c, 0,
				0, 0, 0, 1
			) * vmath.Matrix(
				1, 0, 0, 0,
				0, 1, 0, 0,
				0, 0, 1, 1,
				0, 0, 0, 1
			)
			result += Tree(mat * M, depth - 1)

	return result

M = vmath.Matrix(
	1, 0, 0, 0,
	0, 1, 0, 0,
	0, 0, 1, 0,
	0, 0, 0, 1
)

vbo = GL.GenBuffer(struct.pack('3f', *x) for x in Tree(M, 9))

vao = GL.VertexArray(prog, [
	(vbo, '3f', ['in_vert']),
])

prog['projection'].value = tuple(vmath.Perspective(70.0, 16.0 / 9.0, 0.01, 1000.0).m)
prog['modelview'].value = tuple(vmath.LookAt(vmath.Vector(5, 4, 4), vmath.Vector(0, 0, 4), vmath.Vector(0, 0, 1)).m)
prog['color'].value = (1, 1, 1)

while WND.Update():
	GL.Clear()
	vao.render(GL.LINES)
