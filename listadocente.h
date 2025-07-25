#ifndef LISTADOCENTE_H
#define LISTADOCENTE_H
#include "nododocente.h"

class ListaDocente
{
private:
    int nDoc;
    NodoDocente *cab;
public:
    void insertarDocente( Docente *doc );
    ListaDocente();
    ~ListaDocente();
    int getNDoc() const;
    void setNDoc(int value);
    NodoDocente *getCab() const;
    void setCab(NodoDocente *value);
};

#endif // LISTADOCENTE_H
