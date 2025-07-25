#include "reporte.h"



int Reporte::getCodigoReporte() const
{
    return codigoReporte;
}

void Reporte::setCodigoReporte(int value)
{
    codigoReporte = value;
}

char Reporte::getTipo() const
{
    return tipo;
}

void Reporte::setTipo(char value)
{
    tipo = value;
}

Equipo *Reporte::getEqui() const
{
    return Equi;
}

void Reporte::setEqui(Equipo *value)
{
    Equi = value;
}

Laboratorio *Reporte::getLab() const
{
    return Lab;
}

void Reporte::setLab(Laboratorio *value)
{
    Lab = value;
}

char Reporte::getEstado() const
{
    return estado;
}

void Reporte::setEstado(char value)
{
    estado = value;
}
Reporte::Reporte()
{

}

Reporte::~Reporte()
{

}

