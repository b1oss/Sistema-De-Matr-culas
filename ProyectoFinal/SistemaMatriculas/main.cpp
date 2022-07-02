#include <iostream>
#include "Persona.h"
//#include "src/Persona.cpp"

using namespace std;

int main()
{
    Persona profesor;
    string nombres, apellidos, codigo;
    cout << "Nombres: "; getline(cin,nombres);
    cout << "Apellidos: "; getline(cin,apellidos);
    cout << "CUI: "; getline(cin,codigo);

    profesor.setValue(nombres,apellidos,codigo);
    profesor.mostrar();

    cout << "Hello world!" << endl;
    return 0;
}
