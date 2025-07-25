#include "nodocompras.h"


Compra *NodoCompras::getInfo() const
{
    return info;
}

void NodoCompras::setInfo(Compra *value)
{
    info = value;
}

NodoCompras *NodoCompras::getSgte() const
{
    return sgte;
}

void NodoCompras::setSgte(NodoCompras *value)
{
    sgte = value;
}
NodoCompras::NodoCompras()
{

}

NodoCompras::~NodoCompras()
{

}

