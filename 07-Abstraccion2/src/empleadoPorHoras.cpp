#include "empleadoPorHoras.h"

using namespace std;

EmpleadoPorHoras::EmpleadoPorHoras(float costoPorHoras, int horasEnMes, string nombre)
{
    this->costoPorHoras = costoPorHoras;
    this->horasEnMes = horasEnMes;
    this->nombre = nombre;
}

float EmpleadoPorHoras::CalculoPago()
{
    return this->costoPorHoras * this->horasEnMes;
}

string EmpleadoPorHoras::ObtenerNombre() {
    return "Empleado por horas: " + this->nombre;
}

int EmpleadoPorHoras::ObtenerHorasEnMes() {
    return this->horasEnMes;
}