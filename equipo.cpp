#include "equipo.h"



int Equipo::getCantidad() const
{
    return cantidad;
}

void Equipo::setCantidad(int value)
{
    cantidad = value;
}

string Equipo::getNombre() const
{
    return nombre;
}

void Equipo::setNombre(const string &value)
{
    nombre = value;
}

float Equipo::getPrecio() const
{
    return precio;
}

void Equipo::setPrecio(float value)
{
    precio = value;
}

string Equipo::getDescripcion() const
{
    return descripcion;
}

void Equipo::setDescripcion(const string &value)
{
    descripcion = value;
}

string Equipo::getNSerie() const
{
    return nSerie;
}

void Equipo::setNSerie(const string &value)
{
    nSerie = value;
}

char Equipo::getEstado() const
{
    return estado;
}

void Equipo::setEstado(char value)
{
    estado = value;
}
Equipo::Equipo()
{

}

Equipo::~Equipo()
{

}

