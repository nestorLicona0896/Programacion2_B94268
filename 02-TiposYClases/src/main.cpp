#include <iostream>
#include <string> // libreria para usar la clase String
#include "calculadora.h"

using namespace std;

int main() {

    int contador = 0; // declaracion e inicializacion
    int contador2 {1}; // inicializacion de una variable, se usa mas que todo para clases
    int contador3 ; // el valor no esta inicializado y c++ lo toma como un error a la hora de ejecutar

    int x[] = {1,2,3}; // arreglo de tamaño 3
    int y[5] = {4,5,6}; // arreglo de tamaño 5 que tendrá 3 valores iniciales y luego 0s
    int z[3] = {0}; // arreglo de tamaño 3 todos los valores inician en 0

    string ejemplo1 = "este es un string de ejemplo";
    string ejemplo2 {"este es un string de ejemplo"};

    // instancia de una clase (objeto tipo de clase)
    Calculadora calculadora {0}; 
    
    int resultado = calculadora.sumar(1024, 512); // se hace una llamado al metodo de la clase calculadora

    cout << "el resultado de la suma es: " << resultado << endl;

    int valor = 0;
    cout << "el resultado del factorial de: " << valor << " es: " << calculadora.factorial(valor) << endl;
    return 0; 

}