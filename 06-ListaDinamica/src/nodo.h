#ifndef NODO_H
#define NODO_H

using namespace std;

// la clase nodo representa una clase recursiva, se reutiliza y representa un espacio de 
//memoria especifico que puede almacenar informacion de tipo especifico, y puede enlazarse 
// a otro nodo para formar una lista, se utiliza con punteros para una mayor eficiencia a 
// la hora de leer y ecribir los datos

class Nodo {

    private:
        Nodo* siguiente;
        int valor;

    public:
       
        Nodo(int valorNuevo);
       
        ~Nodo();

        void AsignarPunteroSiguiente(Nodo* punteroaAlSiguiente);
        Nodo* ObtenerPunteroAlSiguiente();      
};

#endif