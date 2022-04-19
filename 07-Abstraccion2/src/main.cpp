#include "empleado.h"
#include "empleadoPorHoras.h"
#include "empleadoAsalariado.h"
#include "planilla.h"

#include <iostream>

using namespace std;


int main () {

    Planilla *planillaEmpleados = new Planilla(); // la planilla para almacenar los empleados que serám ordenados en un vector

    EmpleadoPorHoras *empleadoPorHoras1 = new EmpleadoPorHoras(55, 48, "Juan Araúz");
    planillaEmpleados->AgregarEmpleado(empleadoPorHoras1);

    EmpleadoAsalariado *empleadoAsalariado1 = new EmpleadoAsalariado(3200, "Ponce de León");
    planillaEmpleados->AgregarEmpleado(empleadoAsalariado1);

    cout << "Lista de empleados: \n" << planillaEmpleados->MostrarPlanilla() << endl;
    cout << "suma del gasto total por planilla: " << planillaEmpleados->CalcularTotalPlanilla() << endl,

    delete planillaEmpleados;
    return 0;
}