#ifndef NODODOCENTE_H
#define NODODOCENTE_H
#include "docente.h"

class NodoDocente
{
private:
    Docente *info;
    NodoDocente *sgte;
public:
    NodoDocente();
    ~NodoDocente();
    Docente *getInfo() const;
    void setInfo(Docente *value);
    NodoDocente *getSgte() const;
    void setSgte(NodoDocente *value);
};

#endif // NODODOCENTE_H
