#ifndef ARBOL_CATALOGO_H
#define ARBOL_CATALOGO_H

#include "nodoCategoria.h"
#include "nodoArticulo.h"
#include <vector>
#include <map> 

using namespace std;

class ArbolCatalogo {
    
    vector <NodoCategoria*> categorias;
    map<NodoCategoria, NodoArticulo*> articulosCategorizados;

    public:
        ArbolCatalogo();
        ~ArbolCatalogo();

        void AgregarCategoria(NodoCategoria *categoriaNueva);
        void AgregarArticulo(int idArticuloNuevo, string nombreArticuloNuevo, int idCategoriaArticuloNuevo);

        // sobrecargas a los operadores para a la hora de añadir una catalogo apartir de informacion proveniente de datos stream
        friend istream& operator >> (istream &i, ArbolCatalogo *catalogo);
        friend ostream& operator << (ostream  &o, const ArbolCatalogo *catalogo);
        
};

#endif