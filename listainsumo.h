#ifndef LISTAINSUMO_H
#define LISTAINSUMO_H
#include "nodoinsumo.h"


class ListaInsumo
{

private:
    int nInsu;
    NodoInsumo *cab;
public:
    ListaInsumo();
    ~ListaInsumo();
    int getNInsu() const;
    void setNInsu(int value);
    NodoInsumo *getCab() const;
    void setCab(NodoInsumo *value);
    void insertarInsumo(Insumo*insu);
    void limpiarControles();
};

#endif // LISTAINSUMO_H
