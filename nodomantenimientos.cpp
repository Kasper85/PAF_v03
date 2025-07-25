#include "nodomantenimientos.h"


Mantenimiento *NodoMantenimientos::getInfo() const
{
    return info;
}

void NodoMantenimientos::setInfo(Mantenimiento *value)
{
    info = value;
}

NodoMantenimientos *NodoMantenimientos::getSgte() const
{
    return sgte;
}

void NodoMantenimientos::setSgte(NodoMantenimientos *value)
{
    sgte = value;
}
NodoMantenimientos::NodoMantenimientos()
{

}

NodoMantenimientos::~NodoMantenimientos()
{

}

