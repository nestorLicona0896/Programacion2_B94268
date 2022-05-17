#ifndef CUENTA_PALABRAS_H
#define CUENTA_PALABRAS_H

#include <istream>
#include <string>

using namespace std;

class CuentaPalabras {

    istream *streamEntrada;

    public:
    // Inyección de dependencias; el stream de tipo istream no sabe si la entrda proviene de la consola, o de un archivo...solo se sabe que es un stream de entrada
    CuentaPalabras(istream *streamEntradaNuevo);
    ~CuentaPalabras();

    int ContarPalabras();

};

#endif