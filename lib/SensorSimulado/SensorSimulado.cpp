#include <Arduino.h>
#include "SensorSimulado.h"
#include <stdlib.h>

SensorSimulado::SensorSimulado(float minimo, float maximo) {
    min = minimo;
    max = maximo;
    generarValor(); // Generar un valor inicial
}

void SensorSimulado::generarValor() {
    val = min + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX / (max - min)));
}
