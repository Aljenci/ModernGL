import math

class Vector:
	def __init__(self, x, y, z):
		self.v = [x, y, z]

	def __mul__(a, b):
		return Vector(a.v[0] * b, a.v[1] * b, a.v[2] * b)

	def __add__(a, b):
		return Vector(a.v[0] + b.v[0], a.v[1] + b.v[1], a.v[2] + b.v[2])

	def __sub__(a, b):
		return Vector(a.v[0] - b.v[0], a.v[1] - b.v[1], a.v[2] - b.v[2])

class Matrix:
	def __init__(self, xx, xy, xz, xw, yx, yy, yz, yw, zx, zy, zz, zw, wx, wy, wz, ww):
		self.m = [xx, xy, xz, xw, yx, yy, yz, yw, zx, zy, zz, zw, wx, wy, wz, ww]

	def __mul__(a, b):
		if type(b) is Matrix:
			return Matrix(
				a.m[0] * b.m[0] + a.m[4] * b.m[1] + a.m[8] * b.m[2] + a.m[12] * b.m[3],
				a.m[1] * b.m[0] + a.m[5] * b.m[1] + a.m[9] * b.m[2] + a.m[13] * b.m[3],
				a.m[2] * b.m[0] + a.m[6] * b.m[1] + a.m[10] * b.m[2] + a.m[14] * b.m[3],
				a.m[3] * b.m[0] + a.m[7] * b.m[1] + a.m[11] * b.m[2] + a.m[15] * b.m[3],
				a.m[0] * b.m[4] + a.m[4] * b.m[5] + a.m[8] * b.m[6] + a.m[12] * b.m[7],
				a.m[1] * b.m[4] + a.m[5] * b.m[5] + a.m[9] * b.m[6] + a.m[13] * b.m[7],
				a.m[2] * b.m[4] + a.m[6] * b.m[5] + a.m[10] * b.m[6] + a.m[14] * b.m[7],
				a.m[3] * b.m[4] + a.m[7] * b.m[5] + a.m[11] * b.m[6] + a.m[15] * b.m[7],
				a.m[0] * b.m[8] + a.m[4] * b.m[9] + a.m[8] * b.m[10] + a.m[12] * b.m[11],
				a.m[1] * b.m[8] + a.m[5] * b.m[9] + a.m[9] * b.m[10] + a.m[13] * b.m[11],
				a.m[2] * b.m[8] + a.m[6] * b.m[9] + a.m[10] * b.m[10] + a.m[14] * b.m[11],
				a.m[3] * b.m[8] + a.m[7] * b.m[9] + a.m[11] * b.m[10] + a.m[15] * b.m[11],
				a.m[0] * b.m[12] + a.m[4] * b.m[13] + a.m[8] * b.m[14] + a.m[12] * b.m[15],
				a.m[1] * b.m[12] + a.m[5] * b.m[13] + a.m[9] * b.m[14] + a.m[13] * b.m[15],
				a.m[2] * b.m[12] + a.m[6] * b.m[13] + a.m[10] * b.m[14] + a.m[14] * b.m[15],
				a.m[3] * b.m[12] + a.m[7] * b.m[13] + a.m[11] * b.m[14] + a.m[15] * b.m[15],
			)

		if type(b) is Vector:
			return Vector(
				a.m[0] * b.v[0] + a.m[1] * b.v[1] + a.m[2] * b.v[2] + a.m[3],
				a.m[4] * b.v[0] + a.m[5] * b.v[1] + a.m[6] * b.v[2] + a.m[7],
				a.m[8] * b.v[0] + a.m[9] * b.v[1] + a.m[10] * b.v[2] + a.m[11],
			)


def Length(v):
	return math.sqrt(v.v[0] * v.v[0] + v.v[1] * v.v[1] + v.v[2] * v.v[2])

def Normal(v):
	length = math.sqrt(v.v[0] * v.v[0] + v.v[1] * v.v[1] + v.v[2] * v.v[2])
	return Vector(
		v.v[0] / length,
		v.v[1] / length,
		v.v[2] / length,
	)

def Cross(a, b):
	return Vector(
		a.v[1] * b.v[2] - b.v[1] * a.v[2],
		a.v[2] * b.v[0] - b.v[2] * a.v[0],
		a.v[0] * b.v[1] - b.v[0] * a.v[1],
	)

def Dot(a, b):
	return a.v[0] * b.v[0] + a.v[1] * b.v[1] + a.v[2] * b.v[2]

def Perspective(fovy, ratio, znear, zfar):
	zmul = (-2.0 * znear * zfar) / (zfar - znear);
	ymul = 1.0 / math.tan(fovy * 3.14159265 / 360);
	xmul = ymul / ratio;
	return Matrix(
		xmul, 0.0, 0.0, 0.0,
		0.0, ymul, 0.0, 0.0,
		0.0, 0.0, -1.0, -1.0,
		0.0, 0.0, zmul, 0.0,
	)

def LookAt(eye, center, up):
	forward = Normal(center - eye);
	side = Normal(Cross(forward, up));
	upward = Cross(side, forward);
	return Matrix(
		side.v[0], upward.v[0], -forward.v[0], 0,
		side.v[1], upward.v[1], -forward.v[1], 0,
		side.v[2], upward.v[2], -forward.v[2], 0,
		-Dot(eye, side), -Dot(eye, upward), Dot(eye, forward), 1,
	)
