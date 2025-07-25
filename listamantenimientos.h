#ifndef LISTAMANTENIMIENTOS_H
#define LISTAMANTENIMIENTOS_H
#include "nodomantenimientos.h"


class ListaMantenimientos
{
private:
    int nMan;
    NodoMantenimientos *cab;
public:
    ListaMantenimientos();
    ~ListaMantenimientos();
    int getNMan() const;
    void setNMan(int value);
    NodoMantenimientos *getCab() const;
    void setCab(NodoMantenimientos *value);
};

#endif // LISTAMANTENIMIENTOS_H
