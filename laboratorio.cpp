#include "laboratorio.h"


string Laboratorio::getNombre() const
{
    return nombre;
}

void Laboratorio::setNombre(const string &value)
{
    nombre = value;
}

ListaEquipos *Laboratorio::getLEq() const
{
    return lEq;
}

void Laboratorio::setLEq(ListaEquipos *value)
{
    lEq = value;
}

ListaInsumo *Laboratorio::getLIns() const
{
    return lIns;
}

void Laboratorio::setLIns(ListaInsumo *value)
{
    lIns = value;
}

Trabajador *Laboratorio::getTra() const
{
    return Tra;
}

void Laboratorio::setTra(Trabajador *value)
{
    Tra = value;
}

int Laboratorio::getAforo() const
{
    return aforo;
}

void Laboratorio::setAforo(int value)
{
    aforo = value;
}
Laboratorio::Laboratorio()
{
    this->lEq = new ListaEquipos();
    this->lIns = new ListaInsumo();
}

Laboratorio::~Laboratorio()
{
    
}

