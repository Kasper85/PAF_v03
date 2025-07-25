#include "nodoreporte.h"


Reporte *NodoReporte::getInfo() const
{
    return info;
}

void NodoReporte::setInfo(Reporte *value)
{
    info = value;
}

NodoReporte *NodoReporte::getSgte() const
{
    return sgte;
}

void NodoReporte::setSgte(NodoReporte *value)
{
    sgte = value;
}
NodoReporte::NodoReporte()
{

}

NodoReporte::~NodoReporte()
{

}

