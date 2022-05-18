#include "nodo.h"

Nodo::Nodo(int valorNuevo, int idNuevo){
    this->id = idNuevo;
    this->valor = valorNuevo;
}

Nodo::~Nodo(){
    for (Nodo *son : this->hijos){
        delete son;
    }
}

int Nodo::ObtenerId(){
    return this->id;
}

int Nodo::ObtenerValor () {
    return this->valor;
}

void Nodo::AsignarPadre(Nodo *nodoPadre){
    this->padre = nodoPadre;
}

vector <Nodo*> Nodo::ObtenerHijos(){
    return this->hijos;
}

void Nodo::AgregarHijo(Nodo *nuevoNodoHijo){
    this->hijos.push_back(nuevoNodoHijo);
}