#ifndef LISTARESERVA_H
#define LISTARESERVA_H
#include "nodoreserva.h"

class ListaReserva
{
private:
    int nRes;
    NodoReserva *cab;
public:
    ListaReserva();
    ~ListaReserva();
    int getNRes() const;
    void setNRes(int value);
    NodoReserva *getCab() const;
    void setCab(NodoReserva *value);
};

#endif // LISTARESERVA_H
