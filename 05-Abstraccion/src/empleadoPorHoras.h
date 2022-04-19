#ifndef EMPLEADOPORHORA_H
#define EMPLEADOPORHORA_H

#include "empleado.h"

using namespace std;

// la clase empleado es una clase abstracta que puede heredar sus metodos mediante sobrecargas a otras clases

class EmpleadoPorHoras : public Empleado {
    
    float costoPorHora;
    int horasEnMes;

    public:
        //metodo constructor
        EmpleadoPorHoras(float costoPorHora, int horasEnMes, string nombre);
        virtual string ObtenerNombre();                
        int ObtenerHorasEnMes();
        virtual float CalculoPago(); 

};

#endif