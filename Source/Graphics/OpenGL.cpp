#include "OpenGL.hpp"

namespace OpenGL {

	const void * GetOpenGLFunction(const char * name);

	bool LoadCoreOpenGLFunctions() {

		#ifdef HAVING_glCullFace
		glCullFace = (PROC_glCullFace)GetOpenGLFunction("glCullFace");
		#endif

		#ifdef HAVING_glFrontFace
		glFrontFace = (PROC_glFrontFace)GetOpenGLFunction("glFrontFace");
		#endif

		#ifdef HAVING_glHint
		glHint = (PROC_glHint)GetOpenGLFunction("glHint");
		#endif

		#ifdef HAVING_glLineWidth
		glLineWidth = (PROC_glLineWidth)GetOpenGLFunction("glLineWidth");
		#endif

		#ifdef HAVING_glPointSize
		glPointSize = (PROC_glPointSize)GetOpenGLFunction("glPointSize");
		#endif

		#ifdef HAVING_glPolygonMode
		glPolygonMode = (PROC_glPolygonMode)GetOpenGLFunction("glPolygonMode");
		#endif

		#ifdef HAVING_glScissor
		glScissor = (PROC_glScissor)GetOpenGLFunction("glScissor");
		#endif

		#ifdef HAVING_glTexParameterf
		glTexParameterf = (PROC_glTexParameterf)GetOpenGLFunction("glTexParameterf");
		#endif

		#ifdef HAVING_glTexParameterfv
		glTexParameterfv = (PROC_glTexParameterfv)GetOpenGLFunction("glTexParameterfv");
		#endif

		#ifdef HAVING_glTexParameteri
		glTexParameteri = (PROC_glTexParameteri)GetOpenGLFunction("glTexParameteri");
		#endif

		#ifdef HAVING_glTexParameteriv
		glTexParameteriv = (PROC_glTexParameteriv)GetOpenGLFunction("glTexParameteriv");
		#endif

		#ifdef HAVING_glTexImage1D
		glTexImage1D = (PROC_glTexImage1D)GetOpenGLFunction("glTexImage1D");
		#endif

		#ifdef HAVING_glTexImage2D
		glTexImage2D = (PROC_glTexImage2D)GetOpenGLFunction("glTexImage2D");
		#endif

		#ifdef HAVING_glDrawBuffer
		glDrawBuffer = (PROC_glDrawBuffer)GetOpenGLFunction("glDrawBuffer");
		#endif

		#ifdef HAVING_glClear
		glClear = (PROC_glClear)GetOpenGLFunction("glClear");
		#endif

		#ifdef HAVING_glClearColor
		glClearColor = (PROC_glClearColor)GetOpenGLFunction("glClearColor");
		#endif

		#ifdef HAVING_glClearStencil
		glClearStencil = (PROC_glClearStencil)GetOpenGLFunction("glClearStencil");
		#endif

		#ifdef HAVING_glClearDepth
		glClearDepth = (PROC_glClearDepth)GetOpenGLFunction("glClearDepth");
		#endif

		#ifdef HAVING_glStencilMask
		glStencilMask = (PROC_glStencilMask)GetOpenGLFunction("glStencilMask");
		#endif

		#ifdef HAVING_glColorMask
		glColorMask = (PROC_glColorMask)GetOpenGLFunction("glColorMask");
		#endif

		#ifdef HAVING_glDepthMask
		glDepthMask = (PROC_glDepthMask)GetOpenGLFunction("glDepthMask");
		#endif

		#ifdef HAVING_glDisable
		glDisable = (PROC_glDisable)GetOpenGLFunction("glDisable");
		#endif

		#ifdef HAVING_glEnable
		glEnable = (PROC_glEnable)GetOpenGLFunction("glEnable");
		#endif

		#ifdef HAVING_glFinish
		glFinish = (PROC_glFinish)GetOpenGLFunction("glFinish");
		#endif

		#ifdef HAVING_glFlush
		glFlush = (PROC_glFlush)GetOpenGLFunction("glFlush");
		#endif

		#ifdef HAVING_glBlendFunc
		glBlendFunc = (PROC_glBlendFunc)GetOpenGLFunction("glBlendFunc");
		#endif

		#ifdef HAVING_glLogicOp
		glLogicOp = (PROC_glLogicOp)GetOpenGLFunction("glLogicOp");
		#endif

		#ifdef HAVING_glStencilFunc
		glStencilFunc = (PROC_glStencilFunc)GetOpenGLFunction("glStencilFunc");
		#endif

		#ifdef HAVING_glStencilOp
		glStencilOp = (PROC_glStencilOp)GetOpenGLFunction("glStencilOp");
		#endif

		#ifdef HAVING_glDepthFunc
		glDepthFunc = (PROC_glDepthFunc)GetOpenGLFunction("glDepthFunc");
		#endif

		#ifdef HAVING_glPixelStoref
		glPixelStoref = (PROC_glPixelStoref)GetOpenGLFunction("glPixelStoref");
		#endif

		#ifdef HAVING_glPixelStorei
		glPixelStorei = (PROC_glPixelStorei)GetOpenGLFunction("glPixelStorei");
		#endif

		#ifdef HAVING_glReadBuffer
		glReadBuffer = (PROC_glReadBuffer)GetOpenGLFunction("glReadBuffer");
		#endif

		#ifdef HAVING_glReadPixels
		glReadPixels = (PROC_glReadPixels)GetOpenGLFunction("glReadPixels");
		#endif

		#ifdef HAVING_glGetBooleanv
		glGetBooleanv = (PROC_glGetBooleanv)GetOpenGLFunction("glGetBooleanv");
		#endif

		#ifdef HAVING_glGetDoublev
		glGetDoublev = (PROC_glGetDoublev)GetOpenGLFunction("glGetDoublev");
		#endif

		#ifdef HAVING_glGetError
		glGetError = (PROC_glGetError)GetOpenGLFunction("glGetError");
		#endif

		#ifdef HAVING_glGetFloatv
		glGetFloatv = (PROC_glGetFloatv)GetOpenGLFunction("glGetFloatv");
		#endif

		#ifdef HAVING_glGetIntegerv
		glGetIntegerv = (PROC_glGetIntegerv)GetOpenGLFunction("glGetIntegerv");
		#endif

		#ifdef HAVING_glGetString
		glGetString = (PROC_glGetString)GetOpenGLFunction("glGetString");
		#endif

		#ifdef HAVING_glGetTexImage
		glGetTexImage = (PROC_glGetTexImage)GetOpenGLFunction("glGetTexImage");
		#endif

		#ifdef HAVING_glGetTexParameterfv
		glGetTexParameterfv = (PROC_glGetTexParameterfv)GetOpenGLFunction("glGetTexParameterfv");
		#endif

		#ifdef HAVING_glGetTexParameteriv
		glGetTexParameteriv = (PROC_glGetTexParameteriv)GetOpenGLFunction("glGetTexParameteriv");
		#endif

		#ifdef HAVING_glGetTexLevelParameterfv
		glGetTexLevelParameterfv = (PROC_glGetTexLevelParameterfv)GetOpenGLFunction("glGetTexLevelParameterfv");
		#endif

		#ifdef HAVING_glGetTexLevelParameteriv
		glGetTexLevelParameteriv = (PROC_glGetTexLevelParameteriv)GetOpenGLFunction("glGetTexLevelParameteriv");
		#endif

		#ifdef HAVING_glIsEnabled
		glIsEnabled = (PROC_glIsEnabled)GetOpenGLFunction("glIsEnabled");
		#endif

		#ifdef HAVING_glDepthRange
		glDepthRange = (PROC_glDepthRange)GetOpenGLFunction("glDepthRange");
		#endif

		#ifdef HAVING_glViewport
		glViewport = (PROC_glViewport)GetOpenGLFunction("glViewport");
		#endif

		#ifdef HAVING_glDrawArrays
		glDrawArrays = (PROC_glDrawArrays)GetOpenGLFunction("glDrawArrays");
		#endif

		#ifdef HAVING_glDrawElements
		glDrawElements = (PROC_glDrawElements)GetOpenGLFunction("glDrawElements");
		#endif

		#ifdef HAVING_glGetPointerv
		glGetPointerv = (PROC_glGetPointerv)GetOpenGLFunction("glGetPointerv");
		#endif

		#ifdef HAVING_glPolygonOffset
		glPolygonOffset = (PROC_glPolygonOffset)GetOpenGLFunction("glPolygonOffset");
		#endif

		#ifdef HAVING_glCopyTexImage1D
		glCopyTexImage1D = (PROC_glCopyTexImage1D)GetOpenGLFunction("glCopyTexImage1D");
		#endif

		#ifdef HAVING_glCopyTexImage2D
		glCopyTexImage2D = (PROC_glCopyTexImage2D)GetOpenGLFunction("glCopyTexImage2D");
		#endif

		#ifdef HAVING_glCopyTexSubImage1D
		glCopyTexSubImage1D = (PROC_glCopyTexSubImage1D)GetOpenGLFunction("glCopyTexSubImage1D");
		#endif

		#ifdef HAVING_glCopyTexSubImage2D
		glCopyTexSubImage2D = (PROC_glCopyTexSubImage2D)GetOpenGLFunction("glCopyTexSubImage2D");
		#endif

		#ifdef HAVING_glTexSubImage1D
		glTexSubImage1D = (PROC_glTexSubImage1D)GetOpenGLFunction("glTexSubImage1D");
		#endif

		#ifdef HAVING_glTexSubImage2D
		glTexSubImage2D = (PROC_glTexSubImage2D)GetOpenGLFunction("glTexSubImage2D");
		#endif

		#ifdef HAVING_glBindTexture
		glBindTexture = (PROC_glBindTexture)GetOpenGLFunction("glBindTexture");
		#endif

		#ifdef HAVING_glDeleteTextures
		glDeleteTextures = (PROC_glDeleteTextures)GetOpenGLFunction("glDeleteTextures");
		#endif

		#ifdef HAVING_glGenTextures
		glGenTextures = (PROC_glGenTextures)GetOpenGLFunction("glGenTextures");
		#endif

		#ifdef HAVING_glIsTexture
		glIsTexture = (PROC_glIsTexture)GetOpenGLFunction("glIsTexture");
		#endif

		#ifdef HAVING_glDrawRangeElements
		glDrawRangeElements = (PROC_glDrawRangeElements)GetOpenGLFunction("glDrawRangeElements");
		#endif

		#ifdef HAVING_glTexImage3D
		glTexImage3D = (PROC_glTexImage3D)GetOpenGLFunction("glTexImage3D");
		#endif

		#ifdef HAVING_glTexSubImage3D
		glTexSubImage3D = (PROC_glTexSubImage3D)GetOpenGLFunction("glTexSubImage3D");
		#endif

		#ifdef HAVING_glCopyTexSubImage3D
		glCopyTexSubImage3D = (PROC_glCopyTexSubImage3D)GetOpenGLFunction("glCopyTexSubImage3D");
		#endif

		#ifdef HAVING_glActiveTexture
		glActiveTexture = (PROC_glActiveTexture)GetOpenGLFunction("glActiveTexture");
		#endif

		#ifdef HAVING_glSampleCoverage
		glSampleCoverage = (PROC_glSampleCoverage)GetOpenGLFunction("glSampleCoverage");
		#endif

		#ifdef HAVING_glCompressedTexImage3D
		glCompressedTexImage3D = (PROC_glCompressedTexImage3D)GetOpenGLFunction("glCompressedTexImage3D");
		#endif

		#ifdef HAVING_glCompressedTexImage2D
		glCompressedTexImage2D = (PROC_glCompressedTexImage2D)GetOpenGLFunction("glCompressedTexImage2D");
		#endif

		#ifdef HAVING_glCompressedTexImage1D
		glCompressedTexImage1D = (PROC_glCompressedTexImage1D)GetOpenGLFunction("glCompressedTexImage1D");
		#endif

		#ifdef HAVING_glCompressedTexSubImage3D
		glCompressedTexSubImage3D = (PROC_glCompressedTexSubImage3D)GetOpenGLFunction("glCompressedTexSubImage3D");
		#endif

		#ifdef HAVING_glCompressedTexSubImage2D
		glCompressedTexSubImage2D = (PROC_glCompressedTexSubImage2D)GetOpenGLFunction("glCompressedTexSubImage2D");
		#endif

		#ifdef HAVING_glCompressedTexSubImage1D
		glCompressedTexSubImage1D = (PROC_glCompressedTexSubImage1D)GetOpenGLFunction("glCompressedTexSubImage1D");
		#endif

		#ifdef HAVING_glGetCompressedTexImage
		glGetCompressedTexImage = (PROC_glGetCompressedTexImage)GetOpenGLFunction("glGetCompressedTexImage");
		#endif

		#ifdef HAVING_glBlendFuncSeparate
		glBlendFuncSeparate = (PROC_glBlendFuncSeparate)GetOpenGLFunction("glBlendFuncSeparate");
		#endif

		#ifdef HAVING_glMultiDrawArrays
		glMultiDrawArrays = (PROC_glMultiDrawArrays)GetOpenGLFunction("glMultiDrawArrays");
		#endif

		#ifdef HAVING_glMultiDrawElements
		glMultiDrawElements = (PROC_glMultiDrawElements)GetOpenGLFunction("glMultiDrawElements");
		#endif

		#ifdef HAVING_glPointParameterf
		glPointParameterf = (PROC_glPointParameterf)GetOpenGLFunction("glPointParameterf");
		#endif

		#ifdef HAVING_glPointParameterfv
		glPointParameterfv = (PROC_glPointParameterfv)GetOpenGLFunction("glPointParameterfv");
		#endif

		#ifdef HAVING_glPointParameteri
		glPointParameteri = (PROC_glPointParameteri)GetOpenGLFunction("glPointParameteri");
		#endif

		#ifdef HAVING_glPointParameteriv
		glPointParameteriv = (PROC_glPointParameteriv)GetOpenGLFunction("glPointParameteriv");
		#endif

		#ifdef HAVING_glBlendColor
		glBlendColor = (PROC_glBlendColor)GetOpenGLFunction("glBlendColor");
		#endif

		#ifdef HAVING_glBlendEquation
		glBlendEquation = (PROC_glBlendEquation)GetOpenGLFunction("glBlendEquation");
		#endif

		#ifdef HAVING_glGenQueries
		glGenQueries = (PROC_glGenQueries)GetOpenGLFunction("glGenQueries");
		#endif

		#ifdef HAVING_glDeleteQueries
		glDeleteQueries = (PROC_glDeleteQueries)GetOpenGLFunction("glDeleteQueries");
		#endif

		#ifdef HAVING_glIsQuery
		glIsQuery = (PROC_glIsQuery)GetOpenGLFunction("glIsQuery");
		#endif

		#ifdef HAVING_glBeginQuery
		glBeginQuery = (PROC_glBeginQuery)GetOpenGLFunction("glBeginQuery");
		#endif

		#ifdef HAVING_glEndQuery
		glEndQuery = (PROC_glEndQuery)GetOpenGLFunction("glEndQuery");
		#endif

		#ifdef HAVING_glGetQueryiv
		glGetQueryiv = (PROC_glGetQueryiv)GetOpenGLFunction("glGetQueryiv");
		#endif

		#ifdef HAVING_glGetQueryObjectiv
		glGetQueryObjectiv = (PROC_glGetQueryObjectiv)GetOpenGLFunction("glGetQueryObjectiv");
		#endif

		#ifdef HAVING_glGetQueryObjectuiv
		glGetQueryObjectuiv = (PROC_glGetQueryObjectuiv)GetOpenGLFunction("glGetQueryObjectuiv");
		#endif

		#ifdef HAVING_glBindBuffer
		glBindBuffer = (PROC_glBindBuffer)GetOpenGLFunction("glBindBuffer");
		#endif

		#ifdef HAVING_glDeleteBuffers
		glDeleteBuffers = (PROC_glDeleteBuffers)GetOpenGLFunction("glDeleteBuffers");
		#endif

		#ifdef HAVING_glGenBuffers
		glGenBuffers = (PROC_glGenBuffers)GetOpenGLFunction("glGenBuffers");
		#endif

		#ifdef HAVING_glIsBuffer
		glIsBuffer = (PROC_glIsBuffer)GetOpenGLFunction("glIsBuffer");
		#endif

		#ifdef HAVING_glBufferData
		glBufferData = (PROC_glBufferData)GetOpenGLFunction("glBufferData");
		#endif

		#ifdef HAVING_glBufferSubData
		glBufferSubData = (PROC_glBufferSubData)GetOpenGLFunction("glBufferSubData");
		#endif

		#ifdef HAVING_glGetBufferSubData
		glGetBufferSubData = (PROC_glGetBufferSubData)GetOpenGLFunction("glGetBufferSubData");
		#endif

		#ifdef HAVING_glMapBuffer
		glMapBuffer = (PROC_glMapBuffer)GetOpenGLFunction("glMapBuffer");
		#endif

		#ifdef HAVING_glUnmapBuffer
		glUnmapBuffer = (PROC_glUnmapBuffer)GetOpenGLFunction("glUnmapBuffer");
		#endif

		#ifdef HAVING_glGetBufferParameteriv
		glGetBufferParameteriv = (PROC_glGetBufferParameteriv)GetOpenGLFunction("glGetBufferParameteriv");
		#endif

		#ifdef HAVING_glGetBufferPointerv
		glGetBufferPointerv = (PROC_glGetBufferPointerv)GetOpenGLFunction("glGetBufferPointerv");
		#endif

		#ifdef HAVING_glBlendEquationSeparate
		glBlendEquationSeparate = (PROC_glBlendEquationSeparate)GetOpenGLFunction("glBlendEquationSeparate");
		#endif

		#ifdef HAVING_glDrawBuffers
		glDrawBuffers = (PROC_glDrawBuffers)GetOpenGLFunction("glDrawBuffers");
		#endif

		#ifdef HAVING_glStencilOpSeparate
		glStencilOpSeparate = (PROC_glStencilOpSeparate)GetOpenGLFunction("glStencilOpSeparate");
		#endif

		#ifdef HAVING_glStencilFuncSeparate
		glStencilFuncSeparate = (PROC_glStencilFuncSeparate)GetOpenGLFunction("glStencilFuncSeparate");
		#endif

		#ifdef HAVING_glStencilMaskSeparate
		glStencilMaskSeparate = (PROC_glStencilMaskSeparate)GetOpenGLFunction("glStencilMaskSeparate");
		#endif

		#ifdef HAVING_glAttachShader
		glAttachShader = (PROC_glAttachShader)GetOpenGLFunction("glAttachShader");
		#endif

		#ifdef HAVING_glBindAttribLocation
		glBindAttribLocation = (PROC_glBindAttribLocation)GetOpenGLFunction("glBindAttribLocation");
		#endif

		#ifdef HAVING_glCompileShader
		glCompileShader = (PROC_glCompileShader)GetOpenGLFunction("glCompileShader");
		#endif

		#ifdef HAVING_glCreateProgram
		glCreateProgram = (PROC_glCreateProgram)GetOpenGLFunction("glCreateProgram");
		#endif

		#ifdef HAVING_glCreateShader
		glCreateShader = (PROC_glCreateShader)GetOpenGLFunction("glCreateShader");
		#endif

		#ifdef HAVING_glDeleteProgram
		glDeleteProgram = (PROC_glDeleteProgram)GetOpenGLFunction("glDeleteProgram");
		#endif

		#ifdef HAVING_glDeleteShader
		glDeleteShader = (PROC_glDeleteShader)GetOpenGLFunction("glDeleteShader");
		#endif

		#ifdef HAVING_glDetachShader
		glDetachShader = (PROC_glDetachShader)GetOpenGLFunction("glDetachShader");
		#endif

		#ifdef HAVING_glDisableVertexAttribArray
		glDisableVertexAttribArray = (PROC_glDisableVertexAttribArray)GetOpenGLFunction("glDisableVertexAttribArray");
		#endif

		#ifdef HAVING_glEnableVertexAttribArray
		glEnableVertexAttribArray = (PROC_glEnableVertexAttribArray)GetOpenGLFunction("glEnableVertexAttribArray");
		#endif

		#ifdef HAVING_glGetActiveAttrib
		glGetActiveAttrib = (PROC_glGetActiveAttrib)GetOpenGLFunction("glGetActiveAttrib");
		#endif

		#ifdef HAVING_glGetActiveUniform
		glGetActiveUniform = (PROC_glGetActiveUniform)GetOpenGLFunction("glGetActiveUniform");
		#endif

		#ifdef HAVING_glGetAttachedShaders
		glGetAttachedShaders = (PROC_glGetAttachedShaders)GetOpenGLFunction("glGetAttachedShaders");
		#endif

		#ifdef HAVING_glGetAttribLocation
		glGetAttribLocation = (PROC_glGetAttribLocation)GetOpenGLFunction("glGetAttribLocation");
		#endif

		#ifdef HAVING_glGetProgramiv
		glGetProgramiv = (PROC_glGetProgramiv)GetOpenGLFunction("glGetProgramiv");
		#endif

		#ifdef HAVING_glGetProgramInfoLog
		glGetProgramInfoLog = (PROC_glGetProgramInfoLog)GetOpenGLFunction("glGetProgramInfoLog");
		#endif

		#ifdef HAVING_glGetShaderiv
		glGetShaderiv = (PROC_glGetShaderiv)GetOpenGLFunction("glGetShaderiv");
		#endif

		#ifdef HAVING_glGetShaderInfoLog
		glGetShaderInfoLog = (PROC_glGetShaderInfoLog)GetOpenGLFunction("glGetShaderInfoLog");
		#endif

		#ifdef HAVING_glGetShaderSource
		glGetShaderSource = (PROC_glGetShaderSource)GetOpenGLFunction("glGetShaderSource");
		#endif

		#ifdef HAVING_glGetUniformLocation
		glGetUniformLocation = (PROC_glGetUniformLocation)GetOpenGLFunction("glGetUniformLocation");
		#endif

		#ifdef HAVING_glGetUniformfv
		glGetUniformfv = (PROC_glGetUniformfv)GetOpenGLFunction("glGetUniformfv");
		#endif

		#ifdef HAVING_glGetUniformiv
		glGetUniformiv = (PROC_glGetUniformiv)GetOpenGLFunction("glGetUniformiv");
		#endif

		#ifdef HAVING_glGetVertexAttribdv
		glGetVertexAttribdv = (PROC_glGetVertexAttribdv)GetOpenGLFunction("glGetVertexAttribdv");
		#endif

		#ifdef HAVING_glGetVertexAttribfv
		glGetVertexAttribfv = (PROC_glGetVertexAttribfv)GetOpenGLFunction("glGetVertexAttribfv");
		#endif

		#ifdef HAVING_glGetVertexAttribiv
		glGetVertexAttribiv = (PROC_glGetVertexAttribiv)GetOpenGLFunction("glGetVertexAttribiv");
		#endif

		#ifdef HAVING_glGetVertexAttribPointerv
		glGetVertexAttribPointerv = (PROC_glGetVertexAttribPointerv)GetOpenGLFunction("glGetVertexAttribPointerv");
		#endif

		#ifdef HAVING_glIsProgram
		glIsProgram = (PROC_glIsProgram)GetOpenGLFunction("glIsProgram");
		#endif

		#ifdef HAVING_glIsShader
		glIsShader = (PROC_glIsShader)GetOpenGLFunction("glIsShader");
		#endif

		#ifdef HAVING_glLinkProgram
		glLinkProgram = (PROC_glLinkProgram)GetOpenGLFunction("glLinkProgram");
		#endif

		#ifdef HAVING_glShaderSource
		glShaderSource = (PROC_glShaderSource)GetOpenGLFunction("glShaderSource");
		#endif

		#ifdef HAVING_glUseProgram
		glUseProgram = (PROC_glUseProgram)GetOpenGLFunction("glUseProgram");
		#endif

		#ifdef HAVING_glUniform1f
		glUniform1f = (PROC_glUniform1f)GetOpenGLFunction("glUniform1f");
		#endif

		#ifdef HAVING_glUniform2f
		glUniform2f = (PROC_glUniform2f)GetOpenGLFunction("glUniform2f");
		#endif

		#ifdef HAVING_glUniform3f
		glUniform3f = (PROC_glUniform3f)GetOpenGLFunction("glUniform3f");
		#endif

		#ifdef HAVING_glUniform4f
		glUniform4f = (PROC_glUniform4f)GetOpenGLFunction("glUniform4f");
		#endif

		#ifdef HAVING_glUniform1i
		glUniform1i = (PROC_glUniform1i)GetOpenGLFunction("glUniform1i");
		#endif

		#ifdef HAVING_glUniform2i
		glUniform2i = (PROC_glUniform2i)GetOpenGLFunction("glUniform2i");
		#endif

		#ifdef HAVING_glUniform3i
		glUniform3i = (PROC_glUniform3i)GetOpenGLFunction("glUniform3i");
		#endif

		#ifdef HAVING_glUniform4i
		glUniform4i = (PROC_glUniform4i)GetOpenGLFunction("glUniform4i");
		#endif

		#ifdef HAVING_glUniform1fv
		glUniform1fv = (PROC_glUniform1fv)GetOpenGLFunction("glUniform1fv");
		#endif

		#ifdef HAVING_glUniform2fv
		glUniform2fv = (PROC_glUniform2fv)GetOpenGLFunction("glUniform2fv");
		#endif

		#ifdef HAVING_glUniform3fv
		glUniform3fv = (PROC_glUniform3fv)GetOpenGLFunction("glUniform3fv");
		#endif

		#ifdef HAVING_glUniform4fv
		glUniform4fv = (PROC_glUniform4fv)GetOpenGLFunction("glUniform4fv");
		#endif

		#ifdef HAVING_glUniform1iv
		glUniform1iv = (PROC_glUniform1iv)GetOpenGLFunction("glUniform1iv");
		#endif

		#ifdef HAVING_glUniform2iv
		glUniform2iv = (PROC_glUniform2iv)GetOpenGLFunction("glUniform2iv");
		#endif

		#ifdef HAVING_glUniform3iv
		glUniform3iv = (PROC_glUniform3iv)GetOpenGLFunction("glUniform3iv");
		#endif

		#ifdef HAVING_glUniform4iv
		glUniform4iv = (PROC_glUniform4iv)GetOpenGLFunction("glUniform4iv");
		#endif

		#ifdef HAVING_glUniformMatrix2fv
		glUniformMatrix2fv = (PROC_glUniformMatrix2fv)GetOpenGLFunction("glUniformMatrix2fv");
		#endif

		#ifdef HAVING_glUniformMatrix3fv
		glUniformMatrix3fv = (PROC_glUniformMatrix3fv)GetOpenGLFunction("glUniformMatrix3fv");
		#endif

		#ifdef HAVING_glUniformMatrix4fv
		glUniformMatrix4fv = (PROC_glUniformMatrix4fv)GetOpenGLFunction("glUniformMatrix4fv");
		#endif

		#ifdef HAVING_glValidateProgram
		glValidateProgram = (PROC_glValidateProgram)GetOpenGLFunction("glValidateProgram");
		#endif

		#ifdef HAVING_glVertexAttrib1d
		glVertexAttrib1d = (PROC_glVertexAttrib1d)GetOpenGLFunction("glVertexAttrib1d");
		#endif

		#ifdef HAVING_glVertexAttrib1dv
		glVertexAttrib1dv = (PROC_glVertexAttrib1dv)GetOpenGLFunction("glVertexAttrib1dv");
		#endif

		#ifdef HAVING_glVertexAttrib1f
		glVertexAttrib1f = (PROC_glVertexAttrib1f)GetOpenGLFunction("glVertexAttrib1f");
		#endif

		#ifdef HAVING_glVertexAttrib1fv
		glVertexAttrib1fv = (PROC_glVertexAttrib1fv)GetOpenGLFunction("glVertexAttrib1fv");
		#endif

		#ifdef HAVING_glVertexAttrib1s
		glVertexAttrib1s = (PROC_glVertexAttrib1s)GetOpenGLFunction("glVertexAttrib1s");
		#endif

		#ifdef HAVING_glVertexAttrib1sv
		glVertexAttrib1sv = (PROC_glVertexAttrib1sv)GetOpenGLFunction("glVertexAttrib1sv");
		#endif

		#ifdef HAVING_glVertexAttrib2d
		glVertexAttrib2d = (PROC_glVertexAttrib2d)GetOpenGLFunction("glVertexAttrib2d");
		#endif

		#ifdef HAVING_glVertexAttrib2dv
		glVertexAttrib2dv = (PROC_glVertexAttrib2dv)GetOpenGLFunction("glVertexAttrib2dv");
		#endif

		#ifdef HAVING_glVertexAttrib2f
		glVertexAttrib2f = (PROC_glVertexAttrib2f)GetOpenGLFunction("glVertexAttrib2f");
		#endif

		#ifdef HAVING_glVertexAttrib2fv
		glVertexAttrib2fv = (PROC_glVertexAttrib2fv)GetOpenGLFunction("glVertexAttrib2fv");
		#endif

		#ifdef HAVING_glVertexAttrib2s
		glVertexAttrib2s = (PROC_glVertexAttrib2s)GetOpenGLFunction("glVertexAttrib2s");
		#endif

		#ifdef HAVING_glVertexAttrib2sv
		glVertexAttrib2sv = (PROC_glVertexAttrib2sv)GetOpenGLFunction("glVertexAttrib2sv");
		#endif

		#ifdef HAVING_glVertexAttrib3d
		glVertexAttrib3d = (PROC_glVertexAttrib3d)GetOpenGLFunction("glVertexAttrib3d");
		#endif

		#ifdef HAVING_glVertexAttrib3dv
		glVertexAttrib3dv = (PROC_glVertexAttrib3dv)GetOpenGLFunction("glVertexAttrib3dv");
		#endif

		#ifdef HAVING_glVertexAttrib3f
		glVertexAttrib3f = (PROC_glVertexAttrib3f)GetOpenGLFunction("glVertexAttrib3f");
		#endif

		#ifdef HAVING_glVertexAttrib3fv
		glVertexAttrib3fv = (PROC_glVertexAttrib3fv)GetOpenGLFunction("glVertexAttrib3fv");
		#endif

		#ifdef HAVING_glVertexAttrib3s
		glVertexAttrib3s = (PROC_glVertexAttrib3s)GetOpenGLFunction("glVertexAttrib3s");
		#endif

		#ifdef HAVING_glVertexAttrib3sv
		glVertexAttrib3sv = (PROC_glVertexAttrib3sv)GetOpenGLFunction("glVertexAttrib3sv");
		#endif

		#ifdef HAVING_glVertexAttrib4Nbv
		glVertexAttrib4Nbv = (PROC_glVertexAttrib4Nbv)GetOpenGLFunction("glVertexAttrib4Nbv");
		#endif

		#ifdef HAVING_glVertexAttrib4Niv
		glVertexAttrib4Niv = (PROC_glVertexAttrib4Niv)GetOpenGLFunction("glVertexAttrib4Niv");
		#endif

		#ifdef HAVING_glVertexAttrib4Nsv
		glVertexAttrib4Nsv = (PROC_glVertexAttrib4Nsv)GetOpenGLFunction("glVertexAttrib4Nsv");
		#endif

		#ifdef HAVING_glVertexAttrib4Nub
		glVertexAttrib4Nub = (PROC_glVertexAttrib4Nub)GetOpenGLFunction("glVertexAttrib4Nub");
		#endif

		#ifdef HAVING_glVertexAttrib4Nubv
		glVertexAttrib4Nubv = (PROC_glVertexAttrib4Nubv)GetOpenGLFunction("glVertexAttrib4Nubv");
		#endif

		#ifdef HAVING_glVertexAttrib4Nuiv
		glVertexAttrib4Nuiv = (PROC_glVertexAttrib4Nuiv)GetOpenGLFunction("glVertexAttrib4Nuiv");
		#endif

		#ifdef HAVING_glVertexAttrib4Nusv
		glVertexAttrib4Nusv = (PROC_glVertexAttrib4Nusv)GetOpenGLFunction("glVertexAttrib4Nusv");
		#endif

		#ifdef HAVING_glVertexAttrib4bv
		glVertexAttrib4bv = (PROC_glVertexAttrib4bv)GetOpenGLFunction("glVertexAttrib4bv");
		#endif

		#ifdef HAVING_glVertexAttrib4d
		glVertexAttrib4d = (PROC_glVertexAttrib4d)GetOpenGLFunction("glVertexAttrib4d");
		#endif

		#ifdef HAVING_glVertexAttrib4dv
		glVertexAttrib4dv = (PROC_glVertexAttrib4dv)GetOpenGLFunction("glVertexAttrib4dv");
		#endif

		#ifdef HAVING_glVertexAttrib4f
		glVertexAttrib4f = (PROC_glVertexAttrib4f)GetOpenGLFunction("glVertexAttrib4f");
		#endif

		#ifdef HAVING_glVertexAttrib4fv
		glVertexAttrib4fv = (PROC_glVertexAttrib4fv)GetOpenGLFunction("glVertexAttrib4fv");
		#endif

		#ifdef HAVING_glVertexAttrib4iv
		glVertexAttrib4iv = (PROC_glVertexAttrib4iv)GetOpenGLFunction("glVertexAttrib4iv");
		#endif

		#ifdef HAVING_glVertexAttrib4s
		glVertexAttrib4s = (PROC_glVertexAttrib4s)GetOpenGLFunction("glVertexAttrib4s");
		#endif

		#ifdef HAVING_glVertexAttrib4sv
		glVertexAttrib4sv = (PROC_glVertexAttrib4sv)GetOpenGLFunction("glVertexAttrib4sv");
		#endif

		#ifdef HAVING_glVertexAttrib4ubv
		glVertexAttrib4ubv = (PROC_glVertexAttrib4ubv)GetOpenGLFunction("glVertexAttrib4ubv");
		#endif

		#ifdef HAVING_glVertexAttrib4uiv
		glVertexAttrib4uiv = (PROC_glVertexAttrib4uiv)GetOpenGLFunction("glVertexAttrib4uiv");
		#endif

		#ifdef HAVING_glVertexAttrib4usv
		glVertexAttrib4usv = (PROC_glVertexAttrib4usv)GetOpenGLFunction("glVertexAttrib4usv");
		#endif

		#ifdef HAVING_glVertexAttribPointer
		glVertexAttribPointer = (PROC_glVertexAttribPointer)GetOpenGLFunction("glVertexAttribPointer");
		#endif

		#ifdef HAVING_glUniformMatrix2x3fv
		glUniformMatrix2x3fv = (PROC_glUniformMatrix2x3fv)GetOpenGLFunction("glUniformMatrix2x3fv");
		#endif

		#ifdef HAVING_glUniformMatrix3x2fv
		glUniformMatrix3x2fv = (PROC_glUniformMatrix3x2fv)GetOpenGLFunction("glUniformMatrix3x2fv");
		#endif

		#ifdef HAVING_glUniformMatrix2x4fv
		glUniformMatrix2x4fv = (PROC_glUniformMatrix2x4fv)GetOpenGLFunction("glUniformMatrix2x4fv");
		#endif

		#ifdef HAVING_glUniformMatrix4x2fv
		glUniformMatrix4x2fv = (PROC_glUniformMatrix4x2fv)GetOpenGLFunction("glUniformMatrix4x2fv");
		#endif

		#ifdef HAVING_glUniformMatrix3x4fv
		glUniformMatrix3x4fv = (PROC_glUniformMatrix3x4fv)GetOpenGLFunction("glUniformMatrix3x4fv");
		#endif

		#ifdef HAVING_glUniformMatrix4x3fv
		glUniformMatrix4x3fv = (PROC_glUniformMatrix4x3fv)GetOpenGLFunction("glUniformMatrix4x3fv");
		#endif

		#ifdef HAVING_glColorMaski
		glColorMaski = (PROC_glColorMaski)GetOpenGLFunction("glColorMaski");
		#endif

		#ifdef HAVING_glGetBooleani_v
		glGetBooleani_v = (PROC_glGetBooleani_v)GetOpenGLFunction("glGetBooleani_v");
		#endif

		#ifdef HAVING_glGetIntegeri_v
		glGetIntegeri_v = (PROC_glGetIntegeri_v)GetOpenGLFunction("glGetIntegeri_v");
		#endif

		#ifdef HAVING_glEnablei
		glEnablei = (PROC_glEnablei)GetOpenGLFunction("glEnablei");
		#endif

		#ifdef HAVING_glDisablei
		glDisablei = (PROC_glDisablei)GetOpenGLFunction("glDisablei");
		#endif

		#ifdef HAVING_glIsEnabledi
		glIsEnabledi = (PROC_glIsEnabledi)GetOpenGLFunction("glIsEnabledi");
		#endif

		#ifdef HAVING_glBeginTransformFeedback
		glBeginTransformFeedback = (PROC_glBeginTransformFeedback)GetOpenGLFunction("glBeginTransformFeedback");
		#endif

		#ifdef HAVING_glEndTransformFeedback
		glEndTransformFeedback = (PROC_glEndTransformFeedback)GetOpenGLFunction("glEndTransformFeedback");
		#endif

		#ifdef HAVING_glBindBufferRange
		glBindBufferRange = (PROC_glBindBufferRange)GetOpenGLFunction("glBindBufferRange");
		#endif

		#ifdef HAVING_glBindBufferBase
		glBindBufferBase = (PROC_glBindBufferBase)GetOpenGLFunction("glBindBufferBase");
		#endif

		#ifdef HAVING_glTransformFeedbackVaryings
		glTransformFeedbackVaryings = (PROC_glTransformFeedbackVaryings)GetOpenGLFunction("glTransformFeedbackVaryings");
		#endif

		#ifdef HAVING_glGetTransformFeedbackVarying
		glGetTransformFeedbackVarying = (PROC_glGetTransformFeedbackVarying)GetOpenGLFunction("glGetTransformFeedbackVarying");
		#endif

		#ifdef HAVING_glClampColor
		glClampColor = (PROC_glClampColor)GetOpenGLFunction("glClampColor");
		#endif

		#ifdef HAVING_glBeginConditionalRender
		glBeginConditionalRender = (PROC_glBeginConditionalRender)GetOpenGLFunction("glBeginConditionalRender");
		#endif

		#ifdef HAVING_glEndConditionalRender
		glEndConditionalRender = (PROC_glEndConditionalRender)GetOpenGLFunction("glEndConditionalRender");
		#endif

		#ifdef HAVING_glVertexAttribIPointer
		glVertexAttribIPointer = (PROC_glVertexAttribIPointer)GetOpenGLFunction("glVertexAttribIPointer");
		#endif

		#ifdef HAVING_glGetVertexAttribIiv
		glGetVertexAttribIiv = (PROC_glGetVertexAttribIiv)GetOpenGLFunction("glGetVertexAttribIiv");
		#endif

		#ifdef HAVING_glGetVertexAttribIuiv
		glGetVertexAttribIuiv = (PROC_glGetVertexAttribIuiv)GetOpenGLFunction("glGetVertexAttribIuiv");
		#endif

		#ifdef HAVING_glVertexAttribI1i
		glVertexAttribI1i = (PROC_glVertexAttribI1i)GetOpenGLFunction("glVertexAttribI1i");
		#endif

		#ifdef HAVING_glVertexAttribI2i
		glVertexAttribI2i = (PROC_glVertexAttribI2i)GetOpenGLFunction("glVertexAttribI2i");
		#endif

		#ifdef HAVING_glVertexAttribI3i
		glVertexAttribI3i = (PROC_glVertexAttribI3i)GetOpenGLFunction("glVertexAttribI3i");
		#endif

		#ifdef HAVING_glVertexAttribI4i
		glVertexAttribI4i = (PROC_glVertexAttribI4i)GetOpenGLFunction("glVertexAttribI4i");
		#endif

		#ifdef HAVING_glVertexAttribI1ui
		glVertexAttribI1ui = (PROC_glVertexAttribI1ui)GetOpenGLFunction("glVertexAttribI1ui");
		#endif

		#ifdef HAVING_glVertexAttribI2ui
		glVertexAttribI2ui = (PROC_glVertexAttribI2ui)GetOpenGLFunction("glVertexAttribI2ui");
		#endif

		#ifdef HAVING_glVertexAttribI3ui
		glVertexAttribI3ui = (PROC_glVertexAttribI3ui)GetOpenGLFunction("glVertexAttribI3ui");
		#endif

		#ifdef HAVING_glVertexAttribI4ui
		glVertexAttribI4ui = (PROC_glVertexAttribI4ui)GetOpenGLFunction("glVertexAttribI4ui");
		#endif

		#ifdef HAVING_glVertexAttribI1iv
		glVertexAttribI1iv = (PROC_glVertexAttribI1iv)GetOpenGLFunction("glVertexAttribI1iv");
		#endif

		#ifdef HAVING_glVertexAttribI2iv
		glVertexAttribI2iv = (PROC_glVertexAttribI2iv)GetOpenGLFunction("glVertexAttribI2iv");
		#endif

		#ifdef HAVING_glVertexAttribI3iv
		glVertexAttribI3iv = (PROC_glVertexAttribI3iv)GetOpenGLFunction("glVertexAttribI3iv");
		#endif

		#ifdef HAVING_glVertexAttribI4iv
		glVertexAttribI4iv = (PROC_glVertexAttribI4iv)GetOpenGLFunction("glVertexAttribI4iv");
		#endif

		#ifdef HAVING_glVertexAttribI1uiv
		glVertexAttribI1uiv = (PROC_glVertexAttribI1uiv)GetOpenGLFunction("glVertexAttribI1uiv");
		#endif

		#ifdef HAVING_glVertexAttribI2uiv
		glVertexAttribI2uiv = (PROC_glVertexAttribI2uiv)GetOpenGLFunction("glVertexAttribI2uiv");
		#endif

		#ifdef HAVING_glVertexAttribI3uiv
		glVertexAttribI3uiv = (PROC_glVertexAttribI3uiv)GetOpenGLFunction("glVertexAttribI3uiv");
		#endif

		#ifdef HAVING_glVertexAttribI4uiv
		glVertexAttribI4uiv = (PROC_glVertexAttribI4uiv)GetOpenGLFunction("glVertexAttribI4uiv");
		#endif

		#ifdef HAVING_glVertexAttribI4bv
		glVertexAttribI4bv = (PROC_glVertexAttribI4bv)GetOpenGLFunction("glVertexAttribI4bv");
		#endif

		#ifdef HAVING_glVertexAttribI4sv
		glVertexAttribI4sv = (PROC_glVertexAttribI4sv)GetOpenGLFunction("glVertexAttribI4sv");
		#endif

		#ifdef HAVING_glVertexAttribI4ubv
		glVertexAttribI4ubv = (PROC_glVertexAttribI4ubv)GetOpenGLFunction("glVertexAttribI4ubv");
		#endif

		#ifdef HAVING_glVertexAttribI4usv
		glVertexAttribI4usv = (PROC_glVertexAttribI4usv)GetOpenGLFunction("glVertexAttribI4usv");
		#endif

		#ifdef HAVING_glGetUniformuiv
		glGetUniformuiv = (PROC_glGetUniformuiv)GetOpenGLFunction("glGetUniformuiv");
		#endif

		#ifdef HAVING_glBindFragDataLocation
		glBindFragDataLocation = (PROC_glBindFragDataLocation)GetOpenGLFunction("glBindFragDataLocation");
		#endif

		#ifdef HAVING_glGetFragDataLocation
		glGetFragDataLocation = (PROC_glGetFragDataLocation)GetOpenGLFunction("glGetFragDataLocation");
		#endif

		#ifdef HAVING_glUniform1ui
		glUniform1ui = (PROC_glUniform1ui)GetOpenGLFunction("glUniform1ui");
		#endif

		#ifdef HAVING_glUniform2ui
		glUniform2ui = (PROC_glUniform2ui)GetOpenGLFunction("glUniform2ui");
		#endif

		#ifdef HAVING_glUniform3ui
		glUniform3ui = (PROC_glUniform3ui)GetOpenGLFunction("glUniform3ui");
		#endif

		#ifdef HAVING_glUniform4ui
		glUniform4ui = (PROC_glUniform4ui)GetOpenGLFunction("glUniform4ui");
		#endif

		#ifdef HAVING_glUniform1uiv
		glUniform1uiv = (PROC_glUniform1uiv)GetOpenGLFunction("glUniform1uiv");
		#endif

		#ifdef HAVING_glUniform2uiv
		glUniform2uiv = (PROC_glUniform2uiv)GetOpenGLFunction("glUniform2uiv");
		#endif

		#ifdef HAVING_glUniform3uiv
		glUniform3uiv = (PROC_glUniform3uiv)GetOpenGLFunction("glUniform3uiv");
		#endif

		#ifdef HAVING_glUniform4uiv
		glUniform4uiv = (PROC_glUniform4uiv)GetOpenGLFunction("glUniform4uiv");
		#endif

		#ifdef HAVING_glTexParameterIiv
		glTexParameterIiv = (PROC_glTexParameterIiv)GetOpenGLFunction("glTexParameterIiv");
		#endif

		#ifdef HAVING_glTexParameterIuiv
		glTexParameterIuiv = (PROC_glTexParameterIuiv)GetOpenGLFunction("glTexParameterIuiv");
		#endif

		#ifdef HAVING_glGetTexParameterIiv
		glGetTexParameterIiv = (PROC_glGetTexParameterIiv)GetOpenGLFunction("glGetTexParameterIiv");
		#endif

		#ifdef HAVING_glGetTexParameterIuiv
		glGetTexParameterIuiv = (PROC_glGetTexParameterIuiv)GetOpenGLFunction("glGetTexParameterIuiv");
		#endif

		#ifdef HAVING_glClearBufferiv
		glClearBufferiv = (PROC_glClearBufferiv)GetOpenGLFunction("glClearBufferiv");
		#endif

		#ifdef HAVING_glClearBufferuiv
		glClearBufferuiv = (PROC_glClearBufferuiv)GetOpenGLFunction("glClearBufferuiv");
		#endif

		#ifdef HAVING_glClearBufferfv
		glClearBufferfv = (PROC_glClearBufferfv)GetOpenGLFunction("glClearBufferfv");
		#endif

		#ifdef HAVING_glClearBufferfi
		glClearBufferfi = (PROC_glClearBufferfi)GetOpenGLFunction("glClearBufferfi");
		#endif

		#ifdef HAVING_glGetStringi
		glGetStringi = (PROC_glGetStringi)GetOpenGLFunction("glGetStringi");
		#endif

		#ifdef HAVING_glIsRenderbuffer
		glIsRenderbuffer = (PROC_glIsRenderbuffer)GetOpenGLFunction("glIsRenderbuffer");
		#endif

		#ifdef HAVING_glBindRenderbuffer
		glBindRenderbuffer = (PROC_glBindRenderbuffer)GetOpenGLFunction("glBindRenderbuffer");
		#endif

		#ifdef HAVING_glDeleteRenderbuffers
		glDeleteRenderbuffers = (PROC_glDeleteRenderbuffers)GetOpenGLFunction("glDeleteRenderbuffers");
		#endif

		#ifdef HAVING_glGenRenderbuffers
		glGenRenderbuffers = (PROC_glGenRenderbuffers)GetOpenGLFunction("glGenRenderbuffers");
		#endif

		#ifdef HAVING_glRenderbufferStorage
		glRenderbufferStorage = (PROC_glRenderbufferStorage)GetOpenGLFunction("glRenderbufferStorage");
		#endif

		#ifdef HAVING_glGetRenderbufferParameteriv
		glGetRenderbufferParameteriv = (PROC_glGetRenderbufferParameteriv)GetOpenGLFunction("glGetRenderbufferParameteriv");
		#endif

		#ifdef HAVING_glIsFramebuffer
		glIsFramebuffer = (PROC_glIsFramebuffer)GetOpenGLFunction("glIsFramebuffer");
		#endif

		#ifdef HAVING_glBindFramebuffer
		glBindFramebuffer = (PROC_glBindFramebuffer)GetOpenGLFunction("glBindFramebuffer");
		#endif

		#ifdef HAVING_glDeleteFramebuffers
		glDeleteFramebuffers = (PROC_glDeleteFramebuffers)GetOpenGLFunction("glDeleteFramebuffers");
		#endif

		#ifdef HAVING_glGenFramebuffers
		glGenFramebuffers = (PROC_glGenFramebuffers)GetOpenGLFunction("glGenFramebuffers");
		#endif

		#ifdef HAVING_glCheckFramebufferStatus
		glCheckFramebufferStatus = (PROC_glCheckFramebufferStatus)GetOpenGLFunction("glCheckFramebufferStatus");
		#endif

		#ifdef HAVING_glFramebufferTexture1D
		glFramebufferTexture1D = (PROC_glFramebufferTexture1D)GetOpenGLFunction("glFramebufferTexture1D");
		#endif

		#ifdef HAVING_glFramebufferTexture2D
		glFramebufferTexture2D = (PROC_glFramebufferTexture2D)GetOpenGLFunction("glFramebufferTexture2D");
		#endif

		#ifdef HAVING_glFramebufferTexture3D
		glFramebufferTexture3D = (PROC_glFramebufferTexture3D)GetOpenGLFunction("glFramebufferTexture3D");
		#endif

		#ifdef HAVING_glFramebufferRenderbuffer
		glFramebufferRenderbuffer = (PROC_glFramebufferRenderbuffer)GetOpenGLFunction("glFramebufferRenderbuffer");
		#endif

		#ifdef HAVING_glGetFramebufferAttachmentParameteriv
		glGetFramebufferAttachmentParameteriv = (PROC_glGetFramebufferAttachmentParameteriv)GetOpenGLFunction("glGetFramebufferAttachmentParameteriv");
		#endif

		#ifdef HAVING_glGenerateMipmap
		glGenerateMipmap = (PROC_glGenerateMipmap)GetOpenGLFunction("glGenerateMipmap");
		#endif

		#ifdef HAVING_glBlitFramebuffer
		glBlitFramebuffer = (PROC_glBlitFramebuffer)GetOpenGLFunction("glBlitFramebuffer");
		#endif

		#ifdef HAVING_glRenderbufferStorageMultisample
		glRenderbufferStorageMultisample = (PROC_glRenderbufferStorageMultisample)GetOpenGLFunction("glRenderbufferStorageMultisample");
		#endif

		#ifdef HAVING_glFramebufferTextureLayer
		glFramebufferTextureLayer = (PROC_glFramebufferTextureLayer)GetOpenGLFunction("glFramebufferTextureLayer");
		#endif

		#ifdef HAVING_glMapBufferRange
		glMapBufferRange = (PROC_glMapBufferRange)GetOpenGLFunction("glMapBufferRange");
		#endif

		#ifdef HAVING_glFlushMappedBufferRange
		glFlushMappedBufferRange = (PROC_glFlushMappedBufferRange)GetOpenGLFunction("glFlushMappedBufferRange");
		#endif

		#ifdef HAVING_glBindVertexArray
		glBindVertexArray = (PROC_glBindVertexArray)GetOpenGLFunction("glBindVertexArray");
		#endif

		#ifdef HAVING_glDeleteVertexArrays
		glDeleteVertexArrays = (PROC_glDeleteVertexArrays)GetOpenGLFunction("glDeleteVertexArrays");
		#endif

		#ifdef HAVING_glGenVertexArrays
		glGenVertexArrays = (PROC_glGenVertexArrays)GetOpenGLFunction("glGenVertexArrays");
		#endif

		#ifdef HAVING_glIsVertexArray
		glIsVertexArray = (PROC_glIsVertexArray)GetOpenGLFunction("glIsVertexArray");
		#endif

		#ifdef HAVING_glDrawArraysInstanced
		glDrawArraysInstanced = (PROC_glDrawArraysInstanced)GetOpenGLFunction("glDrawArraysInstanced");
		#endif

		#ifdef HAVING_glDrawElementsInstanced
		glDrawElementsInstanced = (PROC_glDrawElementsInstanced)GetOpenGLFunction("glDrawElementsInstanced");
		#endif

		#ifdef HAVING_glTexBuffer
		glTexBuffer = (PROC_glTexBuffer)GetOpenGLFunction("glTexBuffer");
		#endif

		#ifdef HAVING_glPrimitiveRestartIndex
		glPrimitiveRestartIndex = (PROC_glPrimitiveRestartIndex)GetOpenGLFunction("glPrimitiveRestartIndex");
		#endif

		#ifdef HAVING_glCopyBufferSubData
		glCopyBufferSubData = (PROC_glCopyBufferSubData)GetOpenGLFunction("glCopyBufferSubData");
		#endif

		#ifdef HAVING_glGetUniformIndices
		glGetUniformIndices = (PROC_glGetUniformIndices)GetOpenGLFunction("glGetUniformIndices");
		#endif

		#ifdef HAVING_glGetActiveUniformsiv
		glGetActiveUniformsiv = (PROC_glGetActiveUniformsiv)GetOpenGLFunction("glGetActiveUniformsiv");
		#endif

		#ifdef HAVING_glGetActiveUniformName
		glGetActiveUniformName = (PROC_glGetActiveUniformName)GetOpenGLFunction("glGetActiveUniformName");
		#endif

		#ifdef HAVING_glGetUniformBlockIndex
		glGetUniformBlockIndex = (PROC_glGetUniformBlockIndex)GetOpenGLFunction("glGetUniformBlockIndex");
		#endif

		#ifdef HAVING_glGetActiveUniformBlockiv
		glGetActiveUniformBlockiv = (PROC_glGetActiveUniformBlockiv)GetOpenGLFunction("glGetActiveUniformBlockiv");
		#endif

		#ifdef HAVING_glGetActiveUniformBlockName
		glGetActiveUniformBlockName = (PROC_glGetActiveUniformBlockName)GetOpenGLFunction("glGetActiveUniformBlockName");
		#endif

		#ifdef HAVING_glUniformBlockBinding
		glUniformBlockBinding = (PROC_glUniformBlockBinding)GetOpenGLFunction("glUniformBlockBinding");
		#endif

		#ifdef HAVING_glDrawElementsBaseVertex
		glDrawElementsBaseVertex = (PROC_glDrawElementsBaseVertex)GetOpenGLFunction("glDrawElementsBaseVertex");
		#endif

		#ifdef HAVING_glDrawRangeElementsBaseVertex
		glDrawRangeElementsBaseVertex = (PROC_glDrawRangeElementsBaseVertex)GetOpenGLFunction("glDrawRangeElementsBaseVertex");
		#endif

		#ifdef HAVING_glDrawElementsInstancedBaseVertex
		glDrawElementsInstancedBaseVertex = (PROC_glDrawElementsInstancedBaseVertex)GetOpenGLFunction("glDrawElementsInstancedBaseVertex");
		#endif

		#ifdef HAVING_glMultiDrawElementsBaseVertex
		glMultiDrawElementsBaseVertex = (PROC_glMultiDrawElementsBaseVertex)GetOpenGLFunction("glMultiDrawElementsBaseVertex");
		#endif

		#ifdef HAVING_glProvokingVertex
		glProvokingVertex = (PROC_glProvokingVertex)GetOpenGLFunction("glProvokingVertex");
		#endif

		#ifdef HAVING_glFenceSync
		glFenceSync = (PROC_glFenceSync)GetOpenGLFunction("glFenceSync");
		#endif

		#ifdef HAVING_glIsSync
		glIsSync = (PROC_glIsSync)GetOpenGLFunction("glIsSync");
		#endif

		#ifdef HAVING_glDeleteSync
		glDeleteSync = (PROC_glDeleteSync)GetOpenGLFunction("glDeleteSync");
		#endif

		#ifdef HAVING_glClientWaitSync
		glClientWaitSync = (PROC_glClientWaitSync)GetOpenGLFunction("glClientWaitSync");
		#endif

		#ifdef HAVING_glWaitSync
		glWaitSync = (PROC_glWaitSync)GetOpenGLFunction("glWaitSync");
		#endif

		#ifdef HAVING_glGetInteger64v
		glGetInteger64v = (PROC_glGetInteger64v)GetOpenGLFunction("glGetInteger64v");
		#endif

		#ifdef HAVING_glGetSynciv
		glGetSynciv = (PROC_glGetSynciv)GetOpenGLFunction("glGetSynciv");
		#endif

		#ifdef HAVING_glGetInteger64i_v
		glGetInteger64i_v = (PROC_glGetInteger64i_v)GetOpenGLFunction("glGetInteger64i_v");
		#endif

		#ifdef HAVING_glGetBufferParameteri64v
		glGetBufferParameteri64v = (PROC_glGetBufferParameteri64v)GetOpenGLFunction("glGetBufferParameteri64v");
		#endif

		#ifdef HAVING_glFramebufferTexture
		glFramebufferTexture = (PROC_glFramebufferTexture)GetOpenGLFunction("glFramebufferTexture");
		#endif

		#ifdef HAVING_glTexImage2DMultisample
		glTexImage2DMultisample = (PROC_glTexImage2DMultisample)GetOpenGLFunction("glTexImage2DMultisample");
		#endif

		#ifdef HAVING_glTexImage3DMultisample
		glTexImage3DMultisample = (PROC_glTexImage3DMultisample)GetOpenGLFunction("glTexImage3DMultisample");
		#endif

		#ifdef HAVING_glGetMultisamplefv
		glGetMultisamplefv = (PROC_glGetMultisamplefv)GetOpenGLFunction("glGetMultisamplefv");
		#endif

		#ifdef HAVING_glSampleMaski
		glSampleMaski = (PROC_glSampleMaski)GetOpenGLFunction("glSampleMaski");
		#endif

		#ifdef HAVING_glBindFragDataLocationIndexed
		glBindFragDataLocationIndexed = (PROC_glBindFragDataLocationIndexed)GetOpenGLFunction("glBindFragDataLocationIndexed");
		#endif

		#ifdef HAVING_glGetFragDataIndex
		glGetFragDataIndex = (PROC_glGetFragDataIndex)GetOpenGLFunction("glGetFragDataIndex");
		#endif

		#ifdef HAVING_glGenSamplers
		glGenSamplers = (PROC_glGenSamplers)GetOpenGLFunction("glGenSamplers");
		#endif

		#ifdef HAVING_glDeleteSamplers
		glDeleteSamplers = (PROC_glDeleteSamplers)GetOpenGLFunction("glDeleteSamplers");
		#endif

		#ifdef HAVING_glIsSampler
		glIsSampler = (PROC_glIsSampler)GetOpenGLFunction("glIsSampler");
		#endif

		#ifdef HAVING_glBindSampler
		glBindSampler = (PROC_glBindSampler)GetOpenGLFunction("glBindSampler");
		#endif

		#ifdef HAVING_glSamplerParameteri
		glSamplerParameteri = (PROC_glSamplerParameteri)GetOpenGLFunction("glSamplerParameteri");
		#endif

		#ifdef HAVING_glSamplerParameteriv
		glSamplerParameteriv = (PROC_glSamplerParameteriv)GetOpenGLFunction("glSamplerParameteriv");
		#endif

		#ifdef HAVING_glSamplerParameterf
		glSamplerParameterf = (PROC_glSamplerParameterf)GetOpenGLFunction("glSamplerParameterf");
		#endif

		#ifdef HAVING_glSamplerParameterfv
		glSamplerParameterfv = (PROC_glSamplerParameterfv)GetOpenGLFunction("glSamplerParameterfv");
		#endif

		#ifdef HAVING_glSamplerParameterIiv
		glSamplerParameterIiv = (PROC_glSamplerParameterIiv)GetOpenGLFunction("glSamplerParameterIiv");
		#endif

		#ifdef HAVING_glSamplerParameterIuiv
		glSamplerParameterIuiv = (PROC_glSamplerParameterIuiv)GetOpenGLFunction("glSamplerParameterIuiv");
		#endif

		#ifdef HAVING_glGetSamplerParameteriv
		glGetSamplerParameteriv = (PROC_glGetSamplerParameteriv)GetOpenGLFunction("glGetSamplerParameteriv");
		#endif

		#ifdef HAVING_glGetSamplerParameterIiv
		glGetSamplerParameterIiv = (PROC_glGetSamplerParameterIiv)GetOpenGLFunction("glGetSamplerParameterIiv");
		#endif

		#ifdef HAVING_glGetSamplerParameterfv
		glGetSamplerParameterfv = (PROC_glGetSamplerParameterfv)GetOpenGLFunction("glGetSamplerParameterfv");
		#endif

		#ifdef HAVING_glGetSamplerParameterIuiv
		glGetSamplerParameterIuiv = (PROC_glGetSamplerParameterIuiv)GetOpenGLFunction("glGetSamplerParameterIuiv");
		#endif

		#ifdef HAVING_glQueryCounter
		glQueryCounter = (PROC_glQueryCounter)GetOpenGLFunction("glQueryCounter");
		#endif

		#ifdef HAVING_glGetQueryObjecti64v
		glGetQueryObjecti64v = (PROC_glGetQueryObjecti64v)GetOpenGLFunction("glGetQueryObjecti64v");
		#endif

		#ifdef HAVING_glGetQueryObjectui64v
		glGetQueryObjectui64v = (PROC_glGetQueryObjectui64v)GetOpenGLFunction("glGetQueryObjectui64v");
		#endif

		#ifdef HAVING_glVertexAttribDivisor
		glVertexAttribDivisor = (PROC_glVertexAttribDivisor)GetOpenGLFunction("glVertexAttribDivisor");
		#endif

		#ifdef HAVING_glVertexAttribP1ui
		glVertexAttribP1ui = (PROC_glVertexAttribP1ui)GetOpenGLFunction("glVertexAttribP1ui");
		#endif

		#ifdef HAVING_glVertexAttribP1uiv
		glVertexAttribP1uiv = (PROC_glVertexAttribP1uiv)GetOpenGLFunction("glVertexAttribP1uiv");
		#endif

		#ifdef HAVING_glVertexAttribP2ui
		glVertexAttribP2ui = (PROC_glVertexAttribP2ui)GetOpenGLFunction("glVertexAttribP2ui");
		#endif

		#ifdef HAVING_glVertexAttribP2uiv
		glVertexAttribP2uiv = (PROC_glVertexAttribP2uiv)GetOpenGLFunction("glVertexAttribP2uiv");
		#endif

		#ifdef HAVING_glVertexAttribP3ui
		glVertexAttribP3ui = (PROC_glVertexAttribP3ui)GetOpenGLFunction("glVertexAttribP3ui");
		#endif

		#ifdef HAVING_glVertexAttribP3uiv
		glVertexAttribP3uiv = (PROC_glVertexAttribP3uiv)GetOpenGLFunction("glVertexAttribP3uiv");
		#endif

		#ifdef HAVING_glVertexAttribP4ui
		glVertexAttribP4ui = (PROC_glVertexAttribP4ui)GetOpenGLFunction("glVertexAttribP4ui");
		#endif

		#ifdef HAVING_glVertexAttribP4uiv
		glVertexAttribP4uiv = (PROC_glVertexAttribP4uiv)GetOpenGLFunction("glVertexAttribP4uiv");
		#endif

		#ifdef HAVING_glMinSampleShading
		glMinSampleShading = (PROC_glMinSampleShading)GetOpenGLFunction("glMinSampleShading");
		#endif

		#ifdef HAVING_glBlendEquationi
		glBlendEquationi = (PROC_glBlendEquationi)GetOpenGLFunction("glBlendEquationi");
		#endif

		#ifdef HAVING_glBlendEquationSeparatei
		glBlendEquationSeparatei = (PROC_glBlendEquationSeparatei)GetOpenGLFunction("glBlendEquationSeparatei");
		#endif

		#ifdef HAVING_glBlendFunci
		glBlendFunci = (PROC_glBlendFunci)GetOpenGLFunction("glBlendFunci");
		#endif

		#ifdef HAVING_glBlendFuncSeparatei
		glBlendFuncSeparatei = (PROC_glBlendFuncSeparatei)GetOpenGLFunction("glBlendFuncSeparatei");
		#endif

		#ifdef HAVING_glDrawArraysIndirect
		glDrawArraysIndirect = (PROC_glDrawArraysIndirect)GetOpenGLFunction("glDrawArraysIndirect");
		#endif

		#ifdef HAVING_glDrawElementsIndirect
		glDrawElementsIndirect = (PROC_glDrawElementsIndirect)GetOpenGLFunction("glDrawElementsIndirect");
		#endif

		#ifdef HAVING_glUniform1d
		glUniform1d = (PROC_glUniform1d)GetOpenGLFunction("glUniform1d");
		#endif

		#ifdef HAVING_glUniform2d
		glUniform2d = (PROC_glUniform2d)GetOpenGLFunction("glUniform2d");
		#endif

		#ifdef HAVING_glUniform3d
		glUniform3d = (PROC_glUniform3d)GetOpenGLFunction("glUniform3d");
		#endif

		#ifdef HAVING_glUniform4d
		glUniform4d = (PROC_glUniform4d)GetOpenGLFunction("glUniform4d");
		#endif

		#ifdef HAVING_glUniform1dv
		glUniform1dv = (PROC_glUniform1dv)GetOpenGLFunction("glUniform1dv");
		#endif

		#ifdef HAVING_glUniform2dv
		glUniform2dv = (PROC_glUniform2dv)GetOpenGLFunction("glUniform2dv");
		#endif

		#ifdef HAVING_glUniform3dv
		glUniform3dv = (PROC_glUniform3dv)GetOpenGLFunction("glUniform3dv");
		#endif

		#ifdef HAVING_glUniform4dv
		glUniform4dv = (PROC_glUniform4dv)GetOpenGLFunction("glUniform4dv");
		#endif

		#ifdef HAVING_glUniformMatrix2dv
		glUniformMatrix2dv = (PROC_glUniformMatrix2dv)GetOpenGLFunction("glUniformMatrix2dv");
		#endif

		#ifdef HAVING_glUniformMatrix3dv
		glUniformMatrix3dv = (PROC_glUniformMatrix3dv)GetOpenGLFunction("glUniformMatrix3dv");
		#endif

		#ifdef HAVING_glUniformMatrix4dv
		glUniformMatrix4dv = (PROC_glUniformMatrix4dv)GetOpenGLFunction("glUniformMatrix4dv");
		#endif

		#ifdef HAVING_glUniformMatrix2x3dv
		glUniformMatrix2x3dv = (PROC_glUniformMatrix2x3dv)GetOpenGLFunction("glUniformMatrix2x3dv");
		#endif

		#ifdef HAVING_glUniformMatrix2x4dv
		glUniformMatrix2x4dv = (PROC_glUniformMatrix2x4dv)GetOpenGLFunction("glUniformMatrix2x4dv");
		#endif

		#ifdef HAVING_glUniformMatrix3x2dv
		glUniformMatrix3x2dv = (PROC_glUniformMatrix3x2dv)GetOpenGLFunction("glUniformMatrix3x2dv");
		#endif

		#ifdef HAVING_glUniformMatrix3x4dv
		glUniformMatrix3x4dv = (PROC_glUniformMatrix3x4dv)GetOpenGLFunction("glUniformMatrix3x4dv");
		#endif

		#ifdef HAVING_glUniformMatrix4x2dv
		glUniformMatrix4x2dv = (PROC_glUniformMatrix4x2dv)GetOpenGLFunction("glUniformMatrix4x2dv");
		#endif

		#ifdef HAVING_glUniformMatrix4x3dv
		glUniformMatrix4x3dv = (PROC_glUniformMatrix4x3dv)GetOpenGLFunction("glUniformMatrix4x3dv");
		#endif

		#ifdef HAVING_glGetUniformdv
		glGetUniformdv = (PROC_glGetUniformdv)GetOpenGLFunction("glGetUniformdv");
		#endif

		#ifdef HAVING_glGetSubroutineUniformLocation
		glGetSubroutineUniformLocation = (PROC_glGetSubroutineUniformLocation)GetOpenGLFunction("glGetSubroutineUniformLocation");
		#endif

		#ifdef HAVING_glGetSubroutineIndex
		glGetSubroutineIndex = (PROC_glGetSubroutineIndex)GetOpenGLFunction("glGetSubroutineIndex");
		#endif

		#ifdef HAVING_glGetActiveSubroutineUniformiv
		glGetActiveSubroutineUniformiv = (PROC_glGetActiveSubroutineUniformiv)GetOpenGLFunction("glGetActiveSubroutineUniformiv");
		#endif

		#ifdef HAVING_glGetActiveSubroutineUniformName
		glGetActiveSubroutineUniformName = (PROC_glGetActiveSubroutineUniformName)GetOpenGLFunction("glGetActiveSubroutineUniformName");
		#endif

		#ifdef HAVING_glGetActiveSubroutineName
		glGetActiveSubroutineName = (PROC_glGetActiveSubroutineName)GetOpenGLFunction("glGetActiveSubroutineName");
		#endif

		#ifdef HAVING_glUniformSubroutinesuiv
		glUniformSubroutinesuiv = (PROC_glUniformSubroutinesuiv)GetOpenGLFunction("glUniformSubroutinesuiv");
		#endif

		#ifdef HAVING_glGetUniformSubroutineuiv
		glGetUniformSubroutineuiv = (PROC_glGetUniformSubroutineuiv)GetOpenGLFunction("glGetUniformSubroutineuiv");
		#endif

		#ifdef HAVING_glGetProgramStageiv
		glGetProgramStageiv = (PROC_glGetProgramStageiv)GetOpenGLFunction("glGetProgramStageiv");
		#endif

		#ifdef HAVING_glPatchParameteri
		glPatchParameteri = (PROC_glPatchParameteri)GetOpenGLFunction("glPatchParameteri");
		#endif

		#ifdef HAVING_glPatchParameterfv
		glPatchParameterfv = (PROC_glPatchParameterfv)GetOpenGLFunction("glPatchParameterfv");
		#endif

		#ifdef HAVING_glBindTransformFeedback
		glBindTransformFeedback = (PROC_glBindTransformFeedback)GetOpenGLFunction("glBindTransformFeedback");
		#endif

		#ifdef HAVING_glDeleteTransformFeedbacks
		glDeleteTransformFeedbacks = (PROC_glDeleteTransformFeedbacks)GetOpenGLFunction("glDeleteTransformFeedbacks");
		#endif

		#ifdef HAVING_glGenTransformFeedbacks
		glGenTransformFeedbacks = (PROC_glGenTransformFeedbacks)GetOpenGLFunction("glGenTransformFeedbacks");
		#endif

		#ifdef HAVING_glIsTransformFeedback
		glIsTransformFeedback = (PROC_glIsTransformFeedback)GetOpenGLFunction("glIsTransformFeedback");
		#endif

		#ifdef HAVING_glPauseTransformFeedback
		glPauseTransformFeedback = (PROC_glPauseTransformFeedback)GetOpenGLFunction("glPauseTransformFeedback");
		#endif

		#ifdef HAVING_glResumeTransformFeedback
		glResumeTransformFeedback = (PROC_glResumeTransformFeedback)GetOpenGLFunction("glResumeTransformFeedback");
		#endif

		#ifdef HAVING_glDrawTransformFeedback
		glDrawTransformFeedback = (PROC_glDrawTransformFeedback)GetOpenGLFunction("glDrawTransformFeedback");
		#endif

		#ifdef HAVING_glDrawTransformFeedbackStream
		glDrawTransformFeedbackStream = (PROC_glDrawTransformFeedbackStream)GetOpenGLFunction("glDrawTransformFeedbackStream");
		#endif

		#ifdef HAVING_glBeginQueryIndexed
		glBeginQueryIndexed = (PROC_glBeginQueryIndexed)GetOpenGLFunction("glBeginQueryIndexed");
		#endif

		#ifdef HAVING_glEndQueryIndexed
		glEndQueryIndexed = (PROC_glEndQueryIndexed)GetOpenGLFunction("glEndQueryIndexed");
		#endif

		#ifdef HAVING_glGetQueryIndexediv
		glGetQueryIndexediv = (PROC_glGetQueryIndexediv)GetOpenGLFunction("glGetQueryIndexediv");
		#endif

		#ifdef HAVING_glReleaseShaderCompiler
		glReleaseShaderCompiler = (PROC_glReleaseShaderCompiler)GetOpenGLFunction("glReleaseShaderCompiler");
		#endif

		#ifdef HAVING_glShaderBinary
		glShaderBinary = (PROC_glShaderBinary)GetOpenGLFunction("glShaderBinary");
		#endif

		#ifdef HAVING_glGetShaderPrecisionFormat
		glGetShaderPrecisionFormat = (PROC_glGetShaderPrecisionFormat)GetOpenGLFunction("glGetShaderPrecisionFormat");
		#endif

		#ifdef HAVING_glDepthRangef
		glDepthRangef = (PROC_glDepthRangef)GetOpenGLFunction("glDepthRangef");
		#endif

		#ifdef HAVING_glClearDepthf
		glClearDepthf = (PROC_glClearDepthf)GetOpenGLFunction("glClearDepthf");
		#endif

		#ifdef HAVING_glGetProgramBinary
		glGetProgramBinary = (PROC_glGetProgramBinary)GetOpenGLFunction("glGetProgramBinary");
		#endif

		#ifdef HAVING_glProgramBinary
		glProgramBinary = (PROC_glProgramBinary)GetOpenGLFunction("glProgramBinary");
		#endif

		#ifdef HAVING_glProgramParameteri
		glProgramParameteri = (PROC_glProgramParameteri)GetOpenGLFunction("glProgramParameteri");
		#endif

		#ifdef HAVING_glUseProgramStages
		glUseProgramStages = (PROC_glUseProgramStages)GetOpenGLFunction("glUseProgramStages");
		#endif

		#ifdef HAVING_glActiveShaderProgram
		glActiveShaderProgram = (PROC_glActiveShaderProgram)GetOpenGLFunction("glActiveShaderProgram");
		#endif

		#ifdef HAVING_glCreateShaderProgramv
		glCreateShaderProgramv = (PROC_glCreateShaderProgramv)GetOpenGLFunction("glCreateShaderProgramv");
		#endif

		#ifdef HAVING_glBindProgramPipeline
		glBindProgramPipeline = (PROC_glBindProgramPipeline)GetOpenGLFunction("glBindProgramPipeline");
		#endif

		#ifdef HAVING_glDeleteProgramPipelines
		glDeleteProgramPipelines = (PROC_glDeleteProgramPipelines)GetOpenGLFunction("glDeleteProgramPipelines");
		#endif

		#ifdef HAVING_glGenProgramPipelines
		glGenProgramPipelines = (PROC_glGenProgramPipelines)GetOpenGLFunction("glGenProgramPipelines");
		#endif

		#ifdef HAVING_glIsProgramPipeline
		glIsProgramPipeline = (PROC_glIsProgramPipeline)GetOpenGLFunction("glIsProgramPipeline");
		#endif

		#ifdef HAVING_glGetProgramPipelineiv
		glGetProgramPipelineiv = (PROC_glGetProgramPipelineiv)GetOpenGLFunction("glGetProgramPipelineiv");
		#endif

		#ifdef HAVING_glProgramUniform1i
		glProgramUniform1i = (PROC_glProgramUniform1i)GetOpenGLFunction("glProgramUniform1i");
		#endif

		#ifdef HAVING_glProgramUniform1iv
		glProgramUniform1iv = (PROC_glProgramUniform1iv)GetOpenGLFunction("glProgramUniform1iv");
		#endif

		#ifdef HAVING_glProgramUniform1f
		glProgramUniform1f = (PROC_glProgramUniform1f)GetOpenGLFunction("glProgramUniform1f");
		#endif

		#ifdef HAVING_glProgramUniform1fv
		glProgramUniform1fv = (PROC_glProgramUniform1fv)GetOpenGLFunction("glProgramUniform1fv");
		#endif

		#ifdef HAVING_glProgramUniform1d
		glProgramUniform1d = (PROC_glProgramUniform1d)GetOpenGLFunction("glProgramUniform1d");
		#endif

		#ifdef HAVING_glProgramUniform1dv
		glProgramUniform1dv = (PROC_glProgramUniform1dv)GetOpenGLFunction("glProgramUniform1dv");
		#endif

		#ifdef HAVING_glProgramUniform1ui
		glProgramUniform1ui = (PROC_glProgramUniform1ui)GetOpenGLFunction("glProgramUniform1ui");
		#endif

		#ifdef HAVING_glProgramUniform1uiv
		glProgramUniform1uiv = (PROC_glProgramUniform1uiv)GetOpenGLFunction("glProgramUniform1uiv");
		#endif

		#ifdef HAVING_glProgramUniform2i
		glProgramUniform2i = (PROC_glProgramUniform2i)GetOpenGLFunction("glProgramUniform2i");
		#endif

		#ifdef HAVING_glProgramUniform2iv
		glProgramUniform2iv = (PROC_glProgramUniform2iv)GetOpenGLFunction("glProgramUniform2iv");
		#endif

		#ifdef HAVING_glProgramUniform2f
		glProgramUniform2f = (PROC_glProgramUniform2f)GetOpenGLFunction("glProgramUniform2f");
		#endif

		#ifdef HAVING_glProgramUniform2fv
		glProgramUniform2fv = (PROC_glProgramUniform2fv)GetOpenGLFunction("glProgramUniform2fv");
		#endif

		#ifdef HAVING_glProgramUniform2d
		glProgramUniform2d = (PROC_glProgramUniform2d)GetOpenGLFunction("glProgramUniform2d");
		#endif

		#ifdef HAVING_glProgramUniform2dv
		glProgramUniform2dv = (PROC_glProgramUniform2dv)GetOpenGLFunction("glProgramUniform2dv");
		#endif

		#ifdef HAVING_glProgramUniform2ui
		glProgramUniform2ui = (PROC_glProgramUniform2ui)GetOpenGLFunction("glProgramUniform2ui");
		#endif

		#ifdef HAVING_glProgramUniform2uiv
		glProgramUniform2uiv = (PROC_glProgramUniform2uiv)GetOpenGLFunction("glProgramUniform2uiv");
		#endif

		#ifdef HAVING_glProgramUniform3i
		glProgramUniform3i = (PROC_glProgramUniform3i)GetOpenGLFunction("glProgramUniform3i");
		#endif

		#ifdef HAVING_glProgramUniform3iv
		glProgramUniform3iv = (PROC_glProgramUniform3iv)GetOpenGLFunction("glProgramUniform3iv");
		#endif

		#ifdef HAVING_glProgramUniform3f
		glProgramUniform3f = (PROC_glProgramUniform3f)GetOpenGLFunction("glProgramUniform3f");
		#endif

		#ifdef HAVING_glProgramUniform3fv
		glProgramUniform3fv = (PROC_glProgramUniform3fv)GetOpenGLFunction("glProgramUniform3fv");
		#endif

		#ifdef HAVING_glProgramUniform3d
		glProgramUniform3d = (PROC_glProgramUniform3d)GetOpenGLFunction("glProgramUniform3d");
		#endif

		#ifdef HAVING_glProgramUniform3dv
		glProgramUniform3dv = (PROC_glProgramUniform3dv)GetOpenGLFunction("glProgramUniform3dv");
		#endif

		#ifdef HAVING_glProgramUniform3ui
		glProgramUniform3ui = (PROC_glProgramUniform3ui)GetOpenGLFunction("glProgramUniform3ui");
		#endif

		#ifdef HAVING_glProgramUniform3uiv
		glProgramUniform3uiv = (PROC_glProgramUniform3uiv)GetOpenGLFunction("glProgramUniform3uiv");
		#endif

		#ifdef HAVING_glProgramUniform4i
		glProgramUniform4i = (PROC_glProgramUniform4i)GetOpenGLFunction("glProgramUniform4i");
		#endif

		#ifdef HAVING_glProgramUniform4iv
		glProgramUniform4iv = (PROC_glProgramUniform4iv)GetOpenGLFunction("glProgramUniform4iv");
		#endif

		#ifdef HAVING_glProgramUniform4f
		glProgramUniform4f = (PROC_glProgramUniform4f)GetOpenGLFunction("glProgramUniform4f");
		#endif

		#ifdef HAVING_glProgramUniform4fv
		glProgramUniform4fv = (PROC_glProgramUniform4fv)GetOpenGLFunction("glProgramUniform4fv");
		#endif

		#ifdef HAVING_glProgramUniform4d
		glProgramUniform4d = (PROC_glProgramUniform4d)GetOpenGLFunction("glProgramUniform4d");
		#endif

		#ifdef HAVING_glProgramUniform4dv
		glProgramUniform4dv = (PROC_glProgramUniform4dv)GetOpenGLFunction("glProgramUniform4dv");
		#endif

		#ifdef HAVING_glProgramUniform4ui
		glProgramUniform4ui = (PROC_glProgramUniform4ui)GetOpenGLFunction("glProgramUniform4ui");
		#endif

		#ifdef HAVING_glProgramUniform4uiv
		glProgramUniform4uiv = (PROC_glProgramUniform4uiv)GetOpenGLFunction("glProgramUniform4uiv");
		#endif

		#ifdef HAVING_glProgramUniformMatrix2fv
		glProgramUniformMatrix2fv = (PROC_glProgramUniformMatrix2fv)GetOpenGLFunction("glProgramUniformMatrix2fv");
		#endif

		#ifdef HAVING_glProgramUniformMatrix3fv
		glProgramUniformMatrix3fv = (PROC_glProgramUniformMatrix3fv)GetOpenGLFunction("glProgramUniformMatrix3fv");
		#endif

		#ifdef HAVING_glProgramUniformMatrix4fv
		glProgramUniformMatrix4fv = (PROC_glProgramUniformMatrix4fv)GetOpenGLFunction("glProgramUniformMatrix4fv");
		#endif

		#ifdef HAVING_glProgramUniformMatrix2dv
		glProgramUniformMatrix2dv = (PROC_glProgramUniformMatrix2dv)GetOpenGLFunction("glProgramUniformMatrix2dv");
		#endif

		#ifdef HAVING_glProgramUniformMatrix3dv
		glProgramUniformMatrix3dv = (PROC_glProgramUniformMatrix3dv)GetOpenGLFunction("glProgramUniformMatrix3dv");
		#endif

		#ifdef HAVING_glProgramUniformMatrix4dv
		glProgramUniformMatrix4dv = (PROC_glProgramUniformMatrix4dv)GetOpenGLFunction("glProgramUniformMatrix4dv");
		#endif

		#ifdef HAVING_glProgramUniformMatrix2x3fv
		glProgramUniformMatrix2x3fv = (PROC_glProgramUniformMatrix2x3fv)GetOpenGLFunction("glProgramUniformMatrix2x3fv");
		#endif

		#ifdef HAVING_glProgramUniformMatrix3x2fv
		glProgramUniformMatrix3x2fv = (PROC_glProgramUniformMatrix3x2fv)GetOpenGLFunction("glProgramUniformMatrix3x2fv");
		#endif

		#ifdef HAVING_glProgramUniformMatrix2x4fv
		glProgramUniformMatrix2x4fv = (PROC_glProgramUniformMatrix2x4fv)GetOpenGLFunction("glProgramUniformMatrix2x4fv");
		#endif

		#ifdef HAVING_glProgramUniformMatrix4x2fv
		glProgramUniformMatrix4x2fv = (PROC_glProgramUniformMatrix4x2fv)GetOpenGLFunction("glProgramUniformMatrix4x2fv");
		#endif

		#ifdef HAVING_glProgramUniformMatrix3x4fv
		glProgramUniformMatrix3x4fv = (PROC_glProgramUniformMatrix3x4fv)GetOpenGLFunction("glProgramUniformMatrix3x4fv");
		#endif

		#ifdef HAVING_glProgramUniformMatrix4x3fv
		glProgramUniformMatrix4x3fv = (PROC_glProgramUniformMatrix4x3fv)GetOpenGLFunction("glProgramUniformMatrix4x3fv");
		#endif

		#ifdef HAVING_glProgramUniformMatrix2x3dv
		glProgramUniformMatrix2x3dv = (PROC_glProgramUniformMatrix2x3dv)GetOpenGLFunction("glProgramUniformMatrix2x3dv");
		#endif

		#ifdef HAVING_glProgramUniformMatrix3x2dv
		glProgramUniformMatrix3x2dv = (PROC_glProgramUniformMatrix3x2dv)GetOpenGLFunction("glProgramUniformMatrix3x2dv");
		#endif

		#ifdef HAVING_glProgramUniformMatrix2x4dv
		glProgramUniformMatrix2x4dv = (PROC_glProgramUniformMatrix2x4dv)GetOpenGLFunction("glProgramUniformMatrix2x4dv");
		#endif

		#ifdef HAVING_glProgramUniformMatrix4x2dv
		glProgramUniformMatrix4x2dv = (PROC_glProgramUniformMatrix4x2dv)GetOpenGLFunction("glProgramUniformMatrix4x2dv");
		#endif

		#ifdef HAVING_glProgramUniformMatrix3x4dv
		glProgramUniformMatrix3x4dv = (PROC_glProgramUniformMatrix3x4dv)GetOpenGLFunction("glProgramUniformMatrix3x4dv");
		#endif

		#ifdef HAVING_glProgramUniformMatrix4x3dv
		glProgramUniformMatrix4x3dv = (PROC_glProgramUniformMatrix4x3dv)GetOpenGLFunction("glProgramUniformMatrix4x3dv");
		#endif

		#ifdef HAVING_glValidateProgramPipeline
		glValidateProgramPipeline = (PROC_glValidateProgramPipeline)GetOpenGLFunction("glValidateProgramPipeline");
		#endif

		#ifdef HAVING_glGetProgramPipelineInfoLog
		glGetProgramPipelineInfoLog = (PROC_glGetProgramPipelineInfoLog)GetOpenGLFunction("glGetProgramPipelineInfoLog");
		#endif

		#ifdef HAVING_glVertexAttribL1d
		glVertexAttribL1d = (PROC_glVertexAttribL1d)GetOpenGLFunction("glVertexAttribL1d");
		#endif

		#ifdef HAVING_glVertexAttribL2d
		glVertexAttribL2d = (PROC_glVertexAttribL2d)GetOpenGLFunction("glVertexAttribL2d");
		#endif

		#ifdef HAVING_glVertexAttribL3d
		glVertexAttribL3d = (PROC_glVertexAttribL3d)GetOpenGLFunction("glVertexAttribL3d");
		#endif

		#ifdef HAVING_glVertexAttribL4d
		glVertexAttribL4d = (PROC_glVertexAttribL4d)GetOpenGLFunction("glVertexAttribL4d");
		#endif

		#ifdef HAVING_glVertexAttribL1dv
		glVertexAttribL1dv = (PROC_glVertexAttribL1dv)GetOpenGLFunction("glVertexAttribL1dv");
		#endif

		#ifdef HAVING_glVertexAttribL2dv
		glVertexAttribL2dv = (PROC_glVertexAttribL2dv)GetOpenGLFunction("glVertexAttribL2dv");
		#endif

		#ifdef HAVING_glVertexAttribL3dv
		glVertexAttribL3dv = (PROC_glVertexAttribL3dv)GetOpenGLFunction("glVertexAttribL3dv");
		#endif

		#ifdef HAVING_glVertexAttribL4dv
		glVertexAttribL4dv = (PROC_glVertexAttribL4dv)GetOpenGLFunction("glVertexAttribL4dv");
		#endif

		#ifdef HAVING_glVertexAttribLPointer
		glVertexAttribLPointer = (PROC_glVertexAttribLPointer)GetOpenGLFunction("glVertexAttribLPointer");
		#endif

		#ifdef HAVING_glGetVertexAttribLdv
		glGetVertexAttribLdv = (PROC_glGetVertexAttribLdv)GetOpenGLFunction("glGetVertexAttribLdv");
		#endif

		#ifdef HAVING_glViewportArrayv
		glViewportArrayv = (PROC_glViewportArrayv)GetOpenGLFunction("glViewportArrayv");
		#endif

		#ifdef HAVING_glViewportIndexedf
		glViewportIndexedf = (PROC_glViewportIndexedf)GetOpenGLFunction("glViewportIndexedf");
		#endif

		#ifdef HAVING_glViewportIndexedfv
		glViewportIndexedfv = (PROC_glViewportIndexedfv)GetOpenGLFunction("glViewportIndexedfv");
		#endif

		#ifdef HAVING_glScissorArrayv
		glScissorArrayv = (PROC_glScissorArrayv)GetOpenGLFunction("glScissorArrayv");
		#endif

		#ifdef HAVING_glScissorIndexed
		glScissorIndexed = (PROC_glScissorIndexed)GetOpenGLFunction("glScissorIndexed");
		#endif

		#ifdef HAVING_glScissorIndexedv
		glScissorIndexedv = (PROC_glScissorIndexedv)GetOpenGLFunction("glScissorIndexedv");
		#endif

		#ifdef HAVING_glDepthRangeArrayv
		glDepthRangeArrayv = (PROC_glDepthRangeArrayv)GetOpenGLFunction("glDepthRangeArrayv");
		#endif

		#ifdef HAVING_glDepthRangeIndexed
		glDepthRangeIndexed = (PROC_glDepthRangeIndexed)GetOpenGLFunction("glDepthRangeIndexed");
		#endif

		#ifdef HAVING_glGetFloati_v
		glGetFloati_v = (PROC_glGetFloati_v)GetOpenGLFunction("glGetFloati_v");
		#endif

		#ifdef HAVING_glGetDoublei_v
		glGetDoublei_v = (PROC_glGetDoublei_v)GetOpenGLFunction("glGetDoublei_v");
		#endif

		#ifdef HAVING_glDrawArraysInstancedBaseInstance
		glDrawArraysInstancedBaseInstance = (PROC_glDrawArraysInstancedBaseInstance)GetOpenGLFunction("glDrawArraysInstancedBaseInstance");
		#endif

		#ifdef HAVING_glDrawElementsInstancedBaseInstance
		glDrawElementsInstancedBaseInstance = (PROC_glDrawElementsInstancedBaseInstance)GetOpenGLFunction("glDrawElementsInstancedBaseInstance");
		#endif

		#ifdef HAVING_glDrawElementsInstancedBaseVertexBaseInstance
		glDrawElementsInstancedBaseVertexBaseInstance = (PROC_glDrawElementsInstancedBaseVertexBaseInstance)GetOpenGLFunction("glDrawElementsInstancedBaseVertexBaseInstance");
		#endif

		#ifdef HAVING_glGetInternalformativ
		glGetInternalformativ = (PROC_glGetInternalformativ)GetOpenGLFunction("glGetInternalformativ");
		#endif

		#ifdef HAVING_glGetActiveAtomicCounterBufferiv
		glGetActiveAtomicCounterBufferiv = (PROC_glGetActiveAtomicCounterBufferiv)GetOpenGLFunction("glGetActiveAtomicCounterBufferiv");
		#endif

		#ifdef HAVING_glBindImageTexture
		glBindImageTexture = (PROC_glBindImageTexture)GetOpenGLFunction("glBindImageTexture");
		#endif

		#ifdef HAVING_glMemoryBarrier
		glMemoryBarrier = (PROC_glMemoryBarrier)GetOpenGLFunction("glMemoryBarrier");
		#endif

		#ifdef HAVING_glTexStorage1D
		glTexStorage1D = (PROC_glTexStorage1D)GetOpenGLFunction("glTexStorage1D");
		#endif

		#ifdef HAVING_glTexStorage2D
		glTexStorage2D = (PROC_glTexStorage2D)GetOpenGLFunction("glTexStorage2D");
		#endif

		#ifdef HAVING_glTexStorage3D
		glTexStorage3D = (PROC_glTexStorage3D)GetOpenGLFunction("glTexStorage3D");
		#endif

		#ifdef HAVING_glDrawTransformFeedbackInstanced
		glDrawTransformFeedbackInstanced = (PROC_glDrawTransformFeedbackInstanced)GetOpenGLFunction("glDrawTransformFeedbackInstanced");
		#endif

		#ifdef HAVING_glDrawTransformFeedbackStreamInstanced
		glDrawTransformFeedbackStreamInstanced = (PROC_glDrawTransformFeedbackStreamInstanced)GetOpenGLFunction("glDrawTransformFeedbackStreamInstanced");
		#endif

		#ifdef HAVING_glClearBufferData
		glClearBufferData = (PROC_glClearBufferData)GetOpenGLFunction("glClearBufferData");
		#endif

		#ifdef HAVING_glClearBufferSubData
		glClearBufferSubData = (PROC_glClearBufferSubData)GetOpenGLFunction("glClearBufferSubData");
		#endif

		#ifdef HAVING_glDispatchCompute
		glDispatchCompute = (PROC_glDispatchCompute)GetOpenGLFunction("glDispatchCompute");
		#endif

		#ifdef HAVING_glDispatchComputeIndirect
		glDispatchComputeIndirect = (PROC_glDispatchComputeIndirect)GetOpenGLFunction("glDispatchComputeIndirect");
		#endif

		#ifdef HAVING_glCopyImageSubData
		glCopyImageSubData = (PROC_glCopyImageSubData)GetOpenGLFunction("glCopyImageSubData");
		#endif

		#ifdef HAVING_glFramebufferParameteri
		glFramebufferParameteri = (PROC_glFramebufferParameteri)GetOpenGLFunction("glFramebufferParameteri");
		#endif

		#ifdef HAVING_glGetFramebufferParameteriv
		glGetFramebufferParameteriv = (PROC_glGetFramebufferParameteriv)GetOpenGLFunction("glGetFramebufferParameteriv");
		#endif

		#ifdef HAVING_glGetInternalformati64v
		glGetInternalformati64v = (PROC_glGetInternalformati64v)GetOpenGLFunction("glGetInternalformati64v");
		#endif

		#ifdef HAVING_glInvalidateTexSubImage
		glInvalidateTexSubImage = (PROC_glInvalidateTexSubImage)GetOpenGLFunction("glInvalidateTexSubImage");
		#endif

		#ifdef HAVING_glInvalidateTexImage
		glInvalidateTexImage = (PROC_glInvalidateTexImage)GetOpenGLFunction("glInvalidateTexImage");
		#endif

		#ifdef HAVING_glInvalidateBufferSubData
		glInvalidateBufferSubData = (PROC_glInvalidateBufferSubData)GetOpenGLFunction("glInvalidateBufferSubData");
		#endif

		#ifdef HAVING_glInvalidateBufferData
		glInvalidateBufferData = (PROC_glInvalidateBufferData)GetOpenGLFunction("glInvalidateBufferData");
		#endif

		#ifdef HAVING_glInvalidateFramebuffer
		glInvalidateFramebuffer = (PROC_glInvalidateFramebuffer)GetOpenGLFunction("glInvalidateFramebuffer");
		#endif

		#ifdef HAVING_glInvalidateSubFramebuffer
		glInvalidateSubFramebuffer = (PROC_glInvalidateSubFramebuffer)GetOpenGLFunction("glInvalidateSubFramebuffer");
		#endif

		#ifdef HAVING_glMultiDrawArraysIndirect
		glMultiDrawArraysIndirect = (PROC_glMultiDrawArraysIndirect)GetOpenGLFunction("glMultiDrawArraysIndirect");
		#endif

		#ifdef HAVING_glMultiDrawElementsIndirect
		glMultiDrawElementsIndirect = (PROC_glMultiDrawElementsIndirect)GetOpenGLFunction("glMultiDrawElementsIndirect");
		#endif

		#ifdef HAVING_glGetProgramInterfaceiv
		glGetProgramInterfaceiv = (PROC_glGetProgramInterfaceiv)GetOpenGLFunction("glGetProgramInterfaceiv");
		#endif

		#ifdef HAVING_glGetProgramResourceIndex
		glGetProgramResourceIndex = (PROC_glGetProgramResourceIndex)GetOpenGLFunction("glGetProgramResourceIndex");
		#endif

		#ifdef HAVING_glGetProgramResourceName
		glGetProgramResourceName = (PROC_glGetProgramResourceName)GetOpenGLFunction("glGetProgramResourceName");
		#endif

		#ifdef HAVING_glGetProgramResourceiv
		glGetProgramResourceiv = (PROC_glGetProgramResourceiv)GetOpenGLFunction("glGetProgramResourceiv");
		#endif

		#ifdef HAVING_glGetProgramResourceLocation
		glGetProgramResourceLocation = (PROC_glGetProgramResourceLocation)GetOpenGLFunction("glGetProgramResourceLocation");
		#endif

		#ifdef HAVING_glGetProgramResourceLocationIndex
		glGetProgramResourceLocationIndex = (PROC_glGetProgramResourceLocationIndex)GetOpenGLFunction("glGetProgramResourceLocationIndex");
		#endif

		#ifdef HAVING_glShaderStorageBlockBinding
		glShaderStorageBlockBinding = (PROC_glShaderStorageBlockBinding)GetOpenGLFunction("glShaderStorageBlockBinding");
		#endif

		#ifdef HAVING_glTexBufferRange
		glTexBufferRange = (PROC_glTexBufferRange)GetOpenGLFunction("glTexBufferRange");
		#endif

		#ifdef HAVING_glTexStorage2DMultisample
		glTexStorage2DMultisample = (PROC_glTexStorage2DMultisample)GetOpenGLFunction("glTexStorage2DMultisample");
		#endif

		#ifdef HAVING_glTexStorage3DMultisample
		glTexStorage3DMultisample = (PROC_glTexStorage3DMultisample)GetOpenGLFunction("glTexStorage3DMultisample");
		#endif

		#ifdef HAVING_glTextureView
		glTextureView = (PROC_glTextureView)GetOpenGLFunction("glTextureView");
		#endif

		#ifdef HAVING_glBindVertexBuffer
		glBindVertexBuffer = (PROC_glBindVertexBuffer)GetOpenGLFunction("glBindVertexBuffer");
		#endif

		#ifdef HAVING_glVertexAttribFormat
		glVertexAttribFormat = (PROC_glVertexAttribFormat)GetOpenGLFunction("glVertexAttribFormat");
		#endif

		#ifdef HAVING_glVertexAttribIFormat
		glVertexAttribIFormat = (PROC_glVertexAttribIFormat)GetOpenGLFunction("glVertexAttribIFormat");
		#endif

		#ifdef HAVING_glVertexAttribLFormat
		glVertexAttribLFormat = (PROC_glVertexAttribLFormat)GetOpenGLFunction("glVertexAttribLFormat");
		#endif

		#ifdef HAVING_glVertexAttribBinding
		glVertexAttribBinding = (PROC_glVertexAttribBinding)GetOpenGLFunction("glVertexAttribBinding");
		#endif

		#ifdef HAVING_glVertexBindingDivisor
		glVertexBindingDivisor = (PROC_glVertexBindingDivisor)GetOpenGLFunction("glVertexBindingDivisor");
		#endif

		#ifdef HAVING_glDebugMessageControl
		glDebugMessageControl = (PROC_glDebugMessageControl)GetOpenGLFunction("glDebugMessageControl");
		#endif

		#ifdef HAVING_glDebugMessageInsert
		glDebugMessageInsert = (PROC_glDebugMessageInsert)GetOpenGLFunction("glDebugMessageInsert");
		#endif

		#ifdef HAVING_glDebugMessageCallback
		glDebugMessageCallback = (PROC_glDebugMessageCallback)GetOpenGLFunction("glDebugMessageCallback");
		#endif

		#ifdef HAVING_glGetDebugMessageLog
		glGetDebugMessageLog = (PROC_glGetDebugMessageLog)GetOpenGLFunction("glGetDebugMessageLog");
		#endif

		#ifdef HAVING_glPushDebugGroup
		glPushDebugGroup = (PROC_glPushDebugGroup)GetOpenGLFunction("glPushDebugGroup");
		#endif

		#ifdef HAVING_glPopDebugGroup
		glPopDebugGroup = (PROC_glPopDebugGroup)GetOpenGLFunction("glPopDebugGroup");
		#endif

		#ifdef HAVING_glObjectLabel
		glObjectLabel = (PROC_glObjectLabel)GetOpenGLFunction("glObjectLabel");
		#endif

		#ifdef HAVING_glGetObjectLabel
		glGetObjectLabel = (PROC_glGetObjectLabel)GetOpenGLFunction("glGetObjectLabel");
		#endif

		#ifdef HAVING_glObjectPtrLabel
		glObjectPtrLabel = (PROC_glObjectPtrLabel)GetOpenGLFunction("glObjectPtrLabel");
		#endif

		#ifdef HAVING_glGetObjectPtrLabel
		glGetObjectPtrLabel = (PROC_glGetObjectPtrLabel)GetOpenGLFunction("glGetObjectPtrLabel");
		#endif

		#ifdef HAVING_glBufferStorage
		glBufferStorage = (PROC_glBufferStorage)GetOpenGLFunction("glBufferStorage");
		#endif

		#ifdef HAVING_glClearTexImage
		glClearTexImage = (PROC_glClearTexImage)GetOpenGLFunction("glClearTexImage");
		#endif

		#ifdef HAVING_glClearTexSubImage
		glClearTexSubImage = (PROC_glClearTexSubImage)GetOpenGLFunction("glClearTexSubImage");
		#endif

		#ifdef HAVING_glBindBuffersBase
		glBindBuffersBase = (PROC_glBindBuffersBase)GetOpenGLFunction("glBindBuffersBase");
		#endif

		#ifdef HAVING_glBindBuffersRange
		glBindBuffersRange = (PROC_glBindBuffersRange)GetOpenGLFunction("glBindBuffersRange");
		#endif

		#ifdef HAVING_glBindTextures
		glBindTextures = (PROC_glBindTextures)GetOpenGLFunction("glBindTextures");
		#endif

		#ifdef HAVING_glBindSamplers
		glBindSamplers = (PROC_glBindSamplers)GetOpenGLFunction("glBindSamplers");
		#endif

		#ifdef HAVING_glBindImageTextures
		glBindImageTextures = (PROC_glBindImageTextures)GetOpenGLFunction("glBindImageTextures");
		#endif

		#ifdef HAVING_glBindVertexBuffers
		glBindVertexBuffers = (PROC_glBindVertexBuffers)GetOpenGLFunction("glBindVertexBuffers");
		#endif

		#ifdef HAVING_glClipControl
		glClipControl = (PROC_glClipControl)GetOpenGLFunction("glClipControl");
		#endif

		#ifdef HAVING_glCreateTransformFeedbacks
		glCreateTransformFeedbacks = (PROC_glCreateTransformFeedbacks)GetOpenGLFunction("glCreateTransformFeedbacks");
		#endif

		#ifdef HAVING_glTransformFeedbackBufferBase
		glTransformFeedbackBufferBase = (PROC_glTransformFeedbackBufferBase)GetOpenGLFunction("glTransformFeedbackBufferBase");
		#endif

		#ifdef HAVING_glTransformFeedbackBufferRange
		glTransformFeedbackBufferRange = (PROC_glTransformFeedbackBufferRange)GetOpenGLFunction("glTransformFeedbackBufferRange");
		#endif

		#ifdef HAVING_glGetTransformFeedbackiv
		glGetTransformFeedbackiv = (PROC_glGetTransformFeedbackiv)GetOpenGLFunction("glGetTransformFeedbackiv");
		#endif

		#ifdef HAVING_glGetTransformFeedbacki_v
		glGetTransformFeedbacki_v = (PROC_glGetTransformFeedbacki_v)GetOpenGLFunction("glGetTransformFeedbacki_v");
		#endif

		#ifdef HAVING_glGetTransformFeedbacki64_v
		glGetTransformFeedbacki64_v = (PROC_glGetTransformFeedbacki64_v)GetOpenGLFunction("glGetTransformFeedbacki64_v");
		#endif

		#ifdef HAVING_glCreateBuffers
		glCreateBuffers = (PROC_glCreateBuffers)GetOpenGLFunction("glCreateBuffers");
		#endif

		#ifdef HAVING_glNamedBufferStorage
		glNamedBufferStorage = (PROC_glNamedBufferStorage)GetOpenGLFunction("glNamedBufferStorage");
		#endif

		#ifdef HAVING_glNamedBufferData
		glNamedBufferData = (PROC_glNamedBufferData)GetOpenGLFunction("glNamedBufferData");
		#endif

		#ifdef HAVING_glNamedBufferSubData
		glNamedBufferSubData = (PROC_glNamedBufferSubData)GetOpenGLFunction("glNamedBufferSubData");
		#endif

		#ifdef HAVING_glCopyNamedBufferSubData
		glCopyNamedBufferSubData = (PROC_glCopyNamedBufferSubData)GetOpenGLFunction("glCopyNamedBufferSubData");
		#endif

		#ifdef HAVING_glClearNamedBufferData
		glClearNamedBufferData = (PROC_glClearNamedBufferData)GetOpenGLFunction("glClearNamedBufferData");
		#endif

		#ifdef HAVING_glClearNamedBufferSubData
		glClearNamedBufferSubData = (PROC_glClearNamedBufferSubData)GetOpenGLFunction("glClearNamedBufferSubData");
		#endif

		#ifdef HAVING_glMapNamedBuffer
		glMapNamedBuffer = (PROC_glMapNamedBuffer)GetOpenGLFunction("glMapNamedBuffer");
		#endif

		#ifdef HAVING_glMapNamedBufferRange
		glMapNamedBufferRange = (PROC_glMapNamedBufferRange)GetOpenGLFunction("glMapNamedBufferRange");
		#endif

		#ifdef HAVING_glUnmapNamedBuffer
		glUnmapNamedBuffer = (PROC_glUnmapNamedBuffer)GetOpenGLFunction("glUnmapNamedBuffer");
		#endif

		#ifdef HAVING_glFlushMappedNamedBufferRange
		glFlushMappedNamedBufferRange = (PROC_glFlushMappedNamedBufferRange)GetOpenGLFunction("glFlushMappedNamedBufferRange");
		#endif

		#ifdef HAVING_glGetNamedBufferParameteriv
		glGetNamedBufferParameteriv = (PROC_glGetNamedBufferParameteriv)GetOpenGLFunction("glGetNamedBufferParameteriv");
		#endif

		#ifdef HAVING_glGetNamedBufferParameteri64v
		glGetNamedBufferParameteri64v = (PROC_glGetNamedBufferParameteri64v)GetOpenGLFunction("glGetNamedBufferParameteri64v");
		#endif

		#ifdef HAVING_glGetNamedBufferPointerv
		glGetNamedBufferPointerv = (PROC_glGetNamedBufferPointerv)GetOpenGLFunction("glGetNamedBufferPointerv");
		#endif

		#ifdef HAVING_glGetNamedBufferSubData
		glGetNamedBufferSubData = (PROC_glGetNamedBufferSubData)GetOpenGLFunction("glGetNamedBufferSubData");
		#endif

		#ifdef HAVING_glCreateFramebuffers
		glCreateFramebuffers = (PROC_glCreateFramebuffers)GetOpenGLFunction("glCreateFramebuffers");
		#endif

		#ifdef HAVING_glNamedFramebufferRenderbuffer
		glNamedFramebufferRenderbuffer = (PROC_glNamedFramebufferRenderbuffer)GetOpenGLFunction("glNamedFramebufferRenderbuffer");
		#endif

		#ifdef HAVING_glNamedFramebufferParameteri
		glNamedFramebufferParameteri = (PROC_glNamedFramebufferParameteri)GetOpenGLFunction("glNamedFramebufferParameteri");
		#endif

		#ifdef HAVING_glNamedFramebufferTexture
		glNamedFramebufferTexture = (PROC_glNamedFramebufferTexture)GetOpenGLFunction("glNamedFramebufferTexture");
		#endif

		#ifdef HAVING_glNamedFramebufferTextureLayer
		glNamedFramebufferTextureLayer = (PROC_glNamedFramebufferTextureLayer)GetOpenGLFunction("glNamedFramebufferTextureLayer");
		#endif

		#ifdef HAVING_glNamedFramebufferDrawBuffer
		glNamedFramebufferDrawBuffer = (PROC_glNamedFramebufferDrawBuffer)GetOpenGLFunction("glNamedFramebufferDrawBuffer");
		#endif

		#ifdef HAVING_glNamedFramebufferDrawBuffers
		glNamedFramebufferDrawBuffers = (PROC_glNamedFramebufferDrawBuffers)GetOpenGLFunction("glNamedFramebufferDrawBuffers");
		#endif

		#ifdef HAVING_glNamedFramebufferReadBuffer
		glNamedFramebufferReadBuffer = (PROC_glNamedFramebufferReadBuffer)GetOpenGLFunction("glNamedFramebufferReadBuffer");
		#endif

		#ifdef HAVING_glInvalidateNamedFramebufferData
		glInvalidateNamedFramebufferData = (PROC_glInvalidateNamedFramebufferData)GetOpenGLFunction("glInvalidateNamedFramebufferData");
		#endif

		#ifdef HAVING_glInvalidateNamedFramebufferSubData
		glInvalidateNamedFramebufferSubData = (PROC_glInvalidateNamedFramebufferSubData)GetOpenGLFunction("glInvalidateNamedFramebufferSubData");
		#endif

		#ifdef HAVING_glClearNamedFramebufferiv
		glClearNamedFramebufferiv = (PROC_glClearNamedFramebufferiv)GetOpenGLFunction("glClearNamedFramebufferiv");
		#endif

		#ifdef HAVING_glClearNamedFramebufferuiv
		glClearNamedFramebufferuiv = (PROC_glClearNamedFramebufferuiv)GetOpenGLFunction("glClearNamedFramebufferuiv");
		#endif

		#ifdef HAVING_glClearNamedFramebufferfv
		glClearNamedFramebufferfv = (PROC_glClearNamedFramebufferfv)GetOpenGLFunction("glClearNamedFramebufferfv");
		#endif

		#ifdef HAVING_glClearNamedFramebufferfi
		glClearNamedFramebufferfi = (PROC_glClearNamedFramebufferfi)GetOpenGLFunction("glClearNamedFramebufferfi");
		#endif

		#ifdef HAVING_glBlitNamedFramebuffer
		glBlitNamedFramebuffer = (PROC_glBlitNamedFramebuffer)GetOpenGLFunction("glBlitNamedFramebuffer");
		#endif

		#ifdef HAVING_glCheckNamedFramebufferStatus
		glCheckNamedFramebufferStatus = (PROC_glCheckNamedFramebufferStatus)GetOpenGLFunction("glCheckNamedFramebufferStatus");
		#endif

		#ifdef HAVING_glGetNamedFramebufferParameteriv
		glGetNamedFramebufferParameteriv = (PROC_glGetNamedFramebufferParameteriv)GetOpenGLFunction("glGetNamedFramebufferParameteriv");
		#endif

		#ifdef HAVING_glGetNamedFramebufferAttachmentParameteriv
		glGetNamedFramebufferAttachmentParameteriv = (PROC_glGetNamedFramebufferAttachmentParameteriv)GetOpenGLFunction("glGetNamedFramebufferAttachmentParameteriv");
		#endif

		#ifdef HAVING_glCreateRenderbuffers
		glCreateRenderbuffers = (PROC_glCreateRenderbuffers)GetOpenGLFunction("glCreateRenderbuffers");
		#endif

		#ifdef HAVING_glNamedRenderbufferStorage
		glNamedRenderbufferStorage = (PROC_glNamedRenderbufferStorage)GetOpenGLFunction("glNamedRenderbufferStorage");
		#endif

		#ifdef HAVING_glNamedRenderbufferStorageMultisample
		glNamedRenderbufferStorageMultisample = (PROC_glNamedRenderbufferStorageMultisample)GetOpenGLFunction("glNamedRenderbufferStorageMultisample");
		#endif

		#ifdef HAVING_glGetNamedRenderbufferParameteriv
		glGetNamedRenderbufferParameteriv = (PROC_glGetNamedRenderbufferParameteriv)GetOpenGLFunction("glGetNamedRenderbufferParameteriv");
		#endif

		#ifdef HAVING_glCreateTextures
		glCreateTextures = (PROC_glCreateTextures)GetOpenGLFunction("glCreateTextures");
		#endif

		#ifdef HAVING_glTextureBuffer
		glTextureBuffer = (PROC_glTextureBuffer)GetOpenGLFunction("glTextureBuffer");
		#endif

		#ifdef HAVING_glTextureBufferRange
		glTextureBufferRange = (PROC_glTextureBufferRange)GetOpenGLFunction("glTextureBufferRange");
		#endif

		#ifdef HAVING_glTextureStorage1D
		glTextureStorage1D = (PROC_glTextureStorage1D)GetOpenGLFunction("glTextureStorage1D");
		#endif

		#ifdef HAVING_glTextureStorage2D
		glTextureStorage2D = (PROC_glTextureStorage2D)GetOpenGLFunction("glTextureStorage2D");
		#endif

		#ifdef HAVING_glTextureStorage3D
		glTextureStorage3D = (PROC_glTextureStorage3D)GetOpenGLFunction("glTextureStorage3D");
		#endif

		#ifdef HAVING_glTextureStorage2DMultisample
		glTextureStorage2DMultisample = (PROC_glTextureStorage2DMultisample)GetOpenGLFunction("glTextureStorage2DMultisample");
		#endif

		#ifdef HAVING_glTextureStorage3DMultisample
		glTextureStorage3DMultisample = (PROC_glTextureStorage3DMultisample)GetOpenGLFunction("glTextureStorage3DMultisample");
		#endif

		#ifdef HAVING_glTextureSubImage1D
		glTextureSubImage1D = (PROC_glTextureSubImage1D)GetOpenGLFunction("glTextureSubImage1D");
		#endif

		#ifdef HAVING_glTextureSubImage2D
		glTextureSubImage2D = (PROC_glTextureSubImage2D)GetOpenGLFunction("glTextureSubImage2D");
		#endif

		#ifdef HAVING_glTextureSubImage3D
		glTextureSubImage3D = (PROC_glTextureSubImage3D)GetOpenGLFunction("glTextureSubImage3D");
		#endif

		#ifdef HAVING_glCompressedTextureSubImage1D
		glCompressedTextureSubImage1D = (PROC_glCompressedTextureSubImage1D)GetOpenGLFunction("glCompressedTextureSubImage1D");
		#endif

		#ifdef HAVING_glCompressedTextureSubImage2D
		glCompressedTextureSubImage2D = (PROC_glCompressedTextureSubImage2D)GetOpenGLFunction("glCompressedTextureSubImage2D");
		#endif

		#ifdef HAVING_glCompressedTextureSubImage3D
		glCompressedTextureSubImage3D = (PROC_glCompressedTextureSubImage3D)GetOpenGLFunction("glCompressedTextureSubImage3D");
		#endif

		#ifdef HAVING_glCopyTextureSubImage1D
		glCopyTextureSubImage1D = (PROC_glCopyTextureSubImage1D)GetOpenGLFunction("glCopyTextureSubImage1D");
		#endif

		#ifdef HAVING_glCopyTextureSubImage2D
		glCopyTextureSubImage2D = (PROC_glCopyTextureSubImage2D)GetOpenGLFunction("glCopyTextureSubImage2D");
		#endif

		#ifdef HAVING_glCopyTextureSubImage3D
		glCopyTextureSubImage3D = (PROC_glCopyTextureSubImage3D)GetOpenGLFunction("glCopyTextureSubImage3D");
		#endif

		#ifdef HAVING_glTextureParameterf
		glTextureParameterf = (PROC_glTextureParameterf)GetOpenGLFunction("glTextureParameterf");
		#endif

		#ifdef HAVING_glTextureParameterfv
		glTextureParameterfv = (PROC_glTextureParameterfv)GetOpenGLFunction("glTextureParameterfv");
		#endif

		#ifdef HAVING_glTextureParameteri
		glTextureParameteri = (PROC_glTextureParameteri)GetOpenGLFunction("glTextureParameteri");
		#endif

		#ifdef HAVING_glTextureParameterIiv
		glTextureParameterIiv = (PROC_glTextureParameterIiv)GetOpenGLFunction("glTextureParameterIiv");
		#endif

		#ifdef HAVING_glTextureParameterIuiv
		glTextureParameterIuiv = (PROC_glTextureParameterIuiv)GetOpenGLFunction("glTextureParameterIuiv");
		#endif

		#ifdef HAVING_glTextureParameteriv
		glTextureParameteriv = (PROC_glTextureParameteriv)GetOpenGLFunction("glTextureParameteriv");
		#endif

		#ifdef HAVING_glGenerateTextureMipmap
		glGenerateTextureMipmap = (PROC_glGenerateTextureMipmap)GetOpenGLFunction("glGenerateTextureMipmap");
		#endif

		#ifdef HAVING_glBindTextureUnit
		glBindTextureUnit = (PROC_glBindTextureUnit)GetOpenGLFunction("glBindTextureUnit");
		#endif

		#ifdef HAVING_glGetTextureImage
		glGetTextureImage = (PROC_glGetTextureImage)GetOpenGLFunction("glGetTextureImage");
		#endif

		#ifdef HAVING_glGetCompressedTextureImage
		glGetCompressedTextureImage = (PROC_glGetCompressedTextureImage)GetOpenGLFunction("glGetCompressedTextureImage");
		#endif

		#ifdef HAVING_glGetTextureLevelParameterfv
		glGetTextureLevelParameterfv = (PROC_glGetTextureLevelParameterfv)GetOpenGLFunction("glGetTextureLevelParameterfv");
		#endif

		#ifdef HAVING_glGetTextureLevelParameteriv
		glGetTextureLevelParameteriv = (PROC_glGetTextureLevelParameteriv)GetOpenGLFunction("glGetTextureLevelParameteriv");
		#endif

		#ifdef HAVING_glGetTextureParameterfv
		glGetTextureParameterfv = (PROC_glGetTextureParameterfv)GetOpenGLFunction("glGetTextureParameterfv");
		#endif

		#ifdef HAVING_glGetTextureParameterIiv
		glGetTextureParameterIiv = (PROC_glGetTextureParameterIiv)GetOpenGLFunction("glGetTextureParameterIiv");
		#endif

		#ifdef HAVING_glGetTextureParameterIuiv
		glGetTextureParameterIuiv = (PROC_glGetTextureParameterIuiv)GetOpenGLFunction("glGetTextureParameterIuiv");
		#endif

		#ifdef HAVING_glGetTextureParameteriv
		glGetTextureParameteriv = (PROC_glGetTextureParameteriv)GetOpenGLFunction("glGetTextureParameteriv");
		#endif

		#ifdef HAVING_glCreateVertexArrays
		glCreateVertexArrays = (PROC_glCreateVertexArrays)GetOpenGLFunction("glCreateVertexArrays");
		#endif

		#ifdef HAVING_glDisableVertexArrayAttrib
		glDisableVertexArrayAttrib = (PROC_glDisableVertexArrayAttrib)GetOpenGLFunction("glDisableVertexArrayAttrib");
		#endif

		#ifdef HAVING_glEnableVertexArrayAttrib
		glEnableVertexArrayAttrib = (PROC_glEnableVertexArrayAttrib)GetOpenGLFunction("glEnableVertexArrayAttrib");
		#endif

		#ifdef HAVING_glVertexArrayElementBuffer
		glVertexArrayElementBuffer = (PROC_glVertexArrayElementBuffer)GetOpenGLFunction("glVertexArrayElementBuffer");
		#endif

		#ifdef HAVING_glVertexArrayVertexBuffer
		glVertexArrayVertexBuffer = (PROC_glVertexArrayVertexBuffer)GetOpenGLFunction("glVertexArrayVertexBuffer");
		#endif

		#ifdef HAVING_glVertexArrayVertexBuffers
		glVertexArrayVertexBuffers = (PROC_glVertexArrayVertexBuffers)GetOpenGLFunction("glVertexArrayVertexBuffers");
		#endif

		#ifdef HAVING_glVertexArrayAttribBinding
		glVertexArrayAttribBinding = (PROC_glVertexArrayAttribBinding)GetOpenGLFunction("glVertexArrayAttribBinding");
		#endif

		#ifdef HAVING_glVertexArrayAttribFormat
		glVertexArrayAttribFormat = (PROC_glVertexArrayAttribFormat)GetOpenGLFunction("glVertexArrayAttribFormat");
		#endif

		#ifdef HAVING_glVertexArrayAttribIFormat
		glVertexArrayAttribIFormat = (PROC_glVertexArrayAttribIFormat)GetOpenGLFunction("glVertexArrayAttribIFormat");
		#endif

		#ifdef HAVING_glVertexArrayAttribLFormat
		glVertexArrayAttribLFormat = (PROC_glVertexArrayAttribLFormat)GetOpenGLFunction("glVertexArrayAttribLFormat");
		#endif

		#ifdef HAVING_glVertexArrayBindingDivisor
		glVertexArrayBindingDivisor = (PROC_glVertexArrayBindingDivisor)GetOpenGLFunction("glVertexArrayBindingDivisor");
		#endif

		#ifdef HAVING_glGetVertexArrayiv
		glGetVertexArrayiv = (PROC_glGetVertexArrayiv)GetOpenGLFunction("glGetVertexArrayiv");
		#endif

		#ifdef HAVING_glGetVertexArrayIndexediv
		glGetVertexArrayIndexediv = (PROC_glGetVertexArrayIndexediv)GetOpenGLFunction("glGetVertexArrayIndexediv");
		#endif

		#ifdef HAVING_glGetVertexArrayIndexed64iv
		glGetVertexArrayIndexed64iv = (PROC_glGetVertexArrayIndexed64iv)GetOpenGLFunction("glGetVertexArrayIndexed64iv");
		#endif

		#ifdef HAVING_glCreateSamplers
		glCreateSamplers = (PROC_glCreateSamplers)GetOpenGLFunction("glCreateSamplers");
		#endif

		#ifdef HAVING_glCreateProgramPipelines
		glCreateProgramPipelines = (PROC_glCreateProgramPipelines)GetOpenGLFunction("glCreateProgramPipelines");
		#endif

		#ifdef HAVING_glCreateQueries
		glCreateQueries = (PROC_glCreateQueries)GetOpenGLFunction("glCreateQueries");
		#endif

		#ifdef HAVING_glGetQueryBufferObjecti64v
		glGetQueryBufferObjecti64v = (PROC_glGetQueryBufferObjecti64v)GetOpenGLFunction("glGetQueryBufferObjecti64v");
		#endif

		#ifdef HAVING_glGetQueryBufferObjectiv
		glGetQueryBufferObjectiv = (PROC_glGetQueryBufferObjectiv)GetOpenGLFunction("glGetQueryBufferObjectiv");
		#endif

		#ifdef HAVING_glGetQueryBufferObjectui64v
		glGetQueryBufferObjectui64v = (PROC_glGetQueryBufferObjectui64v)GetOpenGLFunction("glGetQueryBufferObjectui64v");
		#endif

		#ifdef HAVING_glGetQueryBufferObjectuiv
		glGetQueryBufferObjectuiv = (PROC_glGetQueryBufferObjectuiv)GetOpenGLFunction("glGetQueryBufferObjectuiv");
		#endif

		#ifdef HAVING_glMemoryBarrierByRegion
		glMemoryBarrierByRegion = (PROC_glMemoryBarrierByRegion)GetOpenGLFunction("glMemoryBarrierByRegion");
		#endif

		#ifdef HAVING_glGetTextureSubImage
		glGetTextureSubImage = (PROC_glGetTextureSubImage)GetOpenGLFunction("glGetTextureSubImage");
		#endif

		#ifdef HAVING_glGetCompressedTextureSubImage
		glGetCompressedTextureSubImage = (PROC_glGetCompressedTextureSubImage)GetOpenGLFunction("glGetCompressedTextureSubImage");
		#endif

		#ifdef HAVING_glGetGraphicsResetStatus
		glGetGraphicsResetStatus = (PROC_glGetGraphicsResetStatus)GetOpenGLFunction("glGetGraphicsResetStatus");
		#endif

		#ifdef HAVING_glGetnCompressedTexImage
		glGetnCompressedTexImage = (PROC_glGetnCompressedTexImage)GetOpenGLFunction("glGetnCompressedTexImage");
		#endif

		#ifdef HAVING_glGetnTexImage
		glGetnTexImage = (PROC_glGetnTexImage)GetOpenGLFunction("glGetnTexImage");
		#endif

		#ifdef HAVING_glGetnUniformdv
		glGetnUniformdv = (PROC_glGetnUniformdv)GetOpenGLFunction("glGetnUniformdv");
		#endif

		#ifdef HAVING_glGetnUniformfv
		glGetnUniformfv = (PROC_glGetnUniformfv)GetOpenGLFunction("glGetnUniformfv");
		#endif

		#ifdef HAVING_glGetnUniformiv
		glGetnUniformiv = (PROC_glGetnUniformiv)GetOpenGLFunction("glGetnUniformiv");
		#endif

		#ifdef HAVING_glGetnUniformuiv
		glGetnUniformuiv = (PROC_glGetnUniformuiv)GetOpenGLFunction("glGetnUniformuiv");
		#endif

		#ifdef HAVING_glReadnPixels
		glReadnPixels = (PROC_glReadnPixels)GetOpenGLFunction("glReadnPixels");
		#endif

		#ifdef HAVING_glTextureBarrier
		glTextureBarrier = (PROC_glTextureBarrier)GetOpenGLFunction("glTextureBarrier");
		#endif


		return true;
	}

	#ifdef HAVING_glCullFace
	PROC_glCullFace glCullFace;
	#endif

	#ifdef HAVING_glFrontFace
	PROC_glFrontFace glFrontFace;
	#endif

	#ifdef HAVING_glHint
	PROC_glHint glHint;
	#endif

	#ifdef HAVING_glLineWidth
	PROC_glLineWidth glLineWidth;
	#endif

	#ifdef HAVING_glPointSize
	PROC_glPointSize glPointSize;
	#endif

	#ifdef HAVING_glPolygonMode
	PROC_glPolygonMode glPolygonMode;
	#endif

	#ifdef HAVING_glScissor
	PROC_glScissor glScissor;
	#endif

	#ifdef HAVING_glTexParameterf
	PROC_glTexParameterf glTexParameterf;
	#endif

	#ifdef HAVING_glTexParameterfv
	PROC_glTexParameterfv glTexParameterfv;
	#endif

	#ifdef HAVING_glTexParameteri
	PROC_glTexParameteri glTexParameteri;
	#endif

	#ifdef HAVING_glTexParameteriv
	PROC_glTexParameteriv glTexParameteriv;
	#endif

	#ifdef HAVING_glTexImage1D
	PROC_glTexImage1D glTexImage1D;
	#endif

	#ifdef HAVING_glTexImage2D
	PROC_glTexImage2D glTexImage2D;
	#endif

	#ifdef HAVING_glDrawBuffer
	PROC_glDrawBuffer glDrawBuffer;
	#endif

	#ifdef HAVING_glClear
	PROC_glClear glClear;
	#endif

	#ifdef HAVING_glClearColor
	PROC_glClearColor glClearColor;
	#endif

	#ifdef HAVING_glClearStencil
	PROC_glClearStencil glClearStencil;
	#endif

	#ifdef HAVING_glClearDepth
	PROC_glClearDepth glClearDepth;
	#endif

	#ifdef HAVING_glStencilMask
	PROC_glStencilMask glStencilMask;
	#endif

	#ifdef HAVING_glColorMask
	PROC_glColorMask glColorMask;
	#endif

	#ifdef HAVING_glDepthMask
	PROC_glDepthMask glDepthMask;
	#endif

	#ifdef HAVING_glDisable
	PROC_glDisable glDisable;
	#endif

	#ifdef HAVING_glEnable
	PROC_glEnable glEnable;
	#endif

	#ifdef HAVING_glFinish
	PROC_glFinish glFinish;
	#endif

	#ifdef HAVING_glFlush
	PROC_glFlush glFlush;
	#endif

	#ifdef HAVING_glBlendFunc
	PROC_glBlendFunc glBlendFunc;
	#endif

	#ifdef HAVING_glLogicOp
	PROC_glLogicOp glLogicOp;
	#endif

	#ifdef HAVING_glStencilFunc
	PROC_glStencilFunc glStencilFunc;
	#endif

	#ifdef HAVING_glStencilOp
	PROC_glStencilOp glStencilOp;
	#endif

	#ifdef HAVING_glDepthFunc
	PROC_glDepthFunc glDepthFunc;
	#endif

	#ifdef HAVING_glPixelStoref
	PROC_glPixelStoref glPixelStoref;
	#endif

	#ifdef HAVING_glPixelStorei
	PROC_glPixelStorei glPixelStorei;
	#endif

	#ifdef HAVING_glReadBuffer
	PROC_glReadBuffer glReadBuffer;
	#endif

	#ifdef HAVING_glReadPixels
	PROC_glReadPixels glReadPixels;
	#endif

	#ifdef HAVING_glGetBooleanv
	PROC_glGetBooleanv glGetBooleanv;
	#endif

	#ifdef HAVING_glGetDoublev
	PROC_glGetDoublev glGetDoublev;
	#endif

	#ifdef HAVING_glGetError
	PROC_glGetError glGetError;
	#endif

	#ifdef HAVING_glGetFloatv
	PROC_glGetFloatv glGetFloatv;
	#endif

	#ifdef HAVING_glGetIntegerv
	PROC_glGetIntegerv glGetIntegerv;
	#endif

	#ifdef HAVING_glGetString
	PROC_glGetString glGetString;
	#endif

	#ifdef HAVING_glGetTexImage
	PROC_glGetTexImage glGetTexImage;
	#endif

	#ifdef HAVING_glGetTexParameterfv
	PROC_glGetTexParameterfv glGetTexParameterfv;
	#endif

	#ifdef HAVING_glGetTexParameteriv
	PROC_glGetTexParameteriv glGetTexParameteriv;
	#endif

	#ifdef HAVING_glGetTexLevelParameterfv
	PROC_glGetTexLevelParameterfv glGetTexLevelParameterfv;
	#endif

	#ifdef HAVING_glGetTexLevelParameteriv
	PROC_glGetTexLevelParameteriv glGetTexLevelParameteriv;
	#endif

	#ifdef HAVING_glIsEnabled
	PROC_glIsEnabled glIsEnabled;
	#endif

	#ifdef HAVING_glDepthRange
	PROC_glDepthRange glDepthRange;
	#endif

	#ifdef HAVING_glViewport
	PROC_glViewport glViewport;
	#endif

	#ifdef HAVING_glDrawArrays
	PROC_glDrawArrays glDrawArrays;
	#endif

	#ifdef HAVING_glDrawElements
	PROC_glDrawElements glDrawElements;
	#endif

	#ifdef HAVING_glGetPointerv
	PROC_glGetPointerv glGetPointerv;
	#endif

	#ifdef HAVING_glPolygonOffset
	PROC_glPolygonOffset glPolygonOffset;
	#endif

	#ifdef HAVING_glCopyTexImage1D
	PROC_glCopyTexImage1D glCopyTexImage1D;
	#endif

	#ifdef HAVING_glCopyTexImage2D
	PROC_glCopyTexImage2D glCopyTexImage2D;
	#endif

	#ifdef HAVING_glCopyTexSubImage1D
	PROC_glCopyTexSubImage1D glCopyTexSubImage1D;
	#endif

	#ifdef HAVING_glCopyTexSubImage2D
	PROC_glCopyTexSubImage2D glCopyTexSubImage2D;
	#endif

	#ifdef HAVING_glTexSubImage1D
	PROC_glTexSubImage1D glTexSubImage1D;
	#endif

	#ifdef HAVING_glTexSubImage2D
	PROC_glTexSubImage2D glTexSubImage2D;
	#endif

	#ifdef HAVING_glBindTexture
	PROC_glBindTexture glBindTexture;
	#endif

	#ifdef HAVING_glDeleteTextures
	PROC_glDeleteTextures glDeleteTextures;
	#endif

	#ifdef HAVING_glGenTextures
	PROC_glGenTextures glGenTextures;
	#endif

	#ifdef HAVING_glIsTexture
	PROC_glIsTexture glIsTexture;
	#endif

	#ifdef HAVING_glDrawRangeElements
	PROC_glDrawRangeElements glDrawRangeElements;
	#endif

	#ifdef HAVING_glTexImage3D
	PROC_glTexImage3D glTexImage3D;
	#endif

	#ifdef HAVING_glTexSubImage3D
	PROC_glTexSubImage3D glTexSubImage3D;
	#endif

	#ifdef HAVING_glCopyTexSubImage3D
	PROC_glCopyTexSubImage3D glCopyTexSubImage3D;
	#endif

	#ifdef HAVING_glActiveTexture
	PROC_glActiveTexture glActiveTexture;
	#endif

	#ifdef HAVING_glSampleCoverage
	PROC_glSampleCoverage glSampleCoverage;
	#endif

	#ifdef HAVING_glCompressedTexImage3D
	PROC_glCompressedTexImage3D glCompressedTexImage3D;
	#endif

	#ifdef HAVING_glCompressedTexImage2D
	PROC_glCompressedTexImage2D glCompressedTexImage2D;
	#endif

	#ifdef HAVING_glCompressedTexImage1D
	PROC_glCompressedTexImage1D glCompressedTexImage1D;
	#endif

	#ifdef HAVING_glCompressedTexSubImage3D
	PROC_glCompressedTexSubImage3D glCompressedTexSubImage3D;
	#endif

	#ifdef HAVING_glCompressedTexSubImage2D
	PROC_glCompressedTexSubImage2D glCompressedTexSubImage2D;
	#endif

	#ifdef HAVING_glCompressedTexSubImage1D
	PROC_glCompressedTexSubImage1D glCompressedTexSubImage1D;
	#endif

	#ifdef HAVING_glGetCompressedTexImage
	PROC_glGetCompressedTexImage glGetCompressedTexImage;
	#endif

	#ifdef HAVING_glBlendFuncSeparate
	PROC_glBlendFuncSeparate glBlendFuncSeparate;
	#endif

	#ifdef HAVING_glMultiDrawArrays
	PROC_glMultiDrawArrays glMultiDrawArrays;
	#endif

	#ifdef HAVING_glMultiDrawElements
	PROC_glMultiDrawElements glMultiDrawElements;
	#endif

	#ifdef HAVING_glPointParameterf
	PROC_glPointParameterf glPointParameterf;
	#endif

	#ifdef HAVING_glPointParameterfv
	PROC_glPointParameterfv glPointParameterfv;
	#endif

	#ifdef HAVING_glPointParameteri
	PROC_glPointParameteri glPointParameteri;
	#endif

	#ifdef HAVING_glPointParameteriv
	PROC_glPointParameteriv glPointParameteriv;
	#endif

	#ifdef HAVING_glBlendColor
	PROC_glBlendColor glBlendColor;
	#endif

	#ifdef HAVING_glBlendEquation
	PROC_glBlendEquation glBlendEquation;
	#endif

	#ifdef HAVING_glGenQueries
	PROC_glGenQueries glGenQueries;
	#endif

	#ifdef HAVING_glDeleteQueries
	PROC_glDeleteQueries glDeleteQueries;
	#endif

	#ifdef HAVING_glIsQuery
	PROC_glIsQuery glIsQuery;
	#endif

	#ifdef HAVING_glBeginQuery
	PROC_glBeginQuery glBeginQuery;
	#endif

	#ifdef HAVING_glEndQuery
	PROC_glEndQuery glEndQuery;
	#endif

	#ifdef HAVING_glGetQueryiv
	PROC_glGetQueryiv glGetQueryiv;
	#endif

	#ifdef HAVING_glGetQueryObjectiv
	PROC_glGetQueryObjectiv glGetQueryObjectiv;
	#endif

	#ifdef HAVING_glGetQueryObjectuiv
	PROC_glGetQueryObjectuiv glGetQueryObjectuiv;
	#endif

	#ifdef HAVING_glBindBuffer
	PROC_glBindBuffer glBindBuffer;
	#endif

	#ifdef HAVING_glDeleteBuffers
	PROC_glDeleteBuffers glDeleteBuffers;
	#endif

	#ifdef HAVING_glGenBuffers
	PROC_glGenBuffers glGenBuffers;
	#endif

	#ifdef HAVING_glIsBuffer
	PROC_glIsBuffer glIsBuffer;
	#endif

	#ifdef HAVING_glBufferData
	PROC_glBufferData glBufferData;
	#endif

	#ifdef HAVING_glBufferSubData
	PROC_glBufferSubData glBufferSubData;
	#endif

	#ifdef HAVING_glGetBufferSubData
	PROC_glGetBufferSubData glGetBufferSubData;
	#endif

	#ifdef HAVING_glMapBuffer
	PROC_glMapBuffer glMapBuffer;
	#endif

	#ifdef HAVING_glUnmapBuffer
	PROC_glUnmapBuffer glUnmapBuffer;
	#endif

	#ifdef HAVING_glGetBufferParameteriv
	PROC_glGetBufferParameteriv glGetBufferParameteriv;
	#endif

	#ifdef HAVING_glGetBufferPointerv
	PROC_glGetBufferPointerv glGetBufferPointerv;
	#endif

	#ifdef HAVING_glBlendEquationSeparate
	PROC_glBlendEquationSeparate glBlendEquationSeparate;
	#endif

	#ifdef HAVING_glDrawBuffers
	PROC_glDrawBuffers glDrawBuffers;
	#endif

	#ifdef HAVING_glStencilOpSeparate
	PROC_glStencilOpSeparate glStencilOpSeparate;
	#endif

	#ifdef HAVING_glStencilFuncSeparate
	PROC_glStencilFuncSeparate glStencilFuncSeparate;
	#endif

	#ifdef HAVING_glStencilMaskSeparate
	PROC_glStencilMaskSeparate glStencilMaskSeparate;
	#endif

	#ifdef HAVING_glAttachShader
	PROC_glAttachShader glAttachShader;
	#endif

	#ifdef HAVING_glBindAttribLocation
	PROC_glBindAttribLocation glBindAttribLocation;
	#endif

	#ifdef HAVING_glCompileShader
	PROC_glCompileShader glCompileShader;
	#endif

	#ifdef HAVING_glCreateProgram
	PROC_glCreateProgram glCreateProgram;
	#endif

	#ifdef HAVING_glCreateShader
	PROC_glCreateShader glCreateShader;
	#endif

	#ifdef HAVING_glDeleteProgram
	PROC_glDeleteProgram glDeleteProgram;
	#endif

	#ifdef HAVING_glDeleteShader
	PROC_glDeleteShader glDeleteShader;
	#endif

	#ifdef HAVING_glDetachShader
	PROC_glDetachShader glDetachShader;
	#endif

	#ifdef HAVING_glDisableVertexAttribArray
	PROC_glDisableVertexAttribArray glDisableVertexAttribArray;
	#endif

	#ifdef HAVING_glEnableVertexAttribArray
	PROC_glEnableVertexAttribArray glEnableVertexAttribArray;
	#endif

	#ifdef HAVING_glGetActiveAttrib
	PROC_glGetActiveAttrib glGetActiveAttrib;
	#endif

	#ifdef HAVING_glGetActiveUniform
	PROC_glGetActiveUniform glGetActiveUniform;
	#endif

	#ifdef HAVING_glGetAttachedShaders
	PROC_glGetAttachedShaders glGetAttachedShaders;
	#endif

	#ifdef HAVING_glGetAttribLocation
	PROC_glGetAttribLocation glGetAttribLocation;
	#endif

	#ifdef HAVING_glGetProgramiv
	PROC_glGetProgramiv glGetProgramiv;
	#endif

	#ifdef HAVING_glGetProgramInfoLog
	PROC_glGetProgramInfoLog glGetProgramInfoLog;
	#endif

	#ifdef HAVING_glGetShaderiv
	PROC_glGetShaderiv glGetShaderiv;
	#endif

	#ifdef HAVING_glGetShaderInfoLog
	PROC_glGetShaderInfoLog glGetShaderInfoLog;
	#endif

	#ifdef HAVING_glGetShaderSource
	PROC_glGetShaderSource glGetShaderSource;
	#endif

	#ifdef HAVING_glGetUniformLocation
	PROC_glGetUniformLocation glGetUniformLocation;
	#endif

	#ifdef HAVING_glGetUniformfv
	PROC_glGetUniformfv glGetUniformfv;
	#endif

	#ifdef HAVING_glGetUniformiv
	PROC_glGetUniformiv glGetUniformiv;
	#endif

	#ifdef HAVING_glGetVertexAttribdv
	PROC_glGetVertexAttribdv glGetVertexAttribdv;
	#endif

	#ifdef HAVING_glGetVertexAttribfv
	PROC_glGetVertexAttribfv glGetVertexAttribfv;
	#endif

	#ifdef HAVING_glGetVertexAttribiv
	PROC_glGetVertexAttribiv glGetVertexAttribiv;
	#endif

	#ifdef HAVING_glGetVertexAttribPointerv
	PROC_glGetVertexAttribPointerv glGetVertexAttribPointerv;
	#endif

	#ifdef HAVING_glIsProgram
	PROC_glIsProgram glIsProgram;
	#endif

	#ifdef HAVING_glIsShader
	PROC_glIsShader glIsShader;
	#endif

	#ifdef HAVING_glLinkProgram
	PROC_glLinkProgram glLinkProgram;
	#endif

	#ifdef HAVING_glShaderSource
	PROC_glShaderSource glShaderSource;
	#endif

	#ifdef HAVING_glUseProgram
	PROC_glUseProgram glUseProgram;
	#endif

	#ifdef HAVING_glUniform1f
	PROC_glUniform1f glUniform1f;
	#endif

	#ifdef HAVING_glUniform2f
	PROC_glUniform2f glUniform2f;
	#endif

	#ifdef HAVING_glUniform3f
	PROC_glUniform3f glUniform3f;
	#endif

	#ifdef HAVING_glUniform4f
	PROC_glUniform4f glUniform4f;
	#endif

	#ifdef HAVING_glUniform1i
	PROC_glUniform1i glUniform1i;
	#endif

	#ifdef HAVING_glUniform2i
	PROC_glUniform2i glUniform2i;
	#endif

	#ifdef HAVING_glUniform3i
	PROC_glUniform3i glUniform3i;
	#endif

	#ifdef HAVING_glUniform4i
	PROC_glUniform4i glUniform4i;
	#endif

	#ifdef HAVING_glUniform1fv
	PROC_glUniform1fv glUniform1fv;
	#endif

	#ifdef HAVING_glUniform2fv
	PROC_glUniform2fv glUniform2fv;
	#endif

	#ifdef HAVING_glUniform3fv
	PROC_glUniform3fv glUniform3fv;
	#endif

	#ifdef HAVING_glUniform4fv
	PROC_glUniform4fv glUniform4fv;
	#endif

	#ifdef HAVING_glUniform1iv
	PROC_glUniform1iv glUniform1iv;
	#endif

	#ifdef HAVING_glUniform2iv
	PROC_glUniform2iv glUniform2iv;
	#endif

	#ifdef HAVING_glUniform3iv
	PROC_glUniform3iv glUniform3iv;
	#endif

	#ifdef HAVING_glUniform4iv
	PROC_glUniform4iv glUniform4iv;
	#endif

	#ifdef HAVING_glUniformMatrix2fv
	PROC_glUniformMatrix2fv glUniformMatrix2fv;
	#endif

	#ifdef HAVING_glUniformMatrix3fv
	PROC_glUniformMatrix3fv glUniformMatrix3fv;
	#endif

	#ifdef HAVING_glUniformMatrix4fv
	PROC_glUniformMatrix4fv glUniformMatrix4fv;
	#endif

	#ifdef HAVING_glValidateProgram
	PROC_glValidateProgram glValidateProgram;
	#endif

	#ifdef HAVING_glVertexAttrib1d
	PROC_glVertexAttrib1d glVertexAttrib1d;
	#endif

	#ifdef HAVING_glVertexAttrib1dv
	PROC_glVertexAttrib1dv glVertexAttrib1dv;
	#endif

	#ifdef HAVING_glVertexAttrib1f
	PROC_glVertexAttrib1f glVertexAttrib1f;
	#endif

	#ifdef HAVING_glVertexAttrib1fv
	PROC_glVertexAttrib1fv glVertexAttrib1fv;
	#endif

	#ifdef HAVING_glVertexAttrib1s
	PROC_glVertexAttrib1s glVertexAttrib1s;
	#endif

	#ifdef HAVING_glVertexAttrib1sv
	PROC_glVertexAttrib1sv glVertexAttrib1sv;
	#endif

	#ifdef HAVING_glVertexAttrib2d
	PROC_glVertexAttrib2d glVertexAttrib2d;
	#endif

	#ifdef HAVING_glVertexAttrib2dv
	PROC_glVertexAttrib2dv glVertexAttrib2dv;
	#endif

	#ifdef HAVING_glVertexAttrib2f
	PROC_glVertexAttrib2f glVertexAttrib2f;
	#endif

	#ifdef HAVING_glVertexAttrib2fv
	PROC_glVertexAttrib2fv glVertexAttrib2fv;
	#endif

	#ifdef HAVING_glVertexAttrib2s
	PROC_glVertexAttrib2s glVertexAttrib2s;
	#endif

	#ifdef HAVING_glVertexAttrib2sv
	PROC_glVertexAttrib2sv glVertexAttrib2sv;
	#endif

	#ifdef HAVING_glVertexAttrib3d
	PROC_glVertexAttrib3d glVertexAttrib3d;
	#endif

	#ifdef HAVING_glVertexAttrib3dv
	PROC_glVertexAttrib3dv glVertexAttrib3dv;
	#endif

	#ifdef HAVING_glVertexAttrib3f
	PROC_glVertexAttrib3f glVertexAttrib3f;
	#endif

	#ifdef HAVING_glVertexAttrib3fv
	PROC_glVertexAttrib3fv glVertexAttrib3fv;
	#endif

	#ifdef HAVING_glVertexAttrib3s
	PROC_glVertexAttrib3s glVertexAttrib3s;
	#endif

	#ifdef HAVING_glVertexAttrib3sv
	PROC_glVertexAttrib3sv glVertexAttrib3sv;
	#endif

	#ifdef HAVING_glVertexAttrib4Nbv
	PROC_glVertexAttrib4Nbv glVertexAttrib4Nbv;
	#endif

	#ifdef HAVING_glVertexAttrib4Niv
	PROC_glVertexAttrib4Niv glVertexAttrib4Niv;
	#endif

	#ifdef HAVING_glVertexAttrib4Nsv
	PROC_glVertexAttrib4Nsv glVertexAttrib4Nsv;
	#endif

	#ifdef HAVING_glVertexAttrib4Nub
	PROC_glVertexAttrib4Nub glVertexAttrib4Nub;
	#endif

	#ifdef HAVING_glVertexAttrib4Nubv
	PROC_glVertexAttrib4Nubv glVertexAttrib4Nubv;
	#endif

	#ifdef HAVING_glVertexAttrib4Nuiv
	PROC_glVertexAttrib4Nuiv glVertexAttrib4Nuiv;
	#endif

	#ifdef HAVING_glVertexAttrib4Nusv
	PROC_glVertexAttrib4Nusv glVertexAttrib4Nusv;
	#endif

	#ifdef HAVING_glVertexAttrib4bv
	PROC_glVertexAttrib4bv glVertexAttrib4bv;
	#endif

	#ifdef HAVING_glVertexAttrib4d
	PROC_glVertexAttrib4d glVertexAttrib4d;
	#endif

	#ifdef HAVING_glVertexAttrib4dv
	PROC_glVertexAttrib4dv glVertexAttrib4dv;
	#endif

	#ifdef HAVING_glVertexAttrib4f
	PROC_glVertexAttrib4f glVertexAttrib4f;
	#endif

	#ifdef HAVING_glVertexAttrib4fv
	PROC_glVertexAttrib4fv glVertexAttrib4fv;
	#endif

	#ifdef HAVING_glVertexAttrib4iv
	PROC_glVertexAttrib4iv glVertexAttrib4iv;
	#endif

	#ifdef HAVING_glVertexAttrib4s
	PROC_glVertexAttrib4s glVertexAttrib4s;
	#endif

	#ifdef HAVING_glVertexAttrib4sv
	PROC_glVertexAttrib4sv glVertexAttrib4sv;
	#endif

	#ifdef HAVING_glVertexAttrib4ubv
	PROC_glVertexAttrib4ubv glVertexAttrib4ubv;
	#endif

	#ifdef HAVING_glVertexAttrib4uiv
	PROC_glVertexAttrib4uiv glVertexAttrib4uiv;
	#endif

	#ifdef HAVING_glVertexAttrib4usv
	PROC_glVertexAttrib4usv glVertexAttrib4usv;
	#endif

	#ifdef HAVING_glVertexAttribPointer
	PROC_glVertexAttribPointer glVertexAttribPointer;
	#endif

	#ifdef HAVING_glUniformMatrix2x3fv
	PROC_glUniformMatrix2x3fv glUniformMatrix2x3fv;
	#endif

	#ifdef HAVING_glUniformMatrix3x2fv
	PROC_glUniformMatrix3x2fv glUniformMatrix3x2fv;
	#endif

	#ifdef HAVING_glUniformMatrix2x4fv
	PROC_glUniformMatrix2x4fv glUniformMatrix2x4fv;
	#endif

	#ifdef HAVING_glUniformMatrix4x2fv
	PROC_glUniformMatrix4x2fv glUniformMatrix4x2fv;
	#endif

	#ifdef HAVING_glUniformMatrix3x4fv
	PROC_glUniformMatrix3x4fv glUniformMatrix3x4fv;
	#endif

	#ifdef HAVING_glUniformMatrix4x3fv
	PROC_glUniformMatrix4x3fv glUniformMatrix4x3fv;
	#endif

	#ifdef HAVING_glColorMaski
	PROC_glColorMaski glColorMaski;
	#endif

	#ifdef HAVING_glGetBooleani_v
	PROC_glGetBooleani_v glGetBooleani_v;
	#endif

	#ifdef HAVING_glGetIntegeri_v
	PROC_glGetIntegeri_v glGetIntegeri_v;
	#endif

	#ifdef HAVING_glEnablei
	PROC_glEnablei glEnablei;
	#endif

	#ifdef HAVING_glDisablei
	PROC_glDisablei glDisablei;
	#endif

	#ifdef HAVING_glIsEnabledi
	PROC_glIsEnabledi glIsEnabledi;
	#endif

	#ifdef HAVING_glBeginTransformFeedback
	PROC_glBeginTransformFeedback glBeginTransformFeedback;
	#endif

	#ifdef HAVING_glEndTransformFeedback
	PROC_glEndTransformFeedback glEndTransformFeedback;
	#endif

	#ifdef HAVING_glBindBufferRange
	PROC_glBindBufferRange glBindBufferRange;
	#endif

	#ifdef HAVING_glBindBufferBase
	PROC_glBindBufferBase glBindBufferBase;
	#endif

	#ifdef HAVING_glTransformFeedbackVaryings
	PROC_glTransformFeedbackVaryings glTransformFeedbackVaryings;
	#endif

	#ifdef HAVING_glGetTransformFeedbackVarying
	PROC_glGetTransformFeedbackVarying glGetTransformFeedbackVarying;
	#endif

	#ifdef HAVING_glClampColor
	PROC_glClampColor glClampColor;
	#endif

	#ifdef HAVING_glBeginConditionalRender
	PROC_glBeginConditionalRender glBeginConditionalRender;
	#endif

	#ifdef HAVING_glEndConditionalRender
	PROC_glEndConditionalRender glEndConditionalRender;
	#endif

	#ifdef HAVING_glVertexAttribIPointer
	PROC_glVertexAttribIPointer glVertexAttribIPointer;
	#endif

	#ifdef HAVING_glGetVertexAttribIiv
	PROC_glGetVertexAttribIiv glGetVertexAttribIiv;
	#endif

	#ifdef HAVING_glGetVertexAttribIuiv
	PROC_glGetVertexAttribIuiv glGetVertexAttribIuiv;
	#endif

	#ifdef HAVING_glVertexAttribI1i
	PROC_glVertexAttribI1i glVertexAttribI1i;
	#endif

	#ifdef HAVING_glVertexAttribI2i
	PROC_glVertexAttribI2i glVertexAttribI2i;
	#endif

	#ifdef HAVING_glVertexAttribI3i
	PROC_glVertexAttribI3i glVertexAttribI3i;
	#endif

	#ifdef HAVING_glVertexAttribI4i
	PROC_glVertexAttribI4i glVertexAttribI4i;
	#endif

	#ifdef HAVING_glVertexAttribI1ui
	PROC_glVertexAttribI1ui glVertexAttribI1ui;
	#endif

	#ifdef HAVING_glVertexAttribI2ui
	PROC_glVertexAttribI2ui glVertexAttribI2ui;
	#endif

	#ifdef HAVING_glVertexAttribI3ui
	PROC_glVertexAttribI3ui glVertexAttribI3ui;
	#endif

	#ifdef HAVING_glVertexAttribI4ui
	PROC_glVertexAttribI4ui glVertexAttribI4ui;
	#endif

	#ifdef HAVING_glVertexAttribI1iv
	PROC_glVertexAttribI1iv glVertexAttribI1iv;
	#endif

	#ifdef HAVING_glVertexAttribI2iv
	PROC_glVertexAttribI2iv glVertexAttribI2iv;
	#endif

	#ifdef HAVING_glVertexAttribI3iv
	PROC_glVertexAttribI3iv glVertexAttribI3iv;
	#endif

	#ifdef HAVING_glVertexAttribI4iv
	PROC_glVertexAttribI4iv glVertexAttribI4iv;
	#endif

	#ifdef HAVING_glVertexAttribI1uiv
	PROC_glVertexAttribI1uiv glVertexAttribI1uiv;
	#endif

	#ifdef HAVING_glVertexAttribI2uiv
	PROC_glVertexAttribI2uiv glVertexAttribI2uiv;
	#endif

	#ifdef HAVING_glVertexAttribI3uiv
	PROC_glVertexAttribI3uiv glVertexAttribI3uiv;
	#endif

	#ifdef HAVING_glVertexAttribI4uiv
	PROC_glVertexAttribI4uiv glVertexAttribI4uiv;
	#endif

	#ifdef HAVING_glVertexAttribI4bv
	PROC_glVertexAttribI4bv glVertexAttribI4bv;
	#endif

	#ifdef HAVING_glVertexAttribI4sv
	PROC_glVertexAttribI4sv glVertexAttribI4sv;
	#endif

	#ifdef HAVING_glVertexAttribI4ubv
	PROC_glVertexAttribI4ubv glVertexAttribI4ubv;
	#endif

	#ifdef HAVING_glVertexAttribI4usv
	PROC_glVertexAttribI4usv glVertexAttribI4usv;
	#endif

	#ifdef HAVING_glGetUniformuiv
	PROC_glGetUniformuiv glGetUniformuiv;
	#endif

	#ifdef HAVING_glBindFragDataLocation
	PROC_glBindFragDataLocation glBindFragDataLocation;
	#endif

	#ifdef HAVING_glGetFragDataLocation
	PROC_glGetFragDataLocation glGetFragDataLocation;
	#endif

	#ifdef HAVING_glUniform1ui
	PROC_glUniform1ui glUniform1ui;
	#endif

	#ifdef HAVING_glUniform2ui
	PROC_glUniform2ui glUniform2ui;
	#endif

	#ifdef HAVING_glUniform3ui
	PROC_glUniform3ui glUniform3ui;
	#endif

	#ifdef HAVING_glUniform4ui
	PROC_glUniform4ui glUniform4ui;
	#endif

	#ifdef HAVING_glUniform1uiv
	PROC_glUniform1uiv glUniform1uiv;
	#endif

	#ifdef HAVING_glUniform2uiv
	PROC_glUniform2uiv glUniform2uiv;
	#endif

	#ifdef HAVING_glUniform3uiv
	PROC_glUniform3uiv glUniform3uiv;
	#endif

	#ifdef HAVING_glUniform4uiv
	PROC_glUniform4uiv glUniform4uiv;
	#endif

	#ifdef HAVING_glTexParameterIiv
	PROC_glTexParameterIiv glTexParameterIiv;
	#endif

	#ifdef HAVING_glTexParameterIuiv
	PROC_glTexParameterIuiv glTexParameterIuiv;
	#endif

	#ifdef HAVING_glGetTexParameterIiv
	PROC_glGetTexParameterIiv glGetTexParameterIiv;
	#endif

	#ifdef HAVING_glGetTexParameterIuiv
	PROC_glGetTexParameterIuiv glGetTexParameterIuiv;
	#endif

	#ifdef HAVING_glClearBufferiv
	PROC_glClearBufferiv glClearBufferiv;
	#endif

	#ifdef HAVING_glClearBufferuiv
	PROC_glClearBufferuiv glClearBufferuiv;
	#endif

	#ifdef HAVING_glClearBufferfv
	PROC_glClearBufferfv glClearBufferfv;
	#endif

	#ifdef HAVING_glClearBufferfi
	PROC_glClearBufferfi glClearBufferfi;
	#endif

	#ifdef HAVING_glGetStringi
	PROC_glGetStringi glGetStringi;
	#endif

	#ifdef HAVING_glIsRenderbuffer
	PROC_glIsRenderbuffer glIsRenderbuffer;
	#endif

	#ifdef HAVING_glBindRenderbuffer
	PROC_glBindRenderbuffer glBindRenderbuffer;
	#endif

	#ifdef HAVING_glDeleteRenderbuffers
	PROC_glDeleteRenderbuffers glDeleteRenderbuffers;
	#endif

	#ifdef HAVING_glGenRenderbuffers
	PROC_glGenRenderbuffers glGenRenderbuffers;
	#endif

	#ifdef HAVING_glRenderbufferStorage
	PROC_glRenderbufferStorage glRenderbufferStorage;
	#endif

	#ifdef HAVING_glGetRenderbufferParameteriv
	PROC_glGetRenderbufferParameteriv glGetRenderbufferParameteriv;
	#endif

	#ifdef HAVING_glIsFramebuffer
	PROC_glIsFramebuffer glIsFramebuffer;
	#endif

	#ifdef HAVING_glBindFramebuffer
	PROC_glBindFramebuffer glBindFramebuffer;
	#endif

	#ifdef HAVING_glDeleteFramebuffers
	PROC_glDeleteFramebuffers glDeleteFramebuffers;
	#endif

	#ifdef HAVING_glGenFramebuffers
	PROC_glGenFramebuffers glGenFramebuffers;
	#endif

	#ifdef HAVING_glCheckFramebufferStatus
	PROC_glCheckFramebufferStatus glCheckFramebufferStatus;
	#endif

	#ifdef HAVING_glFramebufferTexture1D
	PROC_glFramebufferTexture1D glFramebufferTexture1D;
	#endif

	#ifdef HAVING_glFramebufferTexture2D
	PROC_glFramebufferTexture2D glFramebufferTexture2D;
	#endif

	#ifdef HAVING_glFramebufferTexture3D
	PROC_glFramebufferTexture3D glFramebufferTexture3D;
	#endif

	#ifdef HAVING_glFramebufferRenderbuffer
	PROC_glFramebufferRenderbuffer glFramebufferRenderbuffer;
	#endif

	#ifdef HAVING_glGetFramebufferAttachmentParameteriv
	PROC_glGetFramebufferAttachmentParameteriv glGetFramebufferAttachmentParameteriv;
	#endif

	#ifdef HAVING_glGenerateMipmap
	PROC_glGenerateMipmap glGenerateMipmap;
	#endif

	#ifdef HAVING_glBlitFramebuffer
	PROC_glBlitFramebuffer glBlitFramebuffer;
	#endif

	#ifdef HAVING_glRenderbufferStorageMultisample
	PROC_glRenderbufferStorageMultisample glRenderbufferStorageMultisample;
	#endif

	#ifdef HAVING_glFramebufferTextureLayer
	PROC_glFramebufferTextureLayer glFramebufferTextureLayer;
	#endif

	#ifdef HAVING_glMapBufferRange
	PROC_glMapBufferRange glMapBufferRange;
	#endif

	#ifdef HAVING_glFlushMappedBufferRange
	PROC_glFlushMappedBufferRange glFlushMappedBufferRange;
	#endif

	#ifdef HAVING_glBindVertexArray
	PROC_glBindVertexArray glBindVertexArray;
	#endif

	#ifdef HAVING_glDeleteVertexArrays
	PROC_glDeleteVertexArrays glDeleteVertexArrays;
	#endif

	#ifdef HAVING_glGenVertexArrays
	PROC_glGenVertexArrays glGenVertexArrays;
	#endif

	#ifdef HAVING_glIsVertexArray
	PROC_glIsVertexArray glIsVertexArray;
	#endif

	#ifdef HAVING_glDrawArraysInstanced
	PROC_glDrawArraysInstanced glDrawArraysInstanced;
	#endif

	#ifdef HAVING_glDrawElementsInstanced
	PROC_glDrawElementsInstanced glDrawElementsInstanced;
	#endif

	#ifdef HAVING_glTexBuffer
	PROC_glTexBuffer glTexBuffer;
	#endif

	#ifdef HAVING_glPrimitiveRestartIndex
	PROC_glPrimitiveRestartIndex glPrimitiveRestartIndex;
	#endif

	#ifdef HAVING_glCopyBufferSubData
	PROC_glCopyBufferSubData glCopyBufferSubData;
	#endif

	#ifdef HAVING_glGetUniformIndices
	PROC_glGetUniformIndices glGetUniformIndices;
	#endif

	#ifdef HAVING_glGetActiveUniformsiv
	PROC_glGetActiveUniformsiv glGetActiveUniformsiv;
	#endif

	#ifdef HAVING_glGetActiveUniformName
	PROC_glGetActiveUniformName glGetActiveUniformName;
	#endif

	#ifdef HAVING_glGetUniformBlockIndex
	PROC_glGetUniformBlockIndex glGetUniformBlockIndex;
	#endif

	#ifdef HAVING_glGetActiveUniformBlockiv
	PROC_glGetActiveUniformBlockiv glGetActiveUniformBlockiv;
	#endif

	#ifdef HAVING_glGetActiveUniformBlockName
	PROC_glGetActiveUniformBlockName glGetActiveUniformBlockName;
	#endif

	#ifdef HAVING_glUniformBlockBinding
	PROC_glUniformBlockBinding glUniformBlockBinding;
	#endif

	#ifdef HAVING_glDrawElementsBaseVertex
	PROC_glDrawElementsBaseVertex glDrawElementsBaseVertex;
	#endif

	#ifdef HAVING_glDrawRangeElementsBaseVertex
	PROC_glDrawRangeElementsBaseVertex glDrawRangeElementsBaseVertex;
	#endif

	#ifdef HAVING_glDrawElementsInstancedBaseVertex
	PROC_glDrawElementsInstancedBaseVertex glDrawElementsInstancedBaseVertex;
	#endif

	#ifdef HAVING_glMultiDrawElementsBaseVertex
	PROC_glMultiDrawElementsBaseVertex glMultiDrawElementsBaseVertex;
	#endif

	#ifdef HAVING_glProvokingVertex
	PROC_glProvokingVertex glProvokingVertex;
	#endif

	#ifdef HAVING_glFenceSync
	PROC_glFenceSync glFenceSync;
	#endif

	#ifdef HAVING_glIsSync
	PROC_glIsSync glIsSync;
	#endif

	#ifdef HAVING_glDeleteSync
	PROC_glDeleteSync glDeleteSync;
	#endif

	#ifdef HAVING_glClientWaitSync
	PROC_glClientWaitSync glClientWaitSync;
	#endif

	#ifdef HAVING_glWaitSync
	PROC_glWaitSync glWaitSync;
	#endif

	#ifdef HAVING_glGetInteger64v
	PROC_glGetInteger64v glGetInteger64v;
	#endif

	#ifdef HAVING_glGetSynciv
	PROC_glGetSynciv glGetSynciv;
	#endif

	#ifdef HAVING_glGetInteger64i_v
	PROC_glGetInteger64i_v glGetInteger64i_v;
	#endif

	#ifdef HAVING_glGetBufferParameteri64v
	PROC_glGetBufferParameteri64v glGetBufferParameteri64v;
	#endif

	#ifdef HAVING_glFramebufferTexture
	PROC_glFramebufferTexture glFramebufferTexture;
	#endif

	#ifdef HAVING_glTexImage2DMultisample
	PROC_glTexImage2DMultisample glTexImage2DMultisample;
	#endif

	#ifdef HAVING_glTexImage3DMultisample
	PROC_glTexImage3DMultisample glTexImage3DMultisample;
	#endif

	#ifdef HAVING_glGetMultisamplefv
	PROC_glGetMultisamplefv glGetMultisamplefv;
	#endif

	#ifdef HAVING_glSampleMaski
	PROC_glSampleMaski glSampleMaski;
	#endif

	#ifdef HAVING_glBindFragDataLocationIndexed
	PROC_glBindFragDataLocationIndexed glBindFragDataLocationIndexed;
	#endif

	#ifdef HAVING_glGetFragDataIndex
	PROC_glGetFragDataIndex glGetFragDataIndex;
	#endif

	#ifdef HAVING_glGenSamplers
	PROC_glGenSamplers glGenSamplers;
	#endif

	#ifdef HAVING_glDeleteSamplers
	PROC_glDeleteSamplers glDeleteSamplers;
	#endif

	#ifdef HAVING_glIsSampler
	PROC_glIsSampler glIsSampler;
	#endif

	#ifdef HAVING_glBindSampler
	PROC_glBindSampler glBindSampler;
	#endif

	#ifdef HAVING_glSamplerParameteri
	PROC_glSamplerParameteri glSamplerParameteri;
	#endif

	#ifdef HAVING_glSamplerParameteriv
	PROC_glSamplerParameteriv glSamplerParameteriv;
	#endif

	#ifdef HAVING_glSamplerParameterf
	PROC_glSamplerParameterf glSamplerParameterf;
	#endif

	#ifdef HAVING_glSamplerParameterfv
	PROC_glSamplerParameterfv glSamplerParameterfv;
	#endif

	#ifdef HAVING_glSamplerParameterIiv
	PROC_glSamplerParameterIiv glSamplerParameterIiv;
	#endif

	#ifdef HAVING_glSamplerParameterIuiv
	PROC_glSamplerParameterIuiv glSamplerParameterIuiv;
	#endif

	#ifdef HAVING_glGetSamplerParameteriv
	PROC_glGetSamplerParameteriv glGetSamplerParameteriv;
	#endif

	#ifdef HAVING_glGetSamplerParameterIiv
	PROC_glGetSamplerParameterIiv glGetSamplerParameterIiv;
	#endif

	#ifdef HAVING_glGetSamplerParameterfv
	PROC_glGetSamplerParameterfv glGetSamplerParameterfv;
	#endif

	#ifdef HAVING_glGetSamplerParameterIuiv
	PROC_glGetSamplerParameterIuiv glGetSamplerParameterIuiv;
	#endif

	#ifdef HAVING_glQueryCounter
	PROC_glQueryCounter glQueryCounter;
	#endif

	#ifdef HAVING_glGetQueryObjecti64v
	PROC_glGetQueryObjecti64v glGetQueryObjecti64v;
	#endif

	#ifdef HAVING_glGetQueryObjectui64v
	PROC_glGetQueryObjectui64v glGetQueryObjectui64v;
	#endif

	#ifdef HAVING_glVertexAttribDivisor
	PROC_glVertexAttribDivisor glVertexAttribDivisor;
	#endif

	#ifdef HAVING_glVertexAttribP1ui
	PROC_glVertexAttribP1ui glVertexAttribP1ui;
	#endif

	#ifdef HAVING_glVertexAttribP1uiv
	PROC_glVertexAttribP1uiv glVertexAttribP1uiv;
	#endif

	#ifdef HAVING_glVertexAttribP2ui
	PROC_glVertexAttribP2ui glVertexAttribP2ui;
	#endif

	#ifdef HAVING_glVertexAttribP2uiv
	PROC_glVertexAttribP2uiv glVertexAttribP2uiv;
	#endif

	#ifdef HAVING_glVertexAttribP3ui
	PROC_glVertexAttribP3ui glVertexAttribP3ui;
	#endif

	#ifdef HAVING_glVertexAttribP3uiv
	PROC_glVertexAttribP3uiv glVertexAttribP3uiv;
	#endif

	#ifdef HAVING_glVertexAttribP4ui
	PROC_glVertexAttribP4ui glVertexAttribP4ui;
	#endif

	#ifdef HAVING_glVertexAttribP4uiv
	PROC_glVertexAttribP4uiv glVertexAttribP4uiv;
	#endif

	#ifdef HAVING_glMinSampleShading
	PROC_glMinSampleShading glMinSampleShading;
	#endif

	#ifdef HAVING_glBlendEquationi
	PROC_glBlendEquationi glBlendEquationi;
	#endif

	#ifdef HAVING_glBlendEquationSeparatei
	PROC_glBlendEquationSeparatei glBlendEquationSeparatei;
	#endif

	#ifdef HAVING_glBlendFunci
	PROC_glBlendFunci glBlendFunci;
	#endif

	#ifdef HAVING_glBlendFuncSeparatei
	PROC_glBlendFuncSeparatei glBlendFuncSeparatei;
	#endif

	#ifdef HAVING_glDrawArraysIndirect
	PROC_glDrawArraysIndirect glDrawArraysIndirect;
	#endif

	#ifdef HAVING_glDrawElementsIndirect
	PROC_glDrawElementsIndirect glDrawElementsIndirect;
	#endif

	#ifdef HAVING_glUniform1d
	PROC_glUniform1d glUniform1d;
	#endif

	#ifdef HAVING_glUniform2d
	PROC_glUniform2d glUniform2d;
	#endif

	#ifdef HAVING_glUniform3d
	PROC_glUniform3d glUniform3d;
	#endif

	#ifdef HAVING_glUniform4d
	PROC_glUniform4d glUniform4d;
	#endif

	#ifdef HAVING_glUniform1dv
	PROC_glUniform1dv glUniform1dv;
	#endif

	#ifdef HAVING_glUniform2dv
	PROC_glUniform2dv glUniform2dv;
	#endif

	#ifdef HAVING_glUniform3dv
	PROC_glUniform3dv glUniform3dv;
	#endif

	#ifdef HAVING_glUniform4dv
	PROC_glUniform4dv glUniform4dv;
	#endif

	#ifdef HAVING_glUniformMatrix2dv
	PROC_glUniformMatrix2dv glUniformMatrix2dv;
	#endif

	#ifdef HAVING_glUniformMatrix3dv
	PROC_glUniformMatrix3dv glUniformMatrix3dv;
	#endif

	#ifdef HAVING_glUniformMatrix4dv
	PROC_glUniformMatrix4dv glUniformMatrix4dv;
	#endif

	#ifdef HAVING_glUniformMatrix2x3dv
	PROC_glUniformMatrix2x3dv glUniformMatrix2x3dv;
	#endif

	#ifdef HAVING_glUniformMatrix2x4dv
	PROC_glUniformMatrix2x4dv glUniformMatrix2x4dv;
	#endif

	#ifdef HAVING_glUniformMatrix3x2dv
	PROC_glUniformMatrix3x2dv glUniformMatrix3x2dv;
	#endif

	#ifdef HAVING_glUniformMatrix3x4dv
	PROC_glUniformMatrix3x4dv glUniformMatrix3x4dv;
	#endif

	#ifdef HAVING_glUniformMatrix4x2dv
	PROC_glUniformMatrix4x2dv glUniformMatrix4x2dv;
	#endif

	#ifdef HAVING_glUniformMatrix4x3dv
	PROC_glUniformMatrix4x3dv glUniformMatrix4x3dv;
	#endif

	#ifdef HAVING_glGetUniformdv
	PROC_glGetUniformdv glGetUniformdv;
	#endif

	#ifdef HAVING_glGetSubroutineUniformLocation
	PROC_glGetSubroutineUniformLocation glGetSubroutineUniformLocation;
	#endif

	#ifdef HAVING_glGetSubroutineIndex
	PROC_glGetSubroutineIndex glGetSubroutineIndex;
	#endif

	#ifdef HAVING_glGetActiveSubroutineUniformiv
	PROC_glGetActiveSubroutineUniformiv glGetActiveSubroutineUniformiv;
	#endif

	#ifdef HAVING_glGetActiveSubroutineUniformName
	PROC_glGetActiveSubroutineUniformName glGetActiveSubroutineUniformName;
	#endif

	#ifdef HAVING_glGetActiveSubroutineName
	PROC_glGetActiveSubroutineName glGetActiveSubroutineName;
	#endif

	#ifdef HAVING_glUniformSubroutinesuiv
	PROC_glUniformSubroutinesuiv glUniformSubroutinesuiv;
	#endif

	#ifdef HAVING_glGetUniformSubroutineuiv
	PROC_glGetUniformSubroutineuiv glGetUniformSubroutineuiv;
	#endif

	#ifdef HAVING_glGetProgramStageiv
	PROC_glGetProgramStageiv glGetProgramStageiv;
	#endif

	#ifdef HAVING_glPatchParameteri
	PROC_glPatchParameteri glPatchParameteri;
	#endif

	#ifdef HAVING_glPatchParameterfv
	PROC_glPatchParameterfv glPatchParameterfv;
	#endif

	#ifdef HAVING_glBindTransformFeedback
	PROC_glBindTransformFeedback glBindTransformFeedback;
	#endif

	#ifdef HAVING_glDeleteTransformFeedbacks
	PROC_glDeleteTransformFeedbacks glDeleteTransformFeedbacks;
	#endif

	#ifdef HAVING_glGenTransformFeedbacks
	PROC_glGenTransformFeedbacks glGenTransformFeedbacks;
	#endif

	#ifdef HAVING_glIsTransformFeedback
	PROC_glIsTransformFeedback glIsTransformFeedback;
	#endif

	#ifdef HAVING_glPauseTransformFeedback
	PROC_glPauseTransformFeedback glPauseTransformFeedback;
	#endif

	#ifdef HAVING_glResumeTransformFeedback
	PROC_glResumeTransformFeedback glResumeTransformFeedback;
	#endif

	#ifdef HAVING_glDrawTransformFeedback
	PROC_glDrawTransformFeedback glDrawTransformFeedback;
	#endif

	#ifdef HAVING_glDrawTransformFeedbackStream
	PROC_glDrawTransformFeedbackStream glDrawTransformFeedbackStream;
	#endif

	#ifdef HAVING_glBeginQueryIndexed
	PROC_glBeginQueryIndexed glBeginQueryIndexed;
	#endif

	#ifdef HAVING_glEndQueryIndexed
	PROC_glEndQueryIndexed glEndQueryIndexed;
	#endif

	#ifdef HAVING_glGetQueryIndexediv
	PROC_glGetQueryIndexediv glGetQueryIndexediv;
	#endif

	#ifdef HAVING_glReleaseShaderCompiler
	PROC_glReleaseShaderCompiler glReleaseShaderCompiler;
	#endif

	#ifdef HAVING_glShaderBinary
	PROC_glShaderBinary glShaderBinary;
	#endif

	#ifdef HAVING_glGetShaderPrecisionFormat
	PROC_glGetShaderPrecisionFormat glGetShaderPrecisionFormat;
	#endif

	#ifdef HAVING_glDepthRangef
	PROC_glDepthRangef glDepthRangef;
	#endif

	#ifdef HAVING_glClearDepthf
	PROC_glClearDepthf glClearDepthf;
	#endif

	#ifdef HAVING_glGetProgramBinary
	PROC_glGetProgramBinary glGetProgramBinary;
	#endif

	#ifdef HAVING_glProgramBinary
	PROC_glProgramBinary glProgramBinary;
	#endif

	#ifdef HAVING_glProgramParameteri
	PROC_glProgramParameteri glProgramParameteri;
	#endif

	#ifdef HAVING_glUseProgramStages
	PROC_glUseProgramStages glUseProgramStages;
	#endif

	#ifdef HAVING_glActiveShaderProgram
	PROC_glActiveShaderProgram glActiveShaderProgram;
	#endif

	#ifdef HAVING_glCreateShaderProgramv
	PROC_glCreateShaderProgramv glCreateShaderProgramv;
	#endif

	#ifdef HAVING_glBindProgramPipeline
	PROC_glBindProgramPipeline glBindProgramPipeline;
	#endif

	#ifdef HAVING_glDeleteProgramPipelines
	PROC_glDeleteProgramPipelines glDeleteProgramPipelines;
	#endif

	#ifdef HAVING_glGenProgramPipelines
	PROC_glGenProgramPipelines glGenProgramPipelines;
	#endif

	#ifdef HAVING_glIsProgramPipeline
	PROC_glIsProgramPipeline glIsProgramPipeline;
	#endif

	#ifdef HAVING_glGetProgramPipelineiv
	PROC_glGetProgramPipelineiv glGetProgramPipelineiv;
	#endif

	#ifdef HAVING_glProgramUniform1i
	PROC_glProgramUniform1i glProgramUniform1i;
	#endif

	#ifdef HAVING_glProgramUniform1iv
	PROC_glProgramUniform1iv glProgramUniform1iv;
	#endif

	#ifdef HAVING_glProgramUniform1f
	PROC_glProgramUniform1f glProgramUniform1f;
	#endif

	#ifdef HAVING_glProgramUniform1fv
	PROC_glProgramUniform1fv glProgramUniform1fv;
	#endif

	#ifdef HAVING_glProgramUniform1d
	PROC_glProgramUniform1d glProgramUniform1d;
	#endif

	#ifdef HAVING_glProgramUniform1dv
	PROC_glProgramUniform1dv glProgramUniform1dv;
	#endif

	#ifdef HAVING_glProgramUniform1ui
	PROC_glProgramUniform1ui glProgramUniform1ui;
	#endif

	#ifdef HAVING_glProgramUniform1uiv
	PROC_glProgramUniform1uiv glProgramUniform1uiv;
	#endif

	#ifdef HAVING_glProgramUniform2i
	PROC_glProgramUniform2i glProgramUniform2i;
	#endif

	#ifdef HAVING_glProgramUniform2iv
	PROC_glProgramUniform2iv glProgramUniform2iv;
	#endif

	#ifdef HAVING_glProgramUniform2f
	PROC_glProgramUniform2f glProgramUniform2f;
	#endif

	#ifdef HAVING_glProgramUniform2fv
	PROC_glProgramUniform2fv glProgramUniform2fv;
	#endif

	#ifdef HAVING_glProgramUniform2d
	PROC_glProgramUniform2d glProgramUniform2d;
	#endif

	#ifdef HAVING_glProgramUniform2dv
	PROC_glProgramUniform2dv glProgramUniform2dv;
	#endif

	#ifdef HAVING_glProgramUniform2ui
	PROC_glProgramUniform2ui glProgramUniform2ui;
	#endif

	#ifdef HAVING_glProgramUniform2uiv
	PROC_glProgramUniform2uiv glProgramUniform2uiv;
	#endif

	#ifdef HAVING_glProgramUniform3i
	PROC_glProgramUniform3i glProgramUniform3i;
	#endif

	#ifdef HAVING_glProgramUniform3iv
	PROC_glProgramUniform3iv glProgramUniform3iv;
	#endif

	#ifdef HAVING_glProgramUniform3f
	PROC_glProgramUniform3f glProgramUniform3f;
	#endif

	#ifdef HAVING_glProgramUniform3fv
	PROC_glProgramUniform3fv glProgramUniform3fv;
	#endif

	#ifdef HAVING_glProgramUniform3d
	PROC_glProgramUniform3d glProgramUniform3d;
	#endif

	#ifdef HAVING_glProgramUniform3dv
	PROC_glProgramUniform3dv glProgramUniform3dv;
	#endif

	#ifdef HAVING_glProgramUniform3ui
	PROC_glProgramUniform3ui glProgramUniform3ui;
	#endif

	#ifdef HAVING_glProgramUniform3uiv
	PROC_glProgramUniform3uiv glProgramUniform3uiv;
	#endif

	#ifdef HAVING_glProgramUniform4i
	PROC_glProgramUniform4i glProgramUniform4i;
	#endif

	#ifdef HAVING_glProgramUniform4iv
	PROC_glProgramUniform4iv glProgramUniform4iv;
	#endif

	#ifdef HAVING_glProgramUniform4f
	PROC_glProgramUniform4f glProgramUniform4f;
	#endif

	#ifdef HAVING_glProgramUniform4fv
	PROC_glProgramUniform4fv glProgramUniform4fv;
	#endif

	#ifdef HAVING_glProgramUniform4d
	PROC_glProgramUniform4d glProgramUniform4d;
	#endif

	#ifdef HAVING_glProgramUniform4dv
	PROC_glProgramUniform4dv glProgramUniform4dv;
	#endif

	#ifdef HAVING_glProgramUniform4ui
	PROC_glProgramUniform4ui glProgramUniform4ui;
	#endif

	#ifdef HAVING_glProgramUniform4uiv
	PROC_glProgramUniform4uiv glProgramUniform4uiv;
	#endif

	#ifdef HAVING_glProgramUniformMatrix2fv
	PROC_glProgramUniformMatrix2fv glProgramUniformMatrix2fv;
	#endif

	#ifdef HAVING_glProgramUniformMatrix3fv
	PROC_glProgramUniformMatrix3fv glProgramUniformMatrix3fv;
	#endif

	#ifdef HAVING_glProgramUniformMatrix4fv
	PROC_glProgramUniformMatrix4fv glProgramUniformMatrix4fv;
	#endif

	#ifdef HAVING_glProgramUniformMatrix2dv
	PROC_glProgramUniformMatrix2dv glProgramUniformMatrix2dv;
	#endif

	#ifdef HAVING_glProgramUniformMatrix3dv
	PROC_glProgramUniformMatrix3dv glProgramUniformMatrix3dv;
	#endif

	#ifdef HAVING_glProgramUniformMatrix4dv
	PROC_glProgramUniformMatrix4dv glProgramUniformMatrix4dv;
	#endif

	#ifdef HAVING_glProgramUniformMatrix2x3fv
	PROC_glProgramUniformMatrix2x3fv glProgramUniformMatrix2x3fv;
	#endif

	#ifdef HAVING_glProgramUniformMatrix3x2fv
	PROC_glProgramUniformMatrix3x2fv glProgramUniformMatrix3x2fv;
	#endif

	#ifdef HAVING_glProgramUniformMatrix2x4fv
	PROC_glProgramUniformMatrix2x4fv glProgramUniformMatrix2x4fv;
	#endif

	#ifdef HAVING_glProgramUniformMatrix4x2fv
	PROC_glProgramUniformMatrix4x2fv glProgramUniformMatrix4x2fv;
	#endif

	#ifdef HAVING_glProgramUniformMatrix3x4fv
	PROC_glProgramUniformMatrix3x4fv glProgramUniformMatrix3x4fv;
	#endif

	#ifdef HAVING_glProgramUniformMatrix4x3fv
	PROC_glProgramUniformMatrix4x3fv glProgramUniformMatrix4x3fv;
	#endif

	#ifdef HAVING_glProgramUniformMatrix2x3dv
	PROC_glProgramUniformMatrix2x3dv glProgramUniformMatrix2x3dv;
	#endif

	#ifdef HAVING_glProgramUniformMatrix3x2dv
	PROC_glProgramUniformMatrix3x2dv glProgramUniformMatrix3x2dv;
	#endif

	#ifdef HAVING_glProgramUniformMatrix2x4dv
	PROC_glProgramUniformMatrix2x4dv glProgramUniformMatrix2x4dv;
	#endif

	#ifdef HAVING_glProgramUniformMatrix4x2dv
	PROC_glProgramUniformMatrix4x2dv glProgramUniformMatrix4x2dv;
	#endif

	#ifdef HAVING_glProgramUniformMatrix3x4dv
	PROC_glProgramUniformMatrix3x4dv glProgramUniformMatrix3x4dv;
	#endif

	#ifdef HAVING_glProgramUniformMatrix4x3dv
	PROC_glProgramUniformMatrix4x3dv glProgramUniformMatrix4x3dv;
	#endif

	#ifdef HAVING_glValidateProgramPipeline
	PROC_glValidateProgramPipeline glValidateProgramPipeline;
	#endif

	#ifdef HAVING_glGetProgramPipelineInfoLog
	PROC_glGetProgramPipelineInfoLog glGetProgramPipelineInfoLog;
	#endif

	#ifdef HAVING_glVertexAttribL1d
	PROC_glVertexAttribL1d glVertexAttribL1d;
	#endif

	#ifdef HAVING_glVertexAttribL2d
	PROC_glVertexAttribL2d glVertexAttribL2d;
	#endif

	#ifdef HAVING_glVertexAttribL3d
	PROC_glVertexAttribL3d glVertexAttribL3d;
	#endif

	#ifdef HAVING_glVertexAttribL4d
	PROC_glVertexAttribL4d glVertexAttribL4d;
	#endif

	#ifdef HAVING_glVertexAttribL1dv
	PROC_glVertexAttribL1dv glVertexAttribL1dv;
	#endif

	#ifdef HAVING_glVertexAttribL2dv
	PROC_glVertexAttribL2dv glVertexAttribL2dv;
	#endif

	#ifdef HAVING_glVertexAttribL3dv
	PROC_glVertexAttribL3dv glVertexAttribL3dv;
	#endif

	#ifdef HAVING_glVertexAttribL4dv
	PROC_glVertexAttribL4dv glVertexAttribL4dv;
	#endif

	#ifdef HAVING_glVertexAttribLPointer
	PROC_glVertexAttribLPointer glVertexAttribLPointer;
	#endif

	#ifdef HAVING_glGetVertexAttribLdv
	PROC_glGetVertexAttribLdv glGetVertexAttribLdv;
	#endif

	#ifdef HAVING_glViewportArrayv
	PROC_glViewportArrayv glViewportArrayv;
	#endif

	#ifdef HAVING_glViewportIndexedf
	PROC_glViewportIndexedf glViewportIndexedf;
	#endif

	#ifdef HAVING_glViewportIndexedfv
	PROC_glViewportIndexedfv glViewportIndexedfv;
	#endif

	#ifdef HAVING_glScissorArrayv
	PROC_glScissorArrayv glScissorArrayv;
	#endif

	#ifdef HAVING_glScissorIndexed
	PROC_glScissorIndexed glScissorIndexed;
	#endif

	#ifdef HAVING_glScissorIndexedv
	PROC_glScissorIndexedv glScissorIndexedv;
	#endif

	#ifdef HAVING_glDepthRangeArrayv
	PROC_glDepthRangeArrayv glDepthRangeArrayv;
	#endif

	#ifdef HAVING_glDepthRangeIndexed
	PROC_glDepthRangeIndexed glDepthRangeIndexed;
	#endif

	#ifdef HAVING_glGetFloati_v
	PROC_glGetFloati_v glGetFloati_v;
	#endif

	#ifdef HAVING_glGetDoublei_v
	PROC_glGetDoublei_v glGetDoublei_v;
	#endif

	#ifdef HAVING_glDrawArraysInstancedBaseInstance
	PROC_glDrawArraysInstancedBaseInstance glDrawArraysInstancedBaseInstance;
	#endif

	#ifdef HAVING_glDrawElementsInstancedBaseInstance
	PROC_glDrawElementsInstancedBaseInstance glDrawElementsInstancedBaseInstance;
	#endif

	#ifdef HAVING_glDrawElementsInstancedBaseVertexBaseInstance
	PROC_glDrawElementsInstancedBaseVertexBaseInstance glDrawElementsInstancedBaseVertexBaseInstance;
	#endif

	#ifdef HAVING_glGetInternalformativ
	PROC_glGetInternalformativ glGetInternalformativ;
	#endif

	#ifdef HAVING_glGetActiveAtomicCounterBufferiv
	PROC_glGetActiveAtomicCounterBufferiv glGetActiveAtomicCounterBufferiv;
	#endif

	#ifdef HAVING_glBindImageTexture
	PROC_glBindImageTexture glBindImageTexture;
	#endif

	#ifdef HAVING_glMemoryBarrier
	PROC_glMemoryBarrier glMemoryBarrier;
	#endif

	#ifdef HAVING_glTexStorage1D
	PROC_glTexStorage1D glTexStorage1D;
	#endif

	#ifdef HAVING_glTexStorage2D
	PROC_glTexStorage2D glTexStorage2D;
	#endif

	#ifdef HAVING_glTexStorage3D
	PROC_glTexStorage3D glTexStorage3D;
	#endif

	#ifdef HAVING_glDrawTransformFeedbackInstanced
	PROC_glDrawTransformFeedbackInstanced glDrawTransformFeedbackInstanced;
	#endif

	#ifdef HAVING_glDrawTransformFeedbackStreamInstanced
	PROC_glDrawTransformFeedbackStreamInstanced glDrawTransformFeedbackStreamInstanced;
	#endif

	#ifdef HAVING_glClearBufferData
	PROC_glClearBufferData glClearBufferData;
	#endif

	#ifdef HAVING_glClearBufferSubData
	PROC_glClearBufferSubData glClearBufferSubData;
	#endif

	#ifdef HAVING_glDispatchCompute
	PROC_glDispatchCompute glDispatchCompute;
	#endif

	#ifdef HAVING_glDispatchComputeIndirect
	PROC_glDispatchComputeIndirect glDispatchComputeIndirect;
	#endif

	#ifdef HAVING_glCopyImageSubData
	PROC_glCopyImageSubData glCopyImageSubData;
	#endif

	#ifdef HAVING_glFramebufferParameteri
	PROC_glFramebufferParameteri glFramebufferParameteri;
	#endif

	#ifdef HAVING_glGetFramebufferParameteriv
	PROC_glGetFramebufferParameteriv glGetFramebufferParameteriv;
	#endif

	#ifdef HAVING_glGetInternalformati64v
	PROC_glGetInternalformati64v glGetInternalformati64v;
	#endif

	#ifdef HAVING_glInvalidateTexSubImage
	PROC_glInvalidateTexSubImage glInvalidateTexSubImage;
	#endif

	#ifdef HAVING_glInvalidateTexImage
	PROC_glInvalidateTexImage glInvalidateTexImage;
	#endif

	#ifdef HAVING_glInvalidateBufferSubData
	PROC_glInvalidateBufferSubData glInvalidateBufferSubData;
	#endif

	#ifdef HAVING_glInvalidateBufferData
	PROC_glInvalidateBufferData glInvalidateBufferData;
	#endif

	#ifdef HAVING_glInvalidateFramebuffer
	PROC_glInvalidateFramebuffer glInvalidateFramebuffer;
	#endif

	#ifdef HAVING_glInvalidateSubFramebuffer
	PROC_glInvalidateSubFramebuffer glInvalidateSubFramebuffer;
	#endif

	#ifdef HAVING_glMultiDrawArraysIndirect
	PROC_glMultiDrawArraysIndirect glMultiDrawArraysIndirect;
	#endif

	#ifdef HAVING_glMultiDrawElementsIndirect
	PROC_glMultiDrawElementsIndirect glMultiDrawElementsIndirect;
	#endif

	#ifdef HAVING_glGetProgramInterfaceiv
	PROC_glGetProgramInterfaceiv glGetProgramInterfaceiv;
	#endif

	#ifdef HAVING_glGetProgramResourceIndex
	PROC_glGetProgramResourceIndex glGetProgramResourceIndex;
	#endif

	#ifdef HAVING_glGetProgramResourceName
	PROC_glGetProgramResourceName glGetProgramResourceName;
	#endif

	#ifdef HAVING_glGetProgramResourceiv
	PROC_glGetProgramResourceiv glGetProgramResourceiv;
	#endif

	#ifdef HAVING_glGetProgramResourceLocation
	PROC_glGetProgramResourceLocation glGetProgramResourceLocation;
	#endif

	#ifdef HAVING_glGetProgramResourceLocationIndex
	PROC_glGetProgramResourceLocationIndex glGetProgramResourceLocationIndex;
	#endif

	#ifdef HAVING_glShaderStorageBlockBinding
	PROC_glShaderStorageBlockBinding glShaderStorageBlockBinding;
	#endif

	#ifdef HAVING_glTexBufferRange
	PROC_glTexBufferRange glTexBufferRange;
	#endif

	#ifdef HAVING_glTexStorage2DMultisample
	PROC_glTexStorage2DMultisample glTexStorage2DMultisample;
	#endif

	#ifdef HAVING_glTexStorage3DMultisample
	PROC_glTexStorage3DMultisample glTexStorage3DMultisample;
	#endif

	#ifdef HAVING_glTextureView
	PROC_glTextureView glTextureView;
	#endif

	#ifdef HAVING_glBindVertexBuffer
	PROC_glBindVertexBuffer glBindVertexBuffer;
	#endif

	#ifdef HAVING_glVertexAttribFormat
	PROC_glVertexAttribFormat glVertexAttribFormat;
	#endif

	#ifdef HAVING_glVertexAttribIFormat
	PROC_glVertexAttribIFormat glVertexAttribIFormat;
	#endif

	#ifdef HAVING_glVertexAttribLFormat
	PROC_glVertexAttribLFormat glVertexAttribLFormat;
	#endif

	#ifdef HAVING_glVertexAttribBinding
	PROC_glVertexAttribBinding glVertexAttribBinding;
	#endif

	#ifdef HAVING_glVertexBindingDivisor
	PROC_glVertexBindingDivisor glVertexBindingDivisor;
	#endif

	#ifdef HAVING_glDebugMessageControl
	PROC_glDebugMessageControl glDebugMessageControl;
	#endif

	#ifdef HAVING_glDebugMessageInsert
	PROC_glDebugMessageInsert glDebugMessageInsert;
	#endif

	#ifdef HAVING_glDebugMessageCallback
	PROC_glDebugMessageCallback glDebugMessageCallback;
	#endif

	#ifdef HAVING_glGetDebugMessageLog
	PROC_glGetDebugMessageLog glGetDebugMessageLog;
	#endif

	#ifdef HAVING_glPushDebugGroup
	PROC_glPushDebugGroup glPushDebugGroup;
	#endif

	#ifdef HAVING_glPopDebugGroup
	PROC_glPopDebugGroup glPopDebugGroup;
	#endif

	#ifdef HAVING_glObjectLabel
	PROC_glObjectLabel glObjectLabel;
	#endif

	#ifdef HAVING_glGetObjectLabel
	PROC_glGetObjectLabel glGetObjectLabel;
	#endif

	#ifdef HAVING_glObjectPtrLabel
	PROC_glObjectPtrLabel glObjectPtrLabel;
	#endif

	#ifdef HAVING_glGetObjectPtrLabel
	PROC_glGetObjectPtrLabel glGetObjectPtrLabel;
	#endif

	#ifdef HAVING_glBufferStorage
	PROC_glBufferStorage glBufferStorage;
	#endif

	#ifdef HAVING_glClearTexImage
	PROC_glClearTexImage glClearTexImage;
	#endif

	#ifdef HAVING_glClearTexSubImage
	PROC_glClearTexSubImage glClearTexSubImage;
	#endif

	#ifdef HAVING_glBindBuffersBase
	PROC_glBindBuffersBase glBindBuffersBase;
	#endif

	#ifdef HAVING_glBindBuffersRange
	PROC_glBindBuffersRange glBindBuffersRange;
	#endif

	#ifdef HAVING_glBindTextures
	PROC_glBindTextures glBindTextures;
	#endif

	#ifdef HAVING_glBindSamplers
	PROC_glBindSamplers glBindSamplers;
	#endif

	#ifdef HAVING_glBindImageTextures
	PROC_glBindImageTextures glBindImageTextures;
	#endif

	#ifdef HAVING_glBindVertexBuffers
	PROC_glBindVertexBuffers glBindVertexBuffers;
	#endif

	#ifdef HAVING_glClipControl
	PROC_glClipControl glClipControl;
	#endif

	#ifdef HAVING_glCreateTransformFeedbacks
	PROC_glCreateTransformFeedbacks glCreateTransformFeedbacks;
	#endif

	#ifdef HAVING_glTransformFeedbackBufferBase
	PROC_glTransformFeedbackBufferBase glTransformFeedbackBufferBase;
	#endif

	#ifdef HAVING_glTransformFeedbackBufferRange
	PROC_glTransformFeedbackBufferRange glTransformFeedbackBufferRange;
	#endif

	#ifdef HAVING_glGetTransformFeedbackiv
	PROC_glGetTransformFeedbackiv glGetTransformFeedbackiv;
	#endif

	#ifdef HAVING_glGetTransformFeedbacki_v
	PROC_glGetTransformFeedbacki_v glGetTransformFeedbacki_v;
	#endif

	#ifdef HAVING_glGetTransformFeedbacki64_v
	PROC_glGetTransformFeedbacki64_v glGetTransformFeedbacki64_v;
	#endif

	#ifdef HAVING_glCreateBuffers
	PROC_glCreateBuffers glCreateBuffers;
	#endif

	#ifdef HAVING_glNamedBufferStorage
	PROC_glNamedBufferStorage glNamedBufferStorage;
	#endif

	#ifdef HAVING_glNamedBufferData
	PROC_glNamedBufferData glNamedBufferData;
	#endif

	#ifdef HAVING_glNamedBufferSubData
	PROC_glNamedBufferSubData glNamedBufferSubData;
	#endif

	#ifdef HAVING_glCopyNamedBufferSubData
	PROC_glCopyNamedBufferSubData glCopyNamedBufferSubData;
	#endif

	#ifdef HAVING_glClearNamedBufferData
	PROC_glClearNamedBufferData glClearNamedBufferData;
	#endif

	#ifdef HAVING_glClearNamedBufferSubData
	PROC_glClearNamedBufferSubData glClearNamedBufferSubData;
	#endif

	#ifdef HAVING_glMapNamedBuffer
	PROC_glMapNamedBuffer glMapNamedBuffer;
	#endif

	#ifdef HAVING_glMapNamedBufferRange
	PROC_glMapNamedBufferRange glMapNamedBufferRange;
	#endif

	#ifdef HAVING_glUnmapNamedBuffer
	PROC_glUnmapNamedBuffer glUnmapNamedBuffer;
	#endif

	#ifdef HAVING_glFlushMappedNamedBufferRange
	PROC_glFlushMappedNamedBufferRange glFlushMappedNamedBufferRange;
	#endif

	#ifdef HAVING_glGetNamedBufferParameteriv
	PROC_glGetNamedBufferParameteriv glGetNamedBufferParameteriv;
	#endif

	#ifdef HAVING_glGetNamedBufferParameteri64v
	PROC_glGetNamedBufferParameteri64v glGetNamedBufferParameteri64v;
	#endif

	#ifdef HAVING_glGetNamedBufferPointerv
	PROC_glGetNamedBufferPointerv glGetNamedBufferPointerv;
	#endif

	#ifdef HAVING_glGetNamedBufferSubData
	PROC_glGetNamedBufferSubData glGetNamedBufferSubData;
	#endif

	#ifdef HAVING_glCreateFramebuffers
	PROC_glCreateFramebuffers glCreateFramebuffers;
	#endif

	#ifdef HAVING_glNamedFramebufferRenderbuffer
	PROC_glNamedFramebufferRenderbuffer glNamedFramebufferRenderbuffer;
	#endif

	#ifdef HAVING_glNamedFramebufferParameteri
	PROC_glNamedFramebufferParameteri glNamedFramebufferParameteri;
	#endif

	#ifdef HAVING_glNamedFramebufferTexture
	PROC_glNamedFramebufferTexture glNamedFramebufferTexture;
	#endif

	#ifdef HAVING_glNamedFramebufferTextureLayer
	PROC_glNamedFramebufferTextureLayer glNamedFramebufferTextureLayer;
	#endif

	#ifdef HAVING_glNamedFramebufferDrawBuffer
	PROC_glNamedFramebufferDrawBuffer glNamedFramebufferDrawBuffer;
	#endif

	#ifdef HAVING_glNamedFramebufferDrawBuffers
	PROC_glNamedFramebufferDrawBuffers glNamedFramebufferDrawBuffers;
	#endif

	#ifdef HAVING_glNamedFramebufferReadBuffer
	PROC_glNamedFramebufferReadBuffer glNamedFramebufferReadBuffer;
	#endif

	#ifdef HAVING_glInvalidateNamedFramebufferData
	PROC_glInvalidateNamedFramebufferData glInvalidateNamedFramebufferData;
	#endif

	#ifdef HAVING_glInvalidateNamedFramebufferSubData
	PROC_glInvalidateNamedFramebufferSubData glInvalidateNamedFramebufferSubData;
	#endif

	#ifdef HAVING_glClearNamedFramebufferiv
	PROC_glClearNamedFramebufferiv glClearNamedFramebufferiv;
	#endif

	#ifdef HAVING_glClearNamedFramebufferuiv
	PROC_glClearNamedFramebufferuiv glClearNamedFramebufferuiv;
	#endif

	#ifdef HAVING_glClearNamedFramebufferfv
	PROC_glClearNamedFramebufferfv glClearNamedFramebufferfv;
	#endif

	#ifdef HAVING_glClearNamedFramebufferfi
	PROC_glClearNamedFramebufferfi glClearNamedFramebufferfi;
	#endif

	#ifdef HAVING_glBlitNamedFramebuffer
	PROC_glBlitNamedFramebuffer glBlitNamedFramebuffer;
	#endif

	#ifdef HAVING_glCheckNamedFramebufferStatus
	PROC_glCheckNamedFramebufferStatus glCheckNamedFramebufferStatus;
	#endif

	#ifdef HAVING_glGetNamedFramebufferParameteriv
	PROC_glGetNamedFramebufferParameteriv glGetNamedFramebufferParameteriv;
	#endif

	#ifdef HAVING_glGetNamedFramebufferAttachmentParameteriv
	PROC_glGetNamedFramebufferAttachmentParameteriv glGetNamedFramebufferAttachmentParameteriv;
	#endif

	#ifdef HAVING_glCreateRenderbuffers
	PROC_glCreateRenderbuffers glCreateRenderbuffers;
	#endif

	#ifdef HAVING_glNamedRenderbufferStorage
	PROC_glNamedRenderbufferStorage glNamedRenderbufferStorage;
	#endif

	#ifdef HAVING_glNamedRenderbufferStorageMultisample
	PROC_glNamedRenderbufferStorageMultisample glNamedRenderbufferStorageMultisample;
	#endif

	#ifdef HAVING_glGetNamedRenderbufferParameteriv
	PROC_glGetNamedRenderbufferParameteriv glGetNamedRenderbufferParameteriv;
	#endif

	#ifdef HAVING_glCreateTextures
	PROC_glCreateTextures glCreateTextures;
	#endif

	#ifdef HAVING_glTextureBuffer
	PROC_glTextureBuffer glTextureBuffer;
	#endif

	#ifdef HAVING_glTextureBufferRange
	PROC_glTextureBufferRange glTextureBufferRange;
	#endif

	#ifdef HAVING_glTextureStorage1D
	PROC_glTextureStorage1D glTextureStorage1D;
	#endif

	#ifdef HAVING_glTextureStorage2D
	PROC_glTextureStorage2D glTextureStorage2D;
	#endif

	#ifdef HAVING_glTextureStorage3D
	PROC_glTextureStorage3D glTextureStorage3D;
	#endif

	#ifdef HAVING_glTextureStorage2DMultisample
	PROC_glTextureStorage2DMultisample glTextureStorage2DMultisample;
	#endif

	#ifdef HAVING_glTextureStorage3DMultisample
	PROC_glTextureStorage3DMultisample glTextureStorage3DMultisample;
	#endif

	#ifdef HAVING_glTextureSubImage1D
	PROC_glTextureSubImage1D glTextureSubImage1D;
	#endif

	#ifdef HAVING_glTextureSubImage2D
	PROC_glTextureSubImage2D glTextureSubImage2D;
	#endif

	#ifdef HAVING_glTextureSubImage3D
	PROC_glTextureSubImage3D glTextureSubImage3D;
	#endif

	#ifdef HAVING_glCompressedTextureSubImage1D
	PROC_glCompressedTextureSubImage1D glCompressedTextureSubImage1D;
	#endif

	#ifdef HAVING_glCompressedTextureSubImage2D
	PROC_glCompressedTextureSubImage2D glCompressedTextureSubImage2D;
	#endif

	#ifdef HAVING_glCompressedTextureSubImage3D
	PROC_glCompressedTextureSubImage3D glCompressedTextureSubImage3D;
	#endif

	#ifdef HAVING_glCopyTextureSubImage1D
	PROC_glCopyTextureSubImage1D glCopyTextureSubImage1D;
	#endif

	#ifdef HAVING_glCopyTextureSubImage2D
	PROC_glCopyTextureSubImage2D glCopyTextureSubImage2D;
	#endif

	#ifdef HAVING_glCopyTextureSubImage3D
	PROC_glCopyTextureSubImage3D glCopyTextureSubImage3D;
	#endif

	#ifdef HAVING_glTextureParameterf
	PROC_glTextureParameterf glTextureParameterf;
	#endif

	#ifdef HAVING_glTextureParameterfv
	PROC_glTextureParameterfv glTextureParameterfv;
	#endif

	#ifdef HAVING_glTextureParameteri
	PROC_glTextureParameteri glTextureParameteri;
	#endif

	#ifdef HAVING_glTextureParameterIiv
	PROC_glTextureParameterIiv glTextureParameterIiv;
	#endif

	#ifdef HAVING_glTextureParameterIuiv
	PROC_glTextureParameterIuiv glTextureParameterIuiv;
	#endif

	#ifdef HAVING_glTextureParameteriv
	PROC_glTextureParameteriv glTextureParameteriv;
	#endif

	#ifdef HAVING_glGenerateTextureMipmap
	PROC_glGenerateTextureMipmap glGenerateTextureMipmap;
	#endif

	#ifdef HAVING_glBindTextureUnit
	PROC_glBindTextureUnit glBindTextureUnit;
	#endif

	#ifdef HAVING_glGetTextureImage
	PROC_glGetTextureImage glGetTextureImage;
	#endif

	#ifdef HAVING_glGetCompressedTextureImage
	PROC_glGetCompressedTextureImage glGetCompressedTextureImage;
	#endif

	#ifdef HAVING_glGetTextureLevelParameterfv
	PROC_glGetTextureLevelParameterfv glGetTextureLevelParameterfv;
	#endif

	#ifdef HAVING_glGetTextureLevelParameteriv
	PROC_glGetTextureLevelParameteriv glGetTextureLevelParameteriv;
	#endif

	#ifdef HAVING_glGetTextureParameterfv
	PROC_glGetTextureParameterfv glGetTextureParameterfv;
	#endif

	#ifdef HAVING_glGetTextureParameterIiv
	PROC_glGetTextureParameterIiv glGetTextureParameterIiv;
	#endif

	#ifdef HAVING_glGetTextureParameterIuiv
	PROC_glGetTextureParameterIuiv glGetTextureParameterIuiv;
	#endif

	#ifdef HAVING_glGetTextureParameteriv
	PROC_glGetTextureParameteriv glGetTextureParameteriv;
	#endif

	#ifdef HAVING_glCreateVertexArrays
	PROC_glCreateVertexArrays glCreateVertexArrays;
	#endif

	#ifdef HAVING_glDisableVertexArrayAttrib
	PROC_glDisableVertexArrayAttrib glDisableVertexArrayAttrib;
	#endif

	#ifdef HAVING_glEnableVertexArrayAttrib
	PROC_glEnableVertexArrayAttrib glEnableVertexArrayAttrib;
	#endif

	#ifdef HAVING_glVertexArrayElementBuffer
	PROC_glVertexArrayElementBuffer glVertexArrayElementBuffer;
	#endif

	#ifdef HAVING_glVertexArrayVertexBuffer
	PROC_glVertexArrayVertexBuffer glVertexArrayVertexBuffer;
	#endif

	#ifdef HAVING_glVertexArrayVertexBuffers
	PROC_glVertexArrayVertexBuffers glVertexArrayVertexBuffers;
	#endif

	#ifdef HAVING_glVertexArrayAttribBinding
	PROC_glVertexArrayAttribBinding glVertexArrayAttribBinding;
	#endif

	#ifdef HAVING_glVertexArrayAttribFormat
	PROC_glVertexArrayAttribFormat glVertexArrayAttribFormat;
	#endif

	#ifdef HAVING_glVertexArrayAttribIFormat
	PROC_glVertexArrayAttribIFormat glVertexArrayAttribIFormat;
	#endif

	#ifdef HAVING_glVertexArrayAttribLFormat
	PROC_glVertexArrayAttribLFormat glVertexArrayAttribLFormat;
	#endif

	#ifdef HAVING_glVertexArrayBindingDivisor
	PROC_glVertexArrayBindingDivisor glVertexArrayBindingDivisor;
	#endif

	#ifdef HAVING_glGetVertexArrayiv
	PROC_glGetVertexArrayiv glGetVertexArrayiv;
	#endif

	#ifdef HAVING_glGetVertexArrayIndexediv
	PROC_glGetVertexArrayIndexediv glGetVertexArrayIndexediv;
	#endif

	#ifdef HAVING_glGetVertexArrayIndexed64iv
	PROC_glGetVertexArrayIndexed64iv glGetVertexArrayIndexed64iv;
	#endif

	#ifdef HAVING_glCreateSamplers
	PROC_glCreateSamplers glCreateSamplers;
	#endif

	#ifdef HAVING_glCreateProgramPipelines
	PROC_glCreateProgramPipelines glCreateProgramPipelines;
	#endif

	#ifdef HAVING_glCreateQueries
	PROC_glCreateQueries glCreateQueries;
	#endif

	#ifdef HAVING_glGetQueryBufferObjecti64v
	PROC_glGetQueryBufferObjecti64v glGetQueryBufferObjecti64v;
	#endif

	#ifdef HAVING_glGetQueryBufferObjectiv
	PROC_glGetQueryBufferObjectiv glGetQueryBufferObjectiv;
	#endif

	#ifdef HAVING_glGetQueryBufferObjectui64v
	PROC_glGetQueryBufferObjectui64v glGetQueryBufferObjectui64v;
	#endif

	#ifdef HAVING_glGetQueryBufferObjectuiv
	PROC_glGetQueryBufferObjectuiv glGetQueryBufferObjectuiv;
	#endif

	#ifdef HAVING_glMemoryBarrierByRegion
	PROC_glMemoryBarrierByRegion glMemoryBarrierByRegion;
	#endif

	#ifdef HAVING_glGetTextureSubImage
	PROC_glGetTextureSubImage glGetTextureSubImage;
	#endif

	#ifdef HAVING_glGetCompressedTextureSubImage
	PROC_glGetCompressedTextureSubImage glGetCompressedTextureSubImage;
	#endif

	#ifdef HAVING_glGetGraphicsResetStatus
	PROC_glGetGraphicsResetStatus glGetGraphicsResetStatus;
	#endif

	#ifdef HAVING_glGetnCompressedTexImage
	PROC_glGetnCompressedTexImage glGetnCompressedTexImage;
	#endif

	#ifdef HAVING_glGetnTexImage
	PROC_glGetnTexImage glGetnTexImage;
	#endif

	#ifdef HAVING_glGetnUniformdv
	PROC_glGetnUniformdv glGetnUniformdv;
	#endif

	#ifdef HAVING_glGetnUniformfv
	PROC_glGetnUniformfv glGetnUniformfv;
	#endif

	#ifdef HAVING_glGetnUniformiv
	PROC_glGetnUniformiv glGetnUniformiv;
	#endif

	#ifdef HAVING_glGetnUniformuiv
	PROC_glGetnUniformuiv glGetnUniformuiv;
	#endif

	#ifdef HAVING_glReadnPixels
	PROC_glReadnPixels glReadnPixels;
	#endif

	#ifdef HAVING_glTextureBarrier
	PROC_glTextureBarrier glTextureBarrier;
	#endif

	#ifdef HAVING_glSwapInterval
	PROC_glSwapInterval glSwapInterval;
	#endif


}

#if defined(_WIN32) || defined(_WIN64)

#include <Windows.h>

namespace OpenGL {
	HMODULE opengl32;

	typedef const void * (__stdcall * PROC_wglGetProcAddress)(const char *);
	typedef const void * (__stdcall * PROC_wglGetCurrentContext)();

	PROC_wglGetProcAddress wglGetProcAddress;
	PROC_wglGetCurrentContext wglGetCurrentContext;

	const void * GetOpenGLFunction(const char * name) {
		const void * result = (const void *)GetProcAddress(opengl32, name);

		if (!result) {
			result = OpenGL::wglGetProcAddress(name);
		}

		return result;
	}

	bool InitializeOpenGL() {
		opengl32 = LoadLibrary("opengl32.dll");

		if (!opengl32) {
			return false;
		}

		OpenGL::wglGetProcAddress = (PROC_wglGetProcAddress)GetProcAddress(opengl32, "wglGetProcAddress");

		if (!OpenGL::wglGetProcAddress) {
			return false;
		}

		OpenGL::wglGetCurrentContext = (PROC_wglGetCurrentContext)GetProcAddress(opengl32, "wglGetCurrentContext");

		if (!OpenGL::wglGetCurrentContext) {
			return false;
		}

		if (!OpenGL::wglGetCurrentContext()) {
			return false;
		}

		if (!LoadCoreOpenGLFunctions()) {
			return false;
		}
		
		OpenGL::glSwapInterval = (PROC_glSwapInterval)GetProcAddress(opengl32, "wglSwapIntervalEXT");

		return true;
	}

}

#else

#include <dlfcn.h>

namespace OpenGL {
	void * libgl;

	typedef const void * (* PROC_glXGetProcAddress)(const char *);
	typedef const void * (* PROC_glXGetCurrentContext)();

	PROC_glXGetProcAddress glXGetProcAddress;
	PROC_glXGetCurrentContext glXGetCurrentContext;

	const void * GetOpenGLFunction(const char * name) {
		const void * result = dlsym(libgl, name);

		if (!result) {
			result = OpenGL::glXGetProcAddress(name);
		}

		return result;
	}

	bool InitializeOpenGL() {
		libgl = dlopen("libGL.so.1", RTLD_LAZY);

		if (!libgl) {
			return false;
		}

		OpenGL::glXGetProcAddress = (PROC_glXGetProcAddress)dlsym(libgl, "glXGetProcAddress");

		if (!OpenGL::glXGetProcAddress) {
			return false;
		}

		OpenGL::glXGetCurrentContext = (PROC_glXGetCurrentContext)dlsym(libgl, "glXGetCurrentContext");

		if (!OpenGL::glXGetCurrentContext) {
			return false;
		}

		if (!OpenGL::glXGetCurrentContext()) {
			return false;
		}

		if (!LoadCoreOpenGLFunctions()) {
			return false;
		}

		return true;
	}
}

#endif
