#include <gtest/gtest.h>
#include "../src/calculadora.h"

namespace
{
    TEST(Test_Calculadora_OperacionEspecial, Test_SiMayorQue5)
    {
        /// AAA

        // Arrange - configurar el escenario
        Calculadora calculadora;

        // Act - ejecute la operación
        int actual = calculadora.OperacionEspecial(6);
        int esperada = 12;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }

    TEST(Test_Calculadora_OperacionEspecial, Test_SiMenorQue5)
    {
        /// AAA

        // Arrange - configurar el escenario
        Calculadora calculadora;

        // Act - ejecute la operación
        int actual = calculadora.OperacionEspecial(3);
        int esperada = 7;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }

    TEST(Test_Calculadora_OperacionEspecial, Test_SiEsIgualA5)
    {
        /// AAA

        // Arrange - configurar el escenario
        Calculadora calculadora;

        // Act - ejecute la operación
        int actual = calculadora.OperacionEspecial(5);
        int esperada = 25;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }
}