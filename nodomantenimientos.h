#ifndef NODOMANTENIMIENTOS_H
#define NODOMANTENIMIENTOS_H
#include "mantenimiento.h"


class NodoMantenimientos
{
private:
    Mantenimiento *info;
    NodoMantenimientos *sgte;
public:
    NodoMantenimientos();
    ~NodoMantenimientos();
    Mantenimiento *getInfo() const;
    void setInfo(Mantenimiento *value);
    NodoMantenimientos *getSgte() const;
    void setSgte(NodoMantenimientos *value);
};

#endif // NODOMANTENIMIENTOS_H
