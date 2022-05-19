#include "arbolCatalogo.h"
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

ArbolCatalogo::ArbolCatalogo(){
    
}

ArbolCatalogo::~ArbolCatalogo(){
    for(NodoCategoria *nodoCategoria : this->categorias){
        delete nodoCategoria;
    }    
}

void ArbolCatalogo::AgregarCategoria(NodoCategoria *categoriaNueva){
    this->categorias.push_back(categoriaNueva);
}

void ArbolCatalogo::AgregarArticulo(int idArticuloNuevo, string nombreArticuloNuevo, int idCategoriaArticuloNuevo){
    
}

istream& operator >> (istream &i, ArbolCatalogo *catalogo) {
    string linea;

    while(getline(i, linea)) {
        istringstream streamLinea(linea);

        NodoCategoria *nodoCategoriaNuevo = new NodoCategoria();
        streamLinea >> nodoCategoriaNuevo;

        catalogo->AgregarCategoria(nodoCategoriaNuevo);        
    }
    return i;
}

ostream& operator << (ostream &o, const ArbolCatalogo *catalogo){
    for(NodoCategoria *nodoCategoria : catalogo->categorias){
        o << nodoCategoria << endl;
    }
    return o;
}



