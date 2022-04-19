using namespace std;

#include "empleado.h"
#include "empleadoAsalariado.h"
#include "empleadoPorHoras.h"

#include <vector>
#include <iostream>

using namespace std;

int main () {

    // generacion de 2 instancias de tipo Empleado mediante sus clases herederas
    EmpleadoAsalariado* empleadoAsalariado1 = new EmpleadoAsalariado(3500, "Emilio");
    EmpleadoPorHoras* empleadoPorHoras1 = new EmpleadoPorHoras(50, 56, "Beñat");

    // creacion de un vector de tipo Empleado:
    vector<Empleado*> vectorEmpleados;

    //insercion de elementos a un vector:
    vectorEmpleados.push_back(empleadoAsalariado1);
    vectorEmpleados.push_back(empleadoPorHoras1);

    // recorrer el vector con un puntero y mostrar el resultado de la funcion calculoSalario
    for(Empleado* empleado: vectorEmpleados ){
        cout << empleado->ObtenerNombre() << endl 
        << "salario reportado: " << empleado->CalculoPago() << endl << endl;    
    }

    // liberacion de la memoria heap:
    delete empleadoAsalariado1;
    delete empleadoPorHoras1;

    return 0;
}