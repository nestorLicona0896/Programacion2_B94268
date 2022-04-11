#ifndef POSTAL_H
#define POSTAL_H

#include "envio.h"

class Postal : public Envio {

    private:
        int clase;

    public:

        Postal (float peso, float distancia, int clase);
        ~Postal();

        virtual float CalculoCosto();  
        virtual float CalculoCostoClase1();
        virtual float CalculoCostoClase2();
        virtual float CalculoCostoClase3();    
  
};

#endif