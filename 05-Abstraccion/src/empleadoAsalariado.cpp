// es la clase que hereda de Asalareado sus metodos y tiene acceso a los atributos

#include "empleadoAsalariado.h"

using namespace std;

// sobrecarga del metodo constructor de la clase EmpleadoAsalariado.h:
EmpleadoAsalariado::EmpleadoAsalariado(float salarioMensual, string nombre)
{
    this->salarioMensual = salarioMensual;
    this->nombre = nombre;
}

// sobrecarga del método para calcular el salario de un empleado asalariado por mes
// sobrecarga del metodo constructor:
float EmpleadoAsalariado::CalculoPago()
{
    return this->ObtenerSalarioMensual();
}

string EmpleadoAsalariado::ObtenerNombre () {
    return "Empleado aslariado: " + this->nombre;
}

float EmpleadoAsalariado::ObtenerSalarioMensual(){
    return this->salarioMensual;
}