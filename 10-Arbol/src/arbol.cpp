#include "arbol.h"
#include "nodo.h"

using namespace std;

Arbol::Arbol(int valorRaizNuevo, int idRaizNueva){
    this->raiz = new Nodo(valorRaizNuevo, idRaizNueva);
    this->indiceNodos.insert(pair <int, Nodo*>(idRaizNueva, this->raiz));
}

Arbol::~Arbol(){
    delete this->raiz;
}

int Arbol::ObtenerValor(int idNodo){
    Nodo *aux = this->indiceNodos.at(idNodo);
    return aux->ObtenerValor();
}

void Arbol::AgragarNodo(int valorNodoNuevo, int idNodoNuevo, int idPadre){
    Nodo *nuevo = new Nodo(valorNodoNuevo, idNodoNuevo);
    Nodo *padre =  this->indiceNodos.at(idPadre);

    nuevo->AsignarPadre(padre);
    padre->AgregarHijo(nuevo);

    // indezar el nuevo nodo
    this->indiceNodos.insert(pair<int, Nodo*>(idNodoNuevo, nuevo));
}