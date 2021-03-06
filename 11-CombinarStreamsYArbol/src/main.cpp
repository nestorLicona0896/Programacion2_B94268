#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

#include "nodoArticulo.h"
#include "nodoCategoria.h"
#include "arbolCatalogo.h"

using namespace std;

int main () {
    // Ejemplo 1: lectura y escritura de una categoría en consola
    /*
    NodoCategoria *nuevaCategoria = new NodoCategoria();
    
    string entrada = "2 Limpieza 0";
    istringstream streamStringsEntrada(entrada);
    ostringstream streamStringsSalida {};
    streamStringsEntrada >> nuevaCategoria;
    streamStringsSalida << "La nueva categoria es " << nuevaCategoria << endl;
    cout << streamStringsSalida.str();
    
    delete nuevaCategoria;*/

    // Ejemplo 2: escritura de un catalogo, archivo csv
    /*
    NodoCategoria *nuevaCategoria = new NodoCategoria();    
    ArbolCatalogo *catalogo = new ArbolCatalogo();

    NodoCategoria *categoria1 = new NodoCategoria(1, "Alimentos", 100);
    catalogo->AgregarCategoria(categoria1);
    NodoCategoria *categoria2 = new NodoCategoria(2, "Limpieza", 200);
    catalogo->AgregarCategoria(categoria2);
   
    ofstream reporte("reporteCatalogo.csv", ifstream::out); // Por default abriendo como texto
    
    if (!reporte.is_open())
    {
        cerr << "Error abriendo archivo reporteCatalogo.txt" << endl;
        return -1;
    }
    reporte << catalogo;
    reporte.close();
    delete catalogo; */
    
    // Ejemplo 3: 
    
    ArbolCatalogo *catalogo = new ArbolCatalogo();

    ifstream archivoCategorias("categorias.txt", ifstream::in); // Por default abriendo como texto
    
    if (!archivoCategorias.is_open())
    {
        cerr << "Error abriendo archivo categorias.txt" << endl;
        return -1;
    }

    archivoCategorias >> catalogo;

    ifstream archivoArticulos("articulos.txt", ifstream::in); // Por default abriendo como texto
    
    if (!archivoArticulos.is_open())
    {
        cerr << "Error abriendo archivo articulos.txt" << endl;
        return -1;
    }
    
    string linea;
    int id {0};
    string nombre {};
    int idCategoria {0};
    while(getline(archivoArticulos, linea)){
        istringstream streamEntrada(linea);
        streamEntrada >> id >> nombre >> idCategoria;  
        //cout << id << nombre<< idCategoria << endl;
        catalogo->AgregarArticulo(id, nombre, idCategoria);
    }

    cout << "Mi catálogo:\n" << catalogo;

    archivoArticulos.close();
    archivoCategorias.close();

    delete catalogo;  


    return 0;
}