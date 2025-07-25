#include "nodoinsumo.h"


Insumo *NodoInsumo::getInfo() const
{
    return info;
}

void NodoInsumo::setInfo(Insumo *value)
{
    info = value;
}

NodoInsumo *NodoInsumo::getSgte() const
{
    return sgte;
}

void NodoInsumo::setSgte(NodoInsumo *value)
{
    sgte = value;
}
NodoInsumo::NodoInsumo()
{

}

NodoInsumo::~NodoInsumo()
{

}

