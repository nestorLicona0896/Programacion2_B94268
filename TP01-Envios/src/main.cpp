#include <iostream>
#include <vector>

#include "envio.h"
#include "fedex.h"
#include "postal.h"

using namespace std;

int main() {
    
    Postal *envioPostal1 = new Postal(10,6,1);
    Postal *envioPostal2 = new Postal(5,10,2);
    Postal *envioPostal3 = new Postal(16,4,3);

    Fedex *envioFedex1 = new Fedex(6,6);
    Fedex *envioFedex2 = new Fedex(15,10);
    Fedex *envioFedex3 = new Fedex(1,600);

    vector<Envio*> vectorEnvios;

    vectorEnvios.push_back(envioPostal1);
    vectorEnvios.push_back(envioPostal2);
    vectorEnvios.push_back(envioPostal3);
    vectorEnvios.push_back(envioFedex1);
    vectorEnvios.push_back(envioFedex2);
    vectorEnvios.push_back(envioFedex3);

    for(Envio* envio: vectorEnvios ) {
        cout  << "costo del envio: " << envio->CalculoCosto() << endl;    
    }

    delete envioPostal1;
    delete envioPostal2;
    delete envioPostal3;

    delete envioFedex1;
    delete envioFedex2;
    delete envioFedex3;

    return 0;
}