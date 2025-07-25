#include "trabajador.h"
#include "sstream"


string Trabajador::getCodTra() const
{
    return codTra;
}

void Trabajador::setCodTra(const string &value)
{
    codTra = value;
}

string Trabajador::getUsuario() const
{
    return usuario;
}

void Trabajador::setUsuario(const string &value)
{
    usuario = value;
}

string Trabajador::getContra() const
{
    return contra;
}

void Trabajador::setContra(const string &value)
{
    contra = value;
}

unsigned short Trabajador::getNivel() const
{
    return nivel;
}

void Trabajador::setNivel(unsigned short value)
{
    nivel = value;
}
Trabajador::Trabajador()
{
    this->codTra = this->codigoP + "-" + this->generarCodigo();

}

Trabajador::Trabajador(string usuario, string contra, unsigned short nivel, string nombre,string apellido,string dni,bool genero) : Persona (nombre,apellido,dni,genero)
{
    this->codTra = this->codigoP + "-" + this->generarCodigo();
    this->usuario = usuario;
    this->contra = contra;
    this->nivel = nivel;
}

Trabajador::~Trabajador()
{
    
}

string Trabajador :: generarCodigo( ){
    int valor = 0;
    stringstream tra;
    tra << "T";
    valor += Persona :: cod - 1;
    tra << valor;
    return tra.str( );
}

