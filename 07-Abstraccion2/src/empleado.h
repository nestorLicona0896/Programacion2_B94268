#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>

using namespace std;

class Empleado {

    // Privado

    protected:
    string nombre;

    public:
    virtual ~Empleado();

    virtual float CalculoPago() = 0;

    virtual string ObtenerNombre();
};


#endif