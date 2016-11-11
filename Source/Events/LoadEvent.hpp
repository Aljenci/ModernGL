#pragma once

typedef void (* LoadEventHandler)();

bool RegisterLoadEventHandler(const LoadEventHandler & handler);
void SendLoadEvent();
