#ifndef NODOLABORATORIO_H
#define NODOLABORATORIO_H
#include "laboratorio.h"


class NodoLaboratorio
{
private:
    Laboratorio *info;
    NodoLaboratorio *sgte;

public:
    NodoLaboratorio();
    ~NodoLaboratorio();
    Laboratorio *getInfo() const;
    void setInfo(Laboratorio *value);
    NodoLaboratorio *getSgte() const;
    void setSgte(NodoLaboratorio *value);
};

#endif // NODOLABORATORIO_H
