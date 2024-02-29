#ifndef SensorSimulado_h
#define SensorSimulado_h

class SensorSimulado {
public:
    float max;
    float min;
    float val;

    SensorSimulado(float minimo, float maximo);
    void generarValor();
};

#endif
