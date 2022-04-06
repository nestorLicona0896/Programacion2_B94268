#ifndef calculadora_h // #ifndef CALCULADORA_H
#define calculadora_h

// este archivo funciona para definir la clase calculadora y definir sus funciones

class Calculadora {

// sección privda, todo lo declarado o definido antes de la clausura public, es privado
    private:
        int ultimoResultado;

    public:
        Calculadora(int ultimoResult);

        int sumar (int valor1, int valor2);

        int factorial (int valor);

};

#endif