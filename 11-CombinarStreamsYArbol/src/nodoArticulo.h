#ifndef NODO_ARTICULO_H
#define NODO_ARTICULO_H

#include <string>
#include <iostream>
#include "nodoCategoria.h"

using namespace std;

class NodoArticulo {

    int idArticulo;
    string nombreArticulo;
    int idCategoria;
    //NodoCategoria *categoria;    

    public:

        NodoArticulo();
        NodoArticulo(int idArticuloNuevo, string nombreArticuloNuevo, int idCategoriaNuevo);
        ~NodoArticulo();

        // sobrecargas a los operadores para a la hora de añadir un articulo apartir de informacion proveniente de datos stream
        // esta sea tratada como un flujo de datos unitario dentro del NodoArticulo
        friend istream &operator >> (istream &i, NodoArticulo *NodoArticulo);
        friend ostream &operator << (ostream &o, const NodoArticulo *NodoArticulo);        

       // void AsignarCategoria(NodoCategoria *categoria);

};

#endif