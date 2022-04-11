#include "postal.h"

using namespace std;

Postal::Postal (float peso, float distancia, int clase) {
    this->peso = peso;
    this->distancia = distancia;
    this->clase = clase;
}

Postal::~Postal () {
   
}

float  Postal::CalculoCosto () {
    return 0;
}