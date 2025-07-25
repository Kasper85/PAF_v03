#include "docente.h"
#include "sstream"

string Docente::getEspecialidad() const
{
    return especialidad;
}

void Docente::setEspecialidad(const string &value)
{
    especialidad = value;
}

string Docente::getCodDoc() const
{
    return codDoc;
}

void Docente::setCodDoc(const string &value)
{
    codDoc = value;
}

double Docente::getSueldo() const
{
    return sueldo;
}

void Docente::setSueldo(double value)
{
    sueldo = value;
}
Docente::Docente()
{
       this->codDoc = this->codigoP + "-" + this->generarCodigo();
}

Docente::~Docente()
{
    
}

Docente::Docente( string especialidad, float sueldo, string nombre,string apellido,string dni,bool genero) : Persona (nombre,apellido,dni,genero)
{
    this->codDoc = this->codigoP + "-" + this->generarCodigo();
    this->especialidad = especialidad;
    this->sueldo = sueldo;
}

string Docente :: generarCodigo( ){
    int valor = 1000;
    stringstream doc;
    doc << "D";
    valor += Persona :: cod - 1;
    doc << valor;
    return doc.str( );
}

