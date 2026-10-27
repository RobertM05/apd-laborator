#include "config.h"

float convertAdcToVoltage(int rawAdc) {
    return (rawAdc * 5.0f) / 1023.0f;
}

void setup() {
    Serial.begin(SERIAL_BAUD);
}


void loop() {
    int raw = analogRead(SENSOR_PIN);
    Serial.println(raw);
    delay(SAMPLE_PERIOD_MS);
}