#include "nodoreserva.h"


Reserva *NodoReserva::getInfo() const
{
    return info;
}

void NodoReserva::setInfo(Reserva *value)
{
    info = value;
}

NodoReserva *NodoReserva::getSgte() const
{
    return sgte;
}

void NodoReserva::setSgte(NodoReserva *value)
{
    sgte = value;
}
NodoReserva::NodoReserva()
{

}

NodoReserva::~NodoReserva()
{

}

