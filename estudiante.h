#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <iostream>
#include "persona.h"
#include "facultad.h"
using namespace std;

class Estudiante : public Persona
{
private:
    string ciclo; 
    string codEst;

public:
    Estudiante();
    Estudiante(string ciclo, string nombre,string apellido,string dni,bool genero);
    string generarCodigo( );
    ~Estudiante();
    string getCiclo() const;
    void setCiclo(const string &value);
    string getCodEst() const;
    void setCodEst(const string &value);
};

#endif // ESTUDIANTE_H
