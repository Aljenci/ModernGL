#include "VersionChangeEvent.hpp"

namespace {
	int event_handlers_len = 0;
	VersionChangeEventHandler event_handlers[1024];
}

bool RegisterVersionChangeEventHandler(const VersionChangeEventHandler & handler) {
	event_handlers[event_handlers_len++] = handler;
	return true;
}

void SendVersionChangeEvent(GLVER version) {
	for (int i = 0; i < event_handlers_len; ++i) {
		event_handlers[i](version);
	}
}
