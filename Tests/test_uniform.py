import ModernGL as GL
import GLWindow as WND

WND.Init()
GL.Init()

vs = GL.VertexShader('''
	#version 330

	struct ASD {
		int x[3];
		int y[5];
	};

	struct ASD2 {
		ASD qwe[3];
	};

	uniform bool potato[3];
	uniform ASD2 asd[3];
	uniform bool zxc;

	void main() {
		gl_Position = vec4(0, 0, 0, 0);
		if (zxc && potato[0]) {
			gl_Position.w += 1 + asd[2].qwe[1].x[0];
		}
		if (potato[1]) {
			gl_Position.w += 2 + asd[1].qwe[2].y[2];
			gl_Position.w += 2 + asd[0].qwe[1].x[1];
		}
		if (potato[2]) {
			gl_Position.w += 3;
		}
	}
''')

prog = GL.Program([vs])

prog['potato'].value = [True, False, True]

print(prog['potato'].value)
print(prog['asd[2].qwe[1].x'].value)

prog['zxc'].value = True
print(prog['zxc'].value)
prog['zxc'].value = False
print(prog['zxc'].value)
# prog['zxc'].value = 1
# print(prog['zxc'].value)
