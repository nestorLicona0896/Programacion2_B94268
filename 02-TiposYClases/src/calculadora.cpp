// este archivo es para implementar la funcionalidad de la clase calculadora

#include "calculadora.h"

Calculadora::Calculadora(int unUltimoResultado){
    this->ultimoResultado = unUltimoResultado;

}

int Calculadora::sumar(int val1, int val2){
    return val1 + val2;

}

int Calculadora::factorial(int val){
    if(val > 1){
        return val*factorial(val-1);
    }

    return 1;

}