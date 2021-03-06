#include "nodoCategoria.h"

NodoCategoria::NodoCategoria(){
    
}

NodoCategoria::NodoCategoria(int idCategoriaNuevo, string nombreCategoriaNuevo , int idSuperCategoriaNuevo){
    this->idCategoria = idCategoriaNuevo;
    this->nombreCategoria = nombreCategoriaNuevo;
    this->idSuperCategoria = idSuperCategoriaNuevo;
}

NodoCategoria::~NodoCategoria(){
    for(NodoArticulo *nodo : this->listaArticulos){
        delete nodo;
    }
}

istream& operator >> (istream &i, NodoCategoria *nodoCategoria) {
    i >> nodoCategoria->idCategoria >> nodoCategoria->nombreCategoria >> nodoCategoria->idSuperCategoria;
    return i;
}

ostream& operator << (ostream &o, const NodoCategoria *nodoCategoria) {
    o << nodoCategoria->idCategoria << ", " << nodoCategoria->nombreCategoria << ", " << nodoCategoria->idSuperCategoria;
    return o;
}

vector <NodoArticulo*> NodoCategoria::ObetenerListaArticulos(){
    return this->listaArticulos;
}

void NodoCategoria::AgregarArticulo(NodoArticulo *nuevoArticulo){
    this->listaArticulos.push_back(nuevoArticulo);
}