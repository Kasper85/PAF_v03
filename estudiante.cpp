#include "estudiante.h"
#include "sstream"


string Estudiante::getCiclo() const
{
    return ciclo;
}

void Estudiante::setCiclo(const string &value)
{
    ciclo = value;
}

string Estudiante::getCodEst() const
{
    return codEst;
}

void Estudiante::setCodEst(const string &value)
{
    codEst = value;
}
Estudiante::Estudiante()
{
    this->codEst = this->codigoP + " - " + this->generarCodigo();
}

Estudiante::Estudiante(string ciclo, string nombre,string apellido,string dni,bool genero) : Persona (nombre,apellido,dni,genero)
{
    this->codEst = this->codigoP + " - " + this->generarCodigo();
    this->ciclo = ciclo;
}


Estudiante::~Estudiante()
{
    
}

string Estudiante :: generarCodigo( ){
    int valor = 1000;
    stringstream est;
    est << "E";
    valor += Persona :: cod - 1;
    est << valor;
    return est.str( );
}
