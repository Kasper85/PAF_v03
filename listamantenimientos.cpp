#include "listamantenimientos.h"


int ListaMantenimientos::getNMan() const
{
    return nMan;
}

void ListaMantenimientos::setNMan(int value)
{
    nMan = value;
}

NodoMantenimientos *ListaMantenimientos::getCab() const
{
    return cab;
}

void ListaMantenimientos::setCab(NodoMantenimientos *value)
{
    cab = value;
}
ListaMantenimientos::ListaMantenimientos()
{
    this->cab = NULL;
    this->nMan = 0;
}

ListaMantenimientos::~ListaMantenimientos()
{

}

