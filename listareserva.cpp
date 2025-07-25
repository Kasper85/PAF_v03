#include "listareserva.h"


int ListaReserva::getNRes() const
{
    return nRes;
}

void ListaReserva::setNRes(int value)
{
    nRes = value;
}

NodoReserva *ListaReserva::getCab() const
{
    return cab;
}

void ListaReserva::setCab(NodoReserva *value)
{
    cab = value;
}
ListaReserva::ListaReserva()
{

}

ListaReserva::~ListaReserva()
{

}

