#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>

// la clase empleado es una clase abstracta que puede heredar sus metodos mediante sobrecargas a otras clases
using namespace std;

class Empleado {
    // la clausula deja que los atributos seana ccesibles para las clases herederas
    protected:
        string nombre;

    public:
        // método abstracto
        virtual float CalculoSalario () = 0;

};

#endif

//LA CLASE ABSTRACTA NO POSEE CONSTRUCTOR