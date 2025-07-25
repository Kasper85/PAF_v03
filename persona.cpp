#include "persona.h"
#include "sstream"

int Persona :: cod = 1;

string Persona::getNombre() const
{
    return nombre;
}

void Persona::setNombre(const string &value)
{
    nombre = value;
}

string Persona::getApellido() const
{
    return apellido;
}

void Persona::setApellido(const string &value)
{
    apellido = value;
}

string Persona::getDni() const
{
    return dni;
}

void Persona::setDni(const string &value)
{
    dni = value;
}


string Persona::getCodigoP() const
{
    return codigoP;
}

void Persona::setCodigoP(const string &value)
{
    codigoP = value;
}

bool Persona::getGenero() const
{
    return genero;
}

void Persona::setGenero(bool value)
{
    genero = value;
}
Persona::Persona()
{
    this->codigoP = generarCod ();
}

Persona::~Persona()
{

}

Persona::Persona (string nombre,
                  string apellido, string dni, bool genero){

    this->codigoP = this->generarCod();
    this->nombre = nombre;
    this->apellido = apellido;
    this->dni = dni;
    this->genero = genero;
}


string Persona :: generarCod( ){
    stringstream cod;
    cod << "P000";
    cod << Persona :: cod;
    Persona :: cod++;
    return cod.str();
}

