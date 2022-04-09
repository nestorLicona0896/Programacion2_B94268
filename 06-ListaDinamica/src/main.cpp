#include <iostream>

#include "listaDinamica.h"

using namespace std;

int main () {

    ListaDinamica *lista = new ListaDinamica();

    lista->AgregarNodo(5);
    lista->AgregarNodo(56);
    lista->AgregarNodo(41);
    lista->AgregarNodo(96);
    lista->AgregarNodo(8);

    lista->MostrarLista();

    delete lista;

    return 0;
}