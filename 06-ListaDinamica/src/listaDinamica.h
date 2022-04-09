#ifndef LISTADINAMICA_H
#define LISTADINAMICA_H

#include "nodo.h"

using namespace std;

class ListaDinamica {

    private:
        Nodo* inicio;

    public:
       
        ListaDinamica ();
        ListaDinamica (int nuevoValor);
       
        ~ ListaDinamica ();

        void AgregarNodo (int valorNuevo);  
        void MostrarLista ();  
};

#endif