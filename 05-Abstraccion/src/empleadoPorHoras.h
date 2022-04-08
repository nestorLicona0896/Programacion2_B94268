#ifndef EMPLEADOPORHORA_H
#define EMPLEADOPORHORA_H

#include "empleado.h"

using namespace std;

// la clase empleado es una clase abstracta que puede heredar sus metodos mediante sobrecargas a otras clases

class EmpleadoPorHora : public Empleado {
    
    float salarioPorHora;

    public:
        //metodo constructor
        EmpleadoPorHora(float salario, string nombre);

        virtual float CalculoSalario(); 

};

#endif