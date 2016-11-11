#include "LoadEvent.hpp"

namespace {
	int event_handlers_len = 0;
	LoadEventHandler event_handlers[1024];
}

bool RegisterLoadEventHandler(const LoadEventHandler & handler) {
	event_handlers[event_handlers_len++] = handler;
	return true;
}

void SendLoadEvent() {
	for (int i = 0; i < event_handlers_len; ++i) {
		event_handlers[i]();
	}
}
