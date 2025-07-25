#ifndef LISTATRABAJADORES_H
#define LISTATRABAJADORES_H
#include "nodotrabajador.h"


class ListaTrabajadores
{
private:
    int nTra;
    NodoTrabajador *cab;
public:
    ListaTrabajadores();
    ~ListaTrabajadores();
    int getNTra() const;
    void setNTra(int value);
    NodoTrabajador *getCab() const;
    void setCab(NodoTrabajador *value);
    Trabajador *BuscarCredenciales( string usuario, string contra );
    void insertarTrabajador( Trabajador *tra );
};

#endif // LISTATRABAJADORES_H
