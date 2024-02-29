#include <Arduino.h>
#include "SensorSimulado.h"

SensorSimulado sensor(0, 100); // Definir min y max del sensor

void setup() {
    Serial.begin(9600);
}

void loop() {
    sensor.generarValor();
    Serial.print("Valor del sensor: ");
    Serial.println(sensor.val);
    delay(1000); // Esperar un segundo
}
