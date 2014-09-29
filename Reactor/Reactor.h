#ifndef REACTOR_H
#define REACTOR_H

#include "EventHandler.h"

void register(EventHandler* handler);
void unregister(EventHandler* handler);

#endif
