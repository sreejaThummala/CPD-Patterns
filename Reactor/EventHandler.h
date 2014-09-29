#ifndef EVENT_HANDLER_H
#define EVENT_HANDLER_H
typedef int Handle;
typedef Handle (*GetHandleFunc)(void* instance);
typedef void (*HandleEventFunc)(void* instance);

typedef struct{
        void* instance;
        GetHandleFunc get_handle;
        HandleEventFunc handle_event;
}EventHandler;

#endif

