#include "nodofacultades.h"


Facultad *NodoFacultades::getInfo() const
{
    return info;
}

void NodoFacultades::setInfo(Facultad *value)
{
    info = value;
}

NodoFacultades *NodoFacultades::getSgte() const
{
    return sgte;
}

void NodoFacultades::setSgte(NodoFacultades *value)
{
    sgte = value;
}
NodoFacultades::NodoFacultades()
{

}

NodoFacultades::~NodoFacultades()
{

}

