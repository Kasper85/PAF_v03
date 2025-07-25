#ifndef NODOEQUIPO_H
#define NODOEQUIPO_H
#include "equipo.h"

class NodoEquipo
{
private:
    Equipo*info;
    NodoEquipo*sgte;
public:
    NodoEquipo();
    ~NodoEquipo();
    Equipo *getInfo() const;
    void setInfo(Equipo *value);
    NodoEquipo *getSgte() const;
    void setSgte(NodoEquipo *value);
};

#endif // NODOEQUIPO_H
