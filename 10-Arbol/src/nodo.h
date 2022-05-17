#ifndef NODO_H
#define NODO_H

#include <vector>

using namespace std;

// es una clase que representa un nodo de un arbol no binario

class Nodo {

    int valor;
    int id;
    vector <Nodo*> hijos;
    Nodo * padre;

    public:
        Nodo(int id, int valor);
        ~Nodo();

        void AgregarHijo(Nodo *hijoNuevo);
        int ObtenerId();
        int ObtenerValor();
        void AsignarPadre(Nodo *padre);
        vector<Nodo*> ObtenerHijos();
};

#endif