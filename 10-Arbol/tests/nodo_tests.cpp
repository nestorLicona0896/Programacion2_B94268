#include <gtest/gtest.h>
#include "./../src/nodo.h"

namespace {

    TEST (Nodo_Test, Test_Creacion_Nodo){
        //arrange
        Nodo *nuevo = new Nodo(1,1);        

        //act 
        int valorActual = nuevo->ObtenerValor();
        int valorEsperado = 1;

        int idActual = nuevo->ObtenerId();
        int idEsperado = 1;
         
        //assert
        EXPECT_EQ(valorActual, valorEsperado);
        EXPECT_EQ(idActual, idEsperado);
    }

    TEST (Nodo_Test, Test_Agregar_Nodo_Hijo){
        //arrange
        Nodo *nodoPadreActual = new Nodo(1,1); 
        Nodo *nodoHijoActual = new Nodo(2,2);       

        //act 
        nodoPadreActual->AgregarHijo(nodoHijoActual);
        vector<Nodo*> hijos = nodoPadreActual->ObtenerHijos();
        Nodo *nodoHijoEsperado = hijos[0];               
         
        //assert
        EXPECT_EQ(nodoHijoEsperado, nodoHijoActual);

        delete nodoHijoActual;
        delete nodoPadreActual;
    }
}