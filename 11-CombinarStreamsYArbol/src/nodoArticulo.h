#ifndef NODO_ARTICULO_H
#define NODO_ARTICULO_H

#include <string>
#include <iostream>
//#include "nodoCategoria.h"

using namespace std;

class NodoArticulo 
{

    int idArticulo;
    string nombreArticulo;
    int idCategoria;
    //NodoCategoria *categoriaPadre;   

    public:

        NodoArticulo();
        NodoArticulo(int idArticuloNuevo, string nombreArticuloNuevo, int idCategoriaNuevo);
        ~NodoArticulo();

        friend istream &operator >> (istream &i, NodoArticulo *NodoArticulo);
        friend ostream &operator << (ostream &o, const NodoArticulo *NodoArticulo);        

        //void AsignarCategoria(NodoCategoria *categoriaPadre);

};

#endif