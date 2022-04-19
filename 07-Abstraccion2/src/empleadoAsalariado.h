#ifndef EMPLEADOASALARIADO_H
#define EMPLEADOASALARIADO_H

#include "empleado.h"

using namespace std;

class EmpleadoAsalariado : public Empleado {

    float salarioMensual;

    public:
    EmpleadoAsalariado(float salarioMensual, string nombre);

    virtual float CalculoPago(); 
    virtual string ObtenerNombre(); 

};

#endif