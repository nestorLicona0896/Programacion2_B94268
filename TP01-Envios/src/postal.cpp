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
    float costo = 0;
    switch(clase){
        case 1:
            costo = CalculoCostoClase1();
        break;
        case 2:
            costo = CalculoCostoClase2();
        break;
        case 3:
            costo = CalculoCostoClase3();
        break;
    }
    return costo;
}

float Postal::CalculoCostoClase1(){
    float costo = 0;
    if (this->peso > 0 && this->peso <= 3) {
        costo += this->distancia * 0.300;
    }

    if (this->peso > 3 && this->peso <= 8) {
        costo += this->distancia * 0.450;
    }

    if (this->peso >= 9) {
        costo += this->distancia * 0.600;
    }    
    return costo;
}

float Postal::CalculoCostoClase2(){
    float costo = 0;
    if (this->peso > 0 && this->peso <= 3) {
        costo += this->distancia * 0.0280;
    }

    if (this->peso > 3 && this->peso <= 8) {
        costo += this->distancia * 0.0530;
    }

    if (this->peso >= 9) {
        costo += this->distancia * 0.0750;
    }    
    return costo;
}

float Postal::CalculoCostoClase3(){
    float costo = 0;
    costo += this->peso * 0.0120; 
    return costo;
} 