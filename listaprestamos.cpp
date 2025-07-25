#include "listaprestamos.h"


int ListaPrestamos::getNPrestamos() const
{
    return nPrestamos;
}

void ListaPrestamos::setNPrestamos(int value)
{
    nPrestamos = value;
}

NodoPrestamo *ListaPrestamos::getCab() const
{
    return cab;
}

void ListaPrestamos::setCab(NodoPrestamo *value)
{
    cab = value;
}
ListaPrestamos::ListaPrestamos()
{
    this->nPrestamos = 0;
    this->cab = NULL;
}

ListaPrestamos::~ListaPrestamos()
{

}

