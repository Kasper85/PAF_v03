#include "listacompras.h"


int ListaCompras::getNCompr() const
{
    return nCompr;
}

void ListaCompras::setNCompr(int value)
{
    nCompr = value;
}

NodoCompras *ListaCompras::getCab() const
{
    return cab;
}

void ListaCompras::setCab(NodoCompras *value)
{
    cab = value;
}
ListaCompras::ListaCompras()
{
    this->cab = NULL;
    this->nCompr = 0;

}

ListaCompras::~ListaCompras()
{

}

