#ifndef NODOREPORTE_H
#define NODOREPORTE_H
#include "reporte.h"

class NodoReporte
{
private:
    Reporte *info;
    NodoReporte *sgte;
public:
    NodoReporte();
    ~NodoReporte();
    Reporte *getInfo() const;
    void setInfo(Reporte *value);
    NodoReporte *getSgte() const;
    void setSgte(NodoReporte *value);
};

#endif // NODOREPORTE_H
