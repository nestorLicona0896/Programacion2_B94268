#ifndef NODO_CATEGORIA_H
#define NODO_CATEGORIA_H

#include <string>
#include <iostream>

using namespace std;

class NodoCategoria
{

    int idCategoria;
    string nombreCategoria;
    int idSuperCategoria;

public:
    NodoCategoria();
    NodoCategoria(int idCategoriaNuevo, string nombreCategoriaNuevo, int idSuperCategoriaNuevo);
    ~NodoCategoria();

    // sobrecargas a los operadores para a la hora de añadir una categoria apartir de informacion proveniente de datos stream
    // estea sea tratada como un flujo de datos unitario dentro del NodoCategoria/categoria
    friend istream &operator>>(istream &i, NodoCategoria *NodoCategoriaCategoria);
    friend ostream &operator<<(ostream &o, const NodoCategoria *NodoCategoriaCategoria);
};

#endif