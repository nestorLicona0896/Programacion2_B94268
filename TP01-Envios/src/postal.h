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
  
};

#endif