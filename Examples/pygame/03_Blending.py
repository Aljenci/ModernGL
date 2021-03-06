from pygame.locals import *
import ModernGL as GL
import pygame, struct, time

width, height = 800, 600
start = time.time()

pygame.init()
pygame.display.set_mode((width, height), DOUBLEBUF | OPENGL)

GL.Init()

vert = GL.NewVertexShader('''
	#version 330

	in vec2 vert;

	in vec4 vert_color;
	out vec4 frag_color;

	uniform vec2 scale;
	uniform float rotation;

	void main() {
		frag_color = vert_color;
		float r = rotation * (0.5 + gl_InstanceID * 0.05);
		mat2 rot = mat2(cos(r), sin(r), -sin(r), cos(r));
		gl_Position = vec4((rot * vert) * scale, 0.0, 1.0);
	}
''')

frag = GL.NewFragmentShader('''
	#version 330
	
	in vec4 frag_color;
	out vec4 color;

	void main() {
		color = frag_color;
	}
''')

prog = GL.NewProgram([vert, frag])

verts = [
	1.0, 0.0,
	1.0, 0.0, 0.0, 0.5,

	-0.5, 0.86,
	0.0, 1.0, 0.0, 0.5,

	-0.5, -0.86,
	0.0, 0.0, 1.0, 0.5,
]

vbo = GL.NewVertexBuffer(struct.pack('18f', *verts))
vao = GL.NewVertexArray(prog, vbo, '2f4f', ['vert', 'vert_color'])

GL.SetUniform(prog['scale'], height / width * 0.75, 0.75)

running = True
while running:
	for event in pygame.event.get():
		if event.type == pygame.QUIT:
			running = False

	GL.Clear(240, 240, 240)
	GL.EnableOnly(GL.ENABLE_BLEND + GL.ENABLE_MULTISAMPLE)
	GL.SetUniform(prog['rotation'], time.time() - start)
	GL.RenderTriangles(vao, 3, instances = 10)

	pygame.display.flip()
	pygame.time.wait(10)
