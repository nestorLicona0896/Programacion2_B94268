
#include <iostream>
#include <sstream>
#include <fstream>

#include <string>

#include "cuentaPalabras.h"

using namespace std;

int main()
{

    // ejemplo 1: streaming de consola, usa los datos proporcionados por el usuario en consola

    /* string nombre{};
    string apellido1{};
    string apellido2{};
    int edad{0};

    cout << "ingrese el nombre: ";
    cin >> nombre;
    cout << "ingrese el primer apellido: ";
    cin >> apellido1;
    cout << "ingrese el segundo apellido: ";
    cin >> apellido2;
    cout << "ingrese la edad: ";
    cin >> edad;
    cout << "nombre: " << nombre << " " << apellido1 << " " << apellido2
    << endl << "edad " << edad << " años" << endl; */

    // ejemplo 2: lectura de archivos archivos .txt
    /* ifstream ifs("ejemplo.txt", ifstream::in); // lee un archivo de origen txt por default como un texto

    // comprueba si el archivo puede ser abierto
    if (!ifs.is_open()) {
        cout << "Error leyendo archivo ejemplo.txt" << endl;
        return -1;
    }

    string linea{};        
        // se recorre el archivo para procesar cada linea y copiarla dentro de una string auxiliar
    while(getline(ifs, linea)) {
        
        cout << "Linea: " << linea << endl;
    }

    ifs.close(); */ // cerrar el archivo para evitar fugas de memoria

    // ejemplo 3: stream de strings
    /* string nombre{};
    string apellido1{};
    string apellido2{};
    int edad{0};

    string stringEntrada{"Néstor Licona Obando 25"};
    istringstream stream (stringEntrada);
    stream >> nombre >> apellido1 >> apellido2 >> edad;

    cout << "nombre: " << nombre << " " << apellido1 << " " << apellido2
    << endl << "edad " << edad << " años" << endl; */


    // ejemplo 4: ifstream a istream como ejemplo par ala inyección de dependencias
    /* ifstream ifs("ejemplo.txt", std::ifstream::in); // Por default abriendo como texto
    if (!ifs.is_open())
    {
        std::cerr << "Error leyendo archivo ejemplo.txt" << std::endl;
        return -1;
    }

    CuentaPalabras *cuentaPalabras1 = new CuentaPalabras(&ifs);
    cout << "cantidad de palabras: " << cuentaPalabras1->ContarPalabras() << endl;
    delete cuentaPalabras1;
    ifs.close(); */

    // ejemplo 5: escritura:
    ofstream ofs("ejemploSalida.txt", ofstream::out);

    if(!ofs.is_open()){
        cerr << "Error leyendo archivo"<< endl;
        return -1;
    }
    ofs << "Número de palabras: " << 4 << endl;
    ofs << "segunda línea: " << 4 << endl;
    ofs.close();


    return 0;
}