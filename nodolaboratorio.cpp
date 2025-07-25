#include "nodolaboratorio.h"
#include "laboratorio.h"


Laboratorio *NodoLaboratorio::getInfo() const
{
    return info;
}

void NodoLaboratorio::setInfo(Laboratorio *value)
{
    info = value;
}

NodoLaboratorio *NodoLaboratorio::getSgte() const
{
    return sgte;
}

void NodoLaboratorio::setSgte(NodoLaboratorio *value)
{
    sgte = value;
}
NodoLaboratorio::NodoLaboratorio()
{
    
}

NodoLaboratorio::~NodoLaboratorio()
{
    
}

