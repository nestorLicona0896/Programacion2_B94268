#ifndef PLANILLA_H
#define PLANILLA_h

#include "empleado.h"
#include <vector>

using namespace std;

class Planilla {

    vector <Empleado *> empleadosEnPlanilla; // representa la lista de empleados

    public:
        Planilla();
        ~Planilla();

        void AgregarEmpleado(Empleado *empleadoNuevo); // permite añadir un nuevo empleado a la planilla
        float CalcularTotalPlanilla(); // permite calcular el total de costo en la planilla
        string MostrarPlanilla();
};



#endif