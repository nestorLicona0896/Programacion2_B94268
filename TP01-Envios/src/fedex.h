#ifndef FEDEX_H
#define FEDEX_H

#include "envio.h"

using namespace std;

class Fedex : public Envio {

    private:
        float base;

    public:

        Fedex (float peso, float distancia);
        ~Fedex ();

        virtual float CalculoCosto();    
    
};

#endif