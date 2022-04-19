#include "planilla.h"
#include <string>
#include <sstream>

using namespace std;

Planilla::Planilla(){

}

Planilla::~Planilla(){ // para limpiar la lista de al planila se debe de limpiar el vector
    for (Empleado* empleado : this->empleadosEnPlanilla)
    {
        delete empleado;
    }

    this->empleadosEnPlanilla.clear();
}

void Planilla::AgregarEmpleado(Empleado *empleadoNuevo){
        this->empleadosEnPlanilla.push_back(empleadoNuevo);
}

float Planilla::CalcularTotalPlanilla(){
    float sumaTotal;
    for (Empleado* empleado : this->empleadosEnPlanilla)
    {
        sumaTotal += empleado->CalculoPago();
    }
    return sumaTotal;
}

string Planilla::MostrarPlanilla(){ // para limpiar la lista de al planila se debe de limpiar el vector
    string planilla = "";
    for (Empleado* empleado : this->empleadosEnPlanilla)
    {
        planilla += empleado->ObtenerNombre(); 
        planilla += "\npago del último mes: ";  
        planilla += to_string(empleado->CalculoPago());  
        planilla += "\n";
    }
    return planilla;
   
}