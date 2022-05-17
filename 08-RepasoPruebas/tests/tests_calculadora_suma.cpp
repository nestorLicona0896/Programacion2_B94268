#include <gtest/gtest.h>
#include "../src/calculadora.h"

namespace
{
    TEST(Test_Calculadora_Suma, Test_SumaDosNumerosEnteros)
    {
        /// AAA

        // Arrange - configurar el escenario
        Calculadora calculadora;

        // Act - ejecute la operación
        int actual = calculadora.Suma(1, 2);
        int esperada = 3;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }

    TEST(Test_Calculadora_Suma, Test_SumaDosNumerosFlotantes)
    {
        /// AAA

        // Arrange - configurar el escenario
        Calculadora calculadora;

        // Act - ejecute la operación
        float numero1 = 3.14;
        float numero2 = 5.25;

        float actual = calculadora.Suma(numero1, numero2);
        float esperada = 8.39;

        // Assert - valide los resultados (especial para float)
        EXPECT_FLOAT_EQ(esperada, actual);
    }
}







