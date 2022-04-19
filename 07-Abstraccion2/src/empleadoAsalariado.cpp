#include "empleadoAsalariado.h"

using namespace std;

EmpleadoAsalariado::EmpleadoAsalariado(float salarioMensual, string nombre)
{
    this->salarioMensual = salarioMensual;
    this->nombre = nombre;
}

float EmpleadoAsalariado::CalculoPago()
{
    return this->salarioMensual;
}

string EmpleadoAsalariado::ObtenerNombre() {
    return "Empelado Asalariado : " + this->nombre;
}