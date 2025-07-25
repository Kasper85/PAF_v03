#ifndef LISTAESTUDIANTE_H
#define LISTAESTUDIANTE_H
#include "nodoestudiante.h"

class ListaEstudiante
{
private:
    int nEst;
    NodoEstudiante *cab;
public:
    ListaEstudiante();
    ~ListaEstudiante();
    int getNEst() const;
    void setNEst(int value);
    NodoEstudiante *getCab() const;
    void setCab(NodoEstudiante *value);
    void insertarEstudiante( Estudiante *est );
};

#endif // LISTAESTUDIANTE_H
