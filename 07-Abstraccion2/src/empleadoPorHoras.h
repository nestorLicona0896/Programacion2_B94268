#ifndef EMPLEADOPORHORAS_H
#define EMPLEADOPORHORAS_H

#include "empleado.h"

using namespace std;

class EmpleadoPorHoras : public Empleado {

    float costoPorHoras;
    int horasEnMes;

    public:
    EmpleadoPorHoras(float costoPorHoras, int horasEnMes, string nombre);

    virtual float CalculoPago(); 
    virtual string ObtenerNombre();
    int ObtenerHorasEnMes();
};

#endif