#include "calculadora.h"


int Calculadora::Suma(int num1, int num2) {
    return num1 + num2;
}

float Calculadora::Suma(float num1, float num2) {
    return num1 + num2;
}

int Calculadora::OperacionEspecial(int num) {
    int result = 0;
    if (num > 5){
        result = num * 2; 
    } else if (num == 5) {
        result = num * 5;
    } else{
        result = num + 4;
    }
    return result;
}