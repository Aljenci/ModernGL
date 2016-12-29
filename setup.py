from setuptools import setup, Extension
import os

# try:
# 	import ccompiler
# except ImportError:
# 	pass

def sources():
	for path, folders, files in os.walk('Source'):
		for f in files:
			if f.endswith('.cpp'):
				yield os.path.join(path, f)

ModernGL = Extension(
	name = 'ModernGL.ModernGL',
	include_dirs = ['Source'],
	define_macros = [
		('HAVING_ALL', 'YES'),
	],
	sources = list(sources()),
)

setup(
	name = 'ModernGL',
	version = '3.0.3',
	packages = ['ModernGL'],
	ext_modules = [ModernGL],
)
