#ifndef NODO_ARTICULO_H
#define NODO_ARTICULO_H

#include <string>
#include <iostream>

using namespace std;

class NodoArticulo 
{

    int idArticulo;
    string nombreArticulo;
    int idCategoria; 

    public:

        NodoArticulo();
        NodoArticulo(int idArticuloNuevo, string nombreArticuloNuevo, int idCategoriaNuevo);
        ~NodoArticulo();

        friend istream &operator >> (istream &i, NodoArticulo *NodoArticulo);
        friend ostream &operator << (ostream &o, const NodoArticulo *NodoArticulo);        
};

#endif