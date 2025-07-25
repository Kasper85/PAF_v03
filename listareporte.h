#ifndef LISTAREPORTE_H
#define LISTAREPORTE_H
#include "nodoreporte.h"

class ListaReporte
{
private:
    int nRep;
    NodoReporte *cab;
public:
    ListaReporte();
    ~ListaReporte();
    int getNRep() const;
    void setNRep(int value);
    NodoReporte *getCab() const;
    void setCab(NodoReporte *value);
};

#endif // LISTAREPORTE_H
