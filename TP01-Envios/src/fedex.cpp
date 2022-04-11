#include "fedex.h"

using namespace std;

Fedex::Fedex (float peso, float distancia) {
    this->peso = peso;
    this->distancia = distancia;
}

Fedex::~Fedex () {
   
}

float Fedex::CalculoCosto () {
    return 0;
}
