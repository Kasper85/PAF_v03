#include "mantenimiento.h"


char Mantenimiento::getTipo() const
{
    return tipo;
}

void Mantenimiento::setTipo(char value)
{
    tipo = value;
}

string Mantenimiento::getMotivo() const
{
    return motivo;
}

void Mantenimiento::setMotivo(const string &value)
{
    motivo = value;
}

string Mantenimiento::getFechaInicio() const
{
    return fechaInicio;
}

void Mantenimiento::setFechaInicio(const string &value)
{
    fechaInicio = value;
}

string Mantenimiento::getFechaFin() const
{
    return fechaFin;
}

void Mantenimiento::setFechaFin(const string &value)
{
    fechaFin = value;
}

Equipo *Mantenimiento::getEq() const
{
    return Eq;
}

void Mantenimiento::setEq(Equipo *value)
{
    Eq = value;
}

Laboratorio *Mantenimiento::getLab() const
{
    return Lab;
}

void Mantenimiento::setLab(Laboratorio *value)
{
    Lab = value;
}
Mantenimiento::Mantenimiento()
{
    
}

Mantenimiento::~Mantenimiento()
{
    
}

