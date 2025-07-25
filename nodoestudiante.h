#ifndef NODOESTUDIANTE_H
#define NODOESTUDIANTE_H
#include "estudiante.h"

class NodoEstudiante
{
private:
    Estudiante *info;
    NodoEstudiante *sgte;
public:
    NodoEstudiante();
    ~NodoEstudiante();
    Estudiante *getInfo() const;
    void setInfo(Estudiante *value);
    NodoEstudiante *getSgte() const;
    void setSgte(NodoEstudiante *value);
};

#endif // NODOESTUDIANTE_H
