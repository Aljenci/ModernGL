#pragma once

#include "Types/Uniform.hpp"

#include <map>
#include <string>

typedef std::map<std::string, Uniform *> UniformMap;
typedef std::map<std::string, Uniform *>::iterator UniformMapIterator;

UniformMap * GetProgramUniforms(int program);
