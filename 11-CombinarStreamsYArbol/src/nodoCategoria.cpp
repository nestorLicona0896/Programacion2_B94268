#include "nodoCategoria.h"

NodoCategoria::NodoCategoria(){}

NodoCategoria::NodoCategoria(int idCategoriaNuevo, string nombreCategoriaNuevo , int idSuperCategoriaNuevo){
    this->idCategoria = idCategoriaNuevo;
    this->nombreCategoria = nombreCategoriaNuevo;
    this->idSuperCategoria = idSuperCategoriaNuevo;
}

NodoCategoria::~NodoCategoria(){}

istream& operator >> (istream &i, NodoCategoria *NodoCategoriaCategoria) {
    i >> NodoCategoriaCategoria->idCategoria >> NodoCategoriaCategoria->nombreCategoria >> NodoCategoriaCategoria->idSuperCategoria;
    return i;
}

ostream& operator << (ostream &o, const NodoCategoria *NodoCategoriaCategoria) {
    o << NodoCategoriaCategoria->idCategoria << ", " << NodoCategoriaCategoria->nombreCategoria << ", " << NodoCategoriaCategoria->idSuperCategoria;
    return o;
}