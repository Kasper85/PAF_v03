#ifndef MANTENIMIENTO_H
#define MANTENIMIENTO_H
#include <iostream>
#include <equipo.h>
#include <laboratorio.h>

using namespace std;

class Mantenimiento
{
private:
    char tipo;
    string motivo;
    string fechaInicio;
    string fechaFin;
    Equipo *Eq;
    Laboratorio *Lab;
public:
    Mantenimiento();
    ~Mantenimiento();
    char getTipo() const;
    void setTipo(char value);
    string getMotivo() const;
    void setMotivo(const string &value);
    string getFechaInicio() const;
    void setFechaInicio(const string &value);
    string getFechaFin() const;
    void setFechaFin(const string &value);
    Equipo *getEq() const;
    void setEq(Equipo *value);
    Laboratorio *getLab() const;
    void setLab(Laboratorio *value);
};

#endif // MANTENIMIENTO_H
