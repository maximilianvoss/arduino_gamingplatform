#ifndef ARDUINO_BRIDGE_H
#define ARDUINO_BRIDGE_H

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void streambridge_write(void *data, size_t size);

#ifdef __cplusplus
}
#endif

#endif
