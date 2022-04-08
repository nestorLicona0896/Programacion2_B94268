#include "empleadoPorHoras.h"

using namespace std;

EmpleadoPorHora::EmpleadoPorHora(float salarioPorHora, string nombre){
    this->salarioPorHora = salarioPorHora;
    this->nombre = nombre;
}

float EmpleadoPorHora::CalculoSalario(){
    return 0;
}