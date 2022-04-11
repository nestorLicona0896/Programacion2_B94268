#include "fedex.h"

using namespace std;

Fedex::Fedex (float peso, float distancia) {
    this->peso = peso;
    this->distancia = distancia;
    this->base = 35; 
}

Fedex::~Fedex () {
   
}

float Fedex::CalculoCosto () {
    float costo = 0;
    costo += this->base;    
    if(distancia > 500) {
        costo += 15;
    }
    if (peso > 10) {
        costo += 10;
    }
    return costo;
}
