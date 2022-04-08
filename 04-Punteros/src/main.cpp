
#include "calculadora.h"

using namespace std;

int main () {

    //declaracion de un puntero sencillo

    Calculadora* cal1;

    // inicializacion del puntero de tipo Calculadora

    cal1 = new Calculadora();

    // acceso a un mimbro o funcion de la clase Calculadora mediante el puntero
    int resultado = cal1->sumar(4, 4);

    // los punteros se deben de liberar de la memoria (heap)
    delete cal1;

    return 0;

}