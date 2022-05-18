#include <gtest/gtest.h>
#include "./../src/nodo.h"
#include "./../src/arbol.h"

namespace {

    TEST (Arbol_Test, Test_Agregar_Raiz){

        //arrange
        Arbol *arbol = new Arbol(2, 1);
        //act
        int valorNodoactual = arbol->ObtenerValor(1);
        int valorNodoEsperado =  2;
        delete arbol;
        //assert
        EXPECT_EQ(valorNodoactual, valorNodoEsperado);
    }

    TEST (Arbol_Test, Test_Agregar_Nodo){

        //arrange
        Arbol *arbol = new Arbol(2, 1);
        //act
        arbol->AgragarNodo(3, 2, 1);
        int valorActual = arbol->ObtenerValor(2);
        int valorEsperado =  3;

        delete arbol;
        //assert
        EXPECT_EQ(valorActual, valorEsperado);
    }
    
}