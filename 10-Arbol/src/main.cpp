#include "arbol.h"
#include <iostream>
#include <sstream>

using namespace std;

int main () {

    Arbol *arbol = new Arbol(1, 2);

    arbol->AgragarNodo(2, 7, 1);
    arbol->AgragarNodo(3, 5, 1);
    arbol->AgragarNodo(4, 2, 2);
    arbol->AgragarNodo(5, 6, 2);
    arbol->AgragarNodo(6, 9, 3);
    arbol->AgragarNodo(7, 5, 5);
    arbol->AgragarNodo(8, 11, 5);
    arbol->AgragarNodo(9, 4, 6);

    delete arbol;  

    return 0;
}