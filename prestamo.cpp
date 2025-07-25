#include "prestamo.h"



string Prestamo::getFechaPrestamos() const
{
    return fechaPrestamos;
}

void Prestamo::setFechaPrestamos(const string &value)
{
    fechaPrestamos = value;
}

Docente *Prestamo::getDoc() const
{
    return Doc;
}

void Prestamo::setDoc(Docente *value)
{
    Doc = value;
}

Estudiante *Prestamo::getEst() const
{
    return Est;
}

void Prestamo::setEst(Estudiante *value)
{
    Est = value;
}

Laboratorio *Prestamo::getLab() const
{
    return Lab;
}

void Prestamo::setLab(Laboratorio *value)
{
    Lab = value;
}

Equipo *Prestamo::getEq() const
{
    return Eq;
}

void Prestamo::setEq(Equipo *value)
{
    Eq = value;
}

float Prestamo::getPago() const
{
    return pago;
}

void Prestamo::setPago(float value)
{
    pago = value;
}

string Prestamo::getFechaDevolucion() const
{
    return fechaDevolucion;
}

void Prestamo::setFechaDevolucion(const string &value)
{
    fechaDevolucion = value;
}

int Prestamo::getCantidad() const
{
    return cantidad;
}

void Prestamo::setCantidad(int value)
{
    cantidad = value;
}
Prestamo::Prestamo()
{
    
}

Prestamo::~Prestamo()
{
    
}

