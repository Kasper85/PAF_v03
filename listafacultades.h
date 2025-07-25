#ifndef LISTAFACULTADES_H
#define LISTAFACULTADES_H
#include "nodofacultades.h"


class ListaFacultades
{
private:
    int nFacu;
    NodoFacultades *cab;
public:
    ListaFacultades();
    ~ListaFacultades();
    int getNFacu() const;
    void setNFacu(int value);
    NodoFacultades *getCab() const;
    void setCab(NodoFacultades *value);
    void insertarFacultad( Facultad * facu );
    NodoFacultades *buscarFacultadPorNombre(const std::string& nombre);

};

#endif // LISTAFACULTADES_H
