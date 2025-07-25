#include "nodoequipo.h"


Equipo *NodoEquipo::getInfo() const
{
    return info;
}

void NodoEquipo::setInfo(Equipo *value)
{
    info = value;
}

NodoEquipo *NodoEquipo::getSgte() const
{
    return sgte;
}

void NodoEquipo::setSgte(NodoEquipo *value)
{
    sgte = value;
}
NodoEquipo::NodoEquipo()
{

}

NodoEquipo::~NodoEquipo()
{

}

