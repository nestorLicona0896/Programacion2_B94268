#include "empleadoPorHoras.h"

using namespace std;

EmpleadoPorHoras::EmpleadoPorHoras(float costoPorHora, int horasEnMes, string nombre){
    this->costoPorHora = costoPorHora;
    this->horasEnMes = horasEnMes;
    this->nombre = nombre;
}

float EmpleadoPorHoras::CalculoPago(){
    return this->costoPorHora * this->ObtenerHorasEnMes();
}


string EmpleadoPorHoras::ObtenerNombre() {
    return "Empleado por horas: " + this->nombre;
}


int EmpleadoPorHoras::ObtenerHorasEnMes(){
    return this->horasEnMes;
}

