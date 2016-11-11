#pragma once

#include "Graphics/GLVersion.hpp"

typedef void (* VersionChangeEventHandler)(GLVER);

bool RegisterVersionChangeEventHandler(const VersionChangeEventHandler & handler);
void SendVersionChangeEvent(GLVER version);
