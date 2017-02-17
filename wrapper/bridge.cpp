#include "bridge.h"
//#include "../StreamBridge.h"

extern SerialStreamBridgeClass StreamBridge;

void streambridge_write(void *data, size_t size) {
	StreamBridge.write(data, size);
}