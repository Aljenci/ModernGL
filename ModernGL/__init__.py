try:
	from .ModernGL import *
except ImportError:
	raise Exception('Do not include the local ModernGL folder.')

def GenBuffer(generator):
	return Buffer(b''.join(generator))
