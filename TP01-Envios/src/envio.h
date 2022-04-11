#ifndef ENVIO_H
#define ENVIO_H

class Envio {           
    protected:
        float peso;
        float distancia;

    public:

        virtual float CalculoCosto() = 0;
    
};

#endif