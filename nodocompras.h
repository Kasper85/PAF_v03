#ifndef NODOCOMPRAS_H
#define NODOCOMPRAS_H
#include "compra.h"


class NodoCompras
{
private:
    Compra *info;
    NodoCompras *sgte;
public:
    NodoCompras();
    ~NodoCompras();
    Compra *getInfo() const;
    void setInfo(Compra *value);
    NodoCompras *getSgte() const;
    void setSgte(NodoCompras *value);
};

#endif // NODOCOMPRAS_H
