#include "nodotrabajador.h"


NodoTrabajador *NodoTrabajador::getSgte() const
{
    return sgte;
}

void NodoTrabajador::setSgte(NodoTrabajador *value)
{
    sgte = value;
}

Trabajador *NodoTrabajador::getInfo() const
{
    return info;
}

void NodoTrabajador::setInfo(Trabajador *value)
{
    info = value;
}
NodoTrabajador::NodoTrabajador()
{
    
}

NodoTrabajador::~NodoTrabajador()
{
    
}

