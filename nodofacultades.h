#ifndef NODOFACULTADES_H
#define NODOFACULTADES_H
#include "facultad.h"


class NodoFacultades
{
private:
    Facultad *info;
    NodoFacultades *sgte;
public:
    NodoFacultades();
    ~NodoFacultades();
    Facultad *getInfo() const;
    void setInfo(Facultad *value);
    NodoFacultades *getSgte() const;
    void setSgte(NodoFacultades *value);
};

#endif // NODOFACULTADES_H
