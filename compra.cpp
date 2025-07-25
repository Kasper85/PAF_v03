#include "compra.h"


int Compra::getCodigo() const
{
    return codigo;
}

void Compra::setCodigo(int value)
{
    codigo = value;
}

Trabajador *Compra::getTra() const
{
    return Tra;
}

void Compra::setTra(Trabajador *value)
{
    Tra = value;
}

Equipo *Compra::getEqu() const
{
    return Equ;
}

void Compra::setEqu(Equipo *value)
{
    Equ = value;
}

Insumo *Compra::getIns() const
{
    return Ins;
}

void Compra::setIns(Insumo *value)
{
    Ins = value;
}

int Compra::getCantidad() const
{
    return cantidad;
}

void Compra::setCantidad(int value)
{
    cantidad = value;
}

float Compra::getPrecioTotal() const
{
    return precioTotal;
}

void Compra::setPrecioTotal(float value)
{
    precioTotal = value;
}
Compra::Compra()
{

}

Compra::~Compra()
{

}

