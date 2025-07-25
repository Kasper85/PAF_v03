#ifndef LISTALABORATORIOS_H
#define LISTALABORATORIOS_H
#include "nodolaboratorio.h"


class ListaLaboratorios
{
private:
    int nLab;
    NodoLaboratorio *cab;

public:
    ListaLaboratorios();
    ~ListaLaboratorios();
    int getNLab() const;
    void setNLab(int value);
    NodoLaboratorio *getCab() const;
    void setCab(NodoLaboratorio *value);
    void insertarLaboratorio(Laboratorio*lab);
};

#endif // LISTALABORATORIOS_H
