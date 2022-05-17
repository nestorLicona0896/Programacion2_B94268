#ifndef ARBOL_H
#define ARBOL_H
#include "nodo.h"
#include <map> // para los recorridos

using namespace  std;

class Arbol {
    Nodo *raiz;
    map<int, Nodo*> indiceNodos;

    public:

    Arbol(int valorRaiz, Nodo *nuevaRaiz);

    void AgragarNodo(int valorNuevo, int idNuevo, int idPadre);
    int ObtenerValor(int id);
};

#endif