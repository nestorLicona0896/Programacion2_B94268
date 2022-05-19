#include "nodoArticulo.h"

NodoArticulo::NodoArticulo(){

}

NodoArticulo::NodoArticulo(int idArticuloNuevo, string nombreArticuloNuevo, int idCategoriaNuevo) {
    this->idArticulo = idArticuloNuevo;
    this->nombreArticulo = nombreArticuloNuevo;
    this->idCategoria = idCategoriaNuevo;
}

NodoArticulo::~NodoArticulo(){
    
}

istream& operator >> (istream &i, NodoArticulo *nodoArticulo) {
    i >> nodoArticulo->idArticulo >> nodoArticulo->nombreArticulo >> nodoArticulo->idCategoria;
    return i;
}

ostream& operator << (ostream &o, const NodoArticulo *nodoArticulo) {
    o << nodoArticulo->idArticulo << ", " << nodoArticulo->nombreArticulo << ", " << nodoArticulo->idCategoria;
    return o;
}
