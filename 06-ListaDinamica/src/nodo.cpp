#include "nodo.h"

Nodo::Nodo(int nuevoValor){
    this->valor = nuevoValor;
    this->siguiente = nullptr;
}

Nodo::~Nodo (){}

void Nodo::AsignarPunteroSiguiente (Nodo* punteroAlSiguiente) {
    this->siguiente = punteroAlSiguiente;
}

Nodo* Nodo::ObtenerPunteroAlSiguiente () {
    return this->siguiente;
}

int Nodo::getValor () {
    return this->valor;
}