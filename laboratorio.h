#ifndef LABORATORIO_H
#define LABORATORIO_H
#include <iostream>
#include "listaequipos.h"
#include "listainsumo.h"
#include "trabajador.h"


using namespace std;


class Laboratorio
{
private:
    string nombre;
    int aforo;
    ListaEquipos *lEq;
    ListaInsumo *lIns;
    Trabajador *Tra;

public:
    Laboratorio();
    ~Laboratorio();
    string getNombre() const;
    void setNombre(const string &value);
    ListaEquipos *getLEq() const;
    void setLEq(ListaEquipos *value);
    ListaInsumo *getLIns() const;
    void setLIns(ListaInsumo *value);
    Trabajador *getTra() const;
    void setTra(Trabajador *value);
    int getAforo() const;
    void setAforo(int value);
};

#endif // LABORATORIO_H
