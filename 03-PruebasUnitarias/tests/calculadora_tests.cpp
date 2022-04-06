#include <gtest/gtest.h>
#include "../src/calculadora.h"

namespace {

    TEST (Calculadora_Test, Test_Suma) {

        //AAA

        // Arrange - configurar el escenario de pruebas unitarias
        Calculadora calculadora;

        // Act - ejecutar la secuencia de instrucciones(operacion)
        int actual = calculadora.sumar(1, 2);
        int esperado = 3;

        // Assert - validacion de los resultados obtenidos con los esperados 
        EXPECT_EQ(esperado, actual);
    
    }

}