#ifndef RESERVA_H
#define RESERVA_H
#include <iostream>
#include "persona.h"
#include "equipo.h"
#include "docente.h"
#include "laboratorio.h"

using namespace std;

class Reserva
{
private:
    char tipo;// Eq, Lab
    string motivo;
    int cantidadHoras;
    float pago;
    string fechaReserva;
    Docente *Doc;
    Laboratorio *Lab;

public:
    Reserva();
    ~Reserva();

    char getTipo() const;
    void setTipo(char value);
    string getMotivo() const;
    void setMotivo(const string &value);
    int getCantidadHoras() const;
    void setCantidadHoras(int value);
    string getFechaReserva() const;
    void setFechaReserva(const string &value);
    Docente *getDoc() const;
    void setDoc(Docente *value);
    Laboratorio *getLab() const;
    void setLab(Laboratorio *value);
    Equipo *getEq() const;
    void setEq(Equipo *value);
    float getPago() const;
    void setPago(float value);
};

#endif // RESERVA_H
