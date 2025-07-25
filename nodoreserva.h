#ifndef NODORESERVA_H
#define NODORESERVA_H
#include "reserva.h"

class NodoReserva
{
private:
    Reserva *info;
    NodoReserva *sgte;
public:
    NodoReserva();
    ~NodoReserva();
    Reserva *getInfo() const;
    void setInfo(Reserva *value);
    NodoReserva *getSgte() const;
    void setSgte(NodoReserva *value);
};

#endif // NODORESERVA_H
