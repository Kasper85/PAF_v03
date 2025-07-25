#include "facultad.h"


string Facultad::getNombre() const
{
    return nombre;
}

void Facultad::setNombre(const string &value)
{
    nombre = value;
}

string Facultad::getNombreDecano() const
{
    return nombreDecano;
}

void Facultad::setNombreDecano(const string &value)
{
    nombreDecano = value;
}

ListaLaboratorios *Facultad::getLLab() const
{
    return lLab;
}

void Facultad::setLLab(ListaLaboratorios *value)
{
    lLab = value;
}
Facultad::Facultad()
{
    this->lLab = new ListaLaboratorios ();
}

Facultad::~Facultad()
{

}

