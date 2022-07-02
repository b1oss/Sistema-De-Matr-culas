#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>

using namespace std;

class Persona
{
    public:
        //Persona(string,string,string);
        ~Persona();
        void setValue(string,string,string);
        void mostrar();

    protected:
        string nombres, apellidos, cui;
};

#endif // PERSONA_H
