#ifndef ARBOL_CATALOGO_H
#define ARBOL_CATALOGO_H

#include "nodoCategoria.h"
#include <vector>

using namespace std;

class ArbolCatalogo {
    
    vector <NodoCategoria*> categorias;

    public:
        ArbolCatalogo();
        ~ArbolCatalogo();

        void AgregarCategoria(NodoCategoria *categoriaNueva);

        // sobrecargas a los operadores para a la hora de añadir una catalogo apartir de informacion proveniente de datos stream
        friend istream& operator >> (istream &i, ArbolCatalogo *catalogo);
        friend ostream& operator << (ostream  &o, const ArbolCatalogo *catalogo);

};

#endif