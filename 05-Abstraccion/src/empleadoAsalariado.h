#ifndef EMPLEADOASALARIADO_H
#define EMPLEADOASALARIADO_H

#include "empleado.h"

using namespace std;

// la clase empleado es una clase abstracta que puede heredar sus metodos mediante sobrecargas a otras clases

class EmpleadoAslariado:public Empleado {
    
    float salarioMensual;

    public:
        //metodo constructor
        EmpleadoAsalariado(float salario, string nombre);

        virtual float CalculoSalario(); 

};

#endif