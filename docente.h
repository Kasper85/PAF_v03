#ifndef DOCENTE_H
#define DOCENTE_H
#include <iostream>
#include "persona.h"

using namespace std;

class Docente : public Persona
{
private:
    string codDoc;
    string especialidad;
    double sueldo;

public:
    Docente();
    ~Docente();
    Docente(string especialidad, float sueldo, string nombre,string apellido,string dni,bool genero);
    string generarCodigo( );
    string getEspecialidad() const;
    void setEspecialidad(const string &value);
    string getCodDoc() const;
    void setCodDoc(const string &value);
    double getSueldo() const;
    void setSueldo(double value);
};

#endif // DOCENTE_H
