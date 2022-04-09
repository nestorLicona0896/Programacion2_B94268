#include "listaDinamica.h"
#include <iostream>

using namespace std;

ListaDinamica::ListaDinamica () {
    this->inicio = nullptr;
}

ListaDinamica::ListaDinamica (int nuevoValor) {
    this->inicio = new Nodo(nuevoValor);
}
       
ListaDinamica::~ ListaDinamica () {

    if (this->inicio == nullptr){
        return;
    }

    Nodo* actual = this->inicio;
    
    while(actual->ObtenerPunteroAlSiguiente()!= nullptr){
        Nodo* siguiente = actual->ObtenerPunteroAlSiguiente();
        delete actual;
        actual = siguiente;
    }
}

void ListaDinamica::AgregarNodo (int valorNuevo) {
    if (this->inicio == nullptr){
        inicio = new Nodo(valorNuevo);
        return;
    }

    Nodo* actual = this->inicio;
    
    while(actual->ObtenerPunteroAlSiguiente() != nullptr){
        actual = actual->ObtenerPunteroAlSiguiente();        
    }
    Nodo *nuevo = new Nodo(valorNuevo);
    actual->AsignarPunteroSiguiente(nuevo);
}  

void ListaDinamica::MostrarLista () {
    if (this->inicio == nullptr){
        cout << "Lista vacia\n";
        return;
    }

    Nodo* actual = this->inicio;
    
    while (actual != nullptr){
        cout << "["<< actual->getValor() << "]->";
        actual = actual->ObtenerPunteroAlSiguiente();        
    }
} 