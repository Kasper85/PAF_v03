#include "nododocente.h"


Docente *NodoDocente::getInfo() const
{
    return info;
}

void NodoDocente::setInfo(Docente *value)
{
    info = value;
}

NodoDocente *NodoDocente::getSgte() const
{
    return sgte;
}

void NodoDocente::setSgte(NodoDocente *value)
{
    sgte = value;
}
NodoDocente::NodoDocente()
{

}

NodoDocente::~NodoDocente()
{

}

