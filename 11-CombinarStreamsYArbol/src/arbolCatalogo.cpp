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

void ArbolCatalogo::AgregarArticulo(int idArticuloNuevo, string nombreArticuloNuevo, int idCategoriaNuevo){
    NodoArticulo *articuloNuevo = new NodoArticulo(idArticuloNuevo, nombreArticuloNuevo, idCategoriaNuevo);
    this->categorias.at(idCategoriaNuevo-1)->AgregarArticulo(articuloNuevo);
    this->articulosCategorizados.insert(pair<int, NodoArticulo*>(idCategoriaNuevo, articuloNuevo));
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
        o << "categoria: " << nodoCategoria <<  endl;
        for(NodoArticulo *nodoArticulo : nodoCategoria->ObetenerListaArticulos()){
            o << nodoArticulo << endl;
        }        
    }
    return o;
}



