#ifndef NODOTRABAJADOR_H
#define NODOTRABAJADOR_H
#include "trabajador.h"


class NodoTrabajador
{
private:
    Trabajador *info;
    NodoTrabajador *sgte;
public:
    NodoTrabajador();
    ~NodoTrabajador();
    NodoTrabajador *getSgte() const;
    void setSgte(NodoTrabajador *value);
    Trabajador *getInfo() const;
    void setInfo(Trabajador *value);
};

#endif // NODOTRABAJADOR_H
