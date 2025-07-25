#ifndef LISTAEQUIPOS_H
#define LISTAEQUIPOS_H
#include "nodoequipo.h"

class ListaEquipos
{
private:
    int nEquipos;
    NodoEquipo*cab;
public:
    ListaEquipos();
    ~ListaEquipos();
    int getNEquipos() const;
    void setNEquipos(int value);
    NodoEquipo *getCab() const;
    void setCab(NodoEquipo *value);

    void insertarEquipo( Equipo *eq );

    void guardarEquipo( Equipo *eq ) ;

};

#endif // LISTAEQUIPOS_H
