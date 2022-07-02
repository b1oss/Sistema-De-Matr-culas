#include <iostream>
#include "Persona.h"

using namespace std;

void Persona::setValue(string _nombres, string _apellidos, string _cui)
{
    nombres = _nombres;
    apellidos = _apellidos;
    cui = _cui;
}

Persona::~Persona()
{
}

void Persona::mostrar() {
    cout << "Nombres: " << nombres << "\nApellidos: " << apellidos << "\nCui: " << cui << endl;
}
