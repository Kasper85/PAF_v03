#include "reserva.h"



char Reserva::getTipo() const
{
    return tipo;
}

void Reserva::setTipo(char value)
{
    tipo = value;
}

string Reserva::getMotivo() const
{
    return motivo;
}

void Reserva::setMotivo(const string &value)
{
    motivo = value;
}

int Reserva::getCantidadHoras() const
{
    return cantidadHoras;
}

void Reserva::setCantidadHoras(int value)
{
    cantidadHoras = value;
}

string Reserva::getFechaReserva() const
{
    return fechaReserva;
}

void Reserva::setFechaReserva(const string &value)
{
    fechaReserva = value;
}

Docente *Reserva::getDoc() const
{
    return Doc;
}

void Reserva::setDoc(Docente *value)
{
    Doc = value;
}

Laboratorio *Reserva::getLab() const
{
    return Lab;
}

void Reserva::setLab(Laboratorio *value)
{
    Lab = value;
}



float Reserva::getPago() const
{
    return pago;
}

void Reserva::setPago(float value)
{
    pago = value;
}
Reserva::Reserva()
{

}

Reserva::~Reserva()
{

}

