#ifndef NODO_H
#define NODO_H


class Nodo {

    private:
        Nodo* siguiente;
        int valor;

    public:
       
        Nodo (int valorNuevo);
       
        ~Nodo ();

        void AsignarPunteroSiguiente (Nodo* punteroaAlSiguiente);
        Nodo* ObtenerPunteroAlSiguiente ();  
        int getValor ();  
};

#endif