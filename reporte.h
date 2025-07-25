#ifndef REPORTE_H
#define REPORTE_H
#include "equipo.h"
#include "laboratorio.h"
#include <iostream>

using namespace std;

class Reporte
{
private:
    int codigoReporte;
    char tipo; //diario, semanal, mensual
    char estado;
    Equipo *Equi;
    Laboratorio *Lab;
public:
    Reporte();
    ~Reporte();


    int getCodigoReporte() const;
    void setCodigoReporte(int value);
    char getTipo() const;
    void setTipo(char value);
    Equipo *getEqui() const;
    void setEqui(Equipo *value);
    Laboratorio *getLab() const;
    void setLab(Laboratorio *value);
    char getEstado() const;
    void setEstado(char value);
};

#endif // REPORTE_H
