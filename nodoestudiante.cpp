#include "nodoestudiante.h"


Estudiante *NodoEstudiante::getInfo() const
{
    return info;
}

void NodoEstudiante::setInfo(Estudiante *value)
{
    info = value;
}

NodoEstudiante *NodoEstudiante::getSgte() const
{
    return sgte;
}

void NodoEstudiante::setSgte(NodoEstudiante *value)
{
    sgte = value;
}
NodoEstudiante::NodoEstudiante()
{

}

NodoEstudiante::~NodoEstudiante()
{

}

