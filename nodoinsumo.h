#ifndef NODOINSUMO_H
#define NODOINSUMO_H
#include"insumo.h"


class NodoInsumo
{

private:
    Insumo *info;
    NodoInsumo *sgte;
public:
    NodoInsumo();
    ~NodoInsumo();
    Insumo *getInfo() const;
    void setInfo(Insumo *value);
    NodoInsumo *getSgte() const;
    void setSgte(NodoInsumo *value);
};

#endif // NODOINSUMO_H
