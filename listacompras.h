#ifndef LISTACOMPRAS_H
#define LISTACOMPRAS_H
#include "nodocompras.h"


class ListaCompras
{
private:
    int nCompr;
    NodoCompras *cab;
public:
    ListaCompras();
    ~ListaCompras();
    int getNCompr() const;
    void setNCompr(int value);
    NodoCompras *getCab() const;
    void setCab(NodoCompras *value);
};

#endif // LISTACOMPRAS_H
