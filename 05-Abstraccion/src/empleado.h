#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>

// la clase empleado es una clase abstracta que puede heredar sus metodos mediante sobrecargas a otras clases
using namespace std;

class Empleado {
    // la clausula deja que los atributos sean accesibles para las clases herederas
    protected:
    string nombre;

    public:
    // método abstracto
    virtual float CalculoPago() = 0;
    virtual string ObtenerNombre();
};

#endif

// LA CLASE ABSTRACTA NO POSEE CONSTRUCTOR