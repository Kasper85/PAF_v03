#include "listareporte.h"


int ListaReporte::getNRep() const
{
    return nRep;
}

void ListaReporte::setNRep(int value)
{
    nRep = value;
}

NodoReporte *ListaReporte::getCab() const
{
    return cab;
}

void ListaReporte::setCab(NodoReporte *value)
{
    cab = value;
}
ListaReporte::ListaReporte()
{
    this->cab = NULL;
    this->nRep = 0;
}

ListaReporte::~ListaReporte()
{

}

