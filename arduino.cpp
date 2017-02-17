#include <Arduino.h>
#include "StreamBridge.h"
#include "display/display.h"

display_t display;

void setup() {
	pinMode(13, OUTPUT);
	digitalWrite(13, LOW);
	StreamBridge.begin();
	
	display_initDisplay(&display);
	
	digitalWrite(13, HIGH);
}

void loop() {
	while(true) {

		display_render(&display);
		
		
//		StreamBridge.write("abc ", 4);
		delay(250);
	}
}