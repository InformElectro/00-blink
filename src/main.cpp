#include <Arduino.h>

#include "key_proc.h"

void setup() 
{
    pinMode(BLINK_LED, OUTPUT);
    init_key(PUSH);
    Serial.begin(BAUD_RATE);
}

void loop() 
{
    digitalWrite(BLINK_LED,!digitalRead(BLINK_LED));
    test_key();
}
