#include "cuentaPalabras.h"
#include <iostream>
#include <sstream>

using namespace std;

CuentaPalabras::CuentaPalabras(istream *nuevaEntradaStream){
    this->streamEntrada =  nuevaEntradaStream;
}

CuentaPalabras::~CuentaPalabras(){

}

int CuentaPalabras::ContarPalabras(){
    string linea{}; // almacena el contenido de una linea de texto
    string palabra{}; // almacena una palabra extraido de la linea de texto

    int conteoPalabras{0}; // almacena la cantidad de palabras total

    while(getline(*(this->streamEntrada), linea)){ // recorre un párrafo y almacena cada linea para procesarla
        istringstream stream(linea); // extrae de una linea de texto los caracteres agrupados como palabras, internamente lo hace mediante el constructor istream atraves de un puntero a un buffer de string
        while(stream >> palabra){ // 
            conteoPalabras++; 
        }
    }
    return conteoPalabras;
}