#include "insumo.h"


int Insumo::getCantidad() const
{
    return cantidad;
}

void Insumo::setCantidad(int value)
{
    cantidad = value;
}

string Insumo::getNombre() const
{
    return nombre;
}

void Insumo::setNombre(const string &value)
{
    nombre = value;
}

string Insumo::getDescripcion() const
{
    return descripcion;
}

void Insumo::setDescripcion(const string &value)
{
    descripcion = value;
}

float Insumo::getPrecio() const
{
    return precio;
}

void Insumo::setPrecio(float value)
{
    precio = value;
}
Insumo::Insumo()
{
    
}

Insumo::~Insumo()
{
    
}

