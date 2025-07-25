#include "nodoprestamo.h"


Prestamo *NodoPrestamo::getInfo() const
{
    return info;
}

void NodoPrestamo::setInfo(Prestamo *value)
{
    info = value;
}

NodoPrestamo *NodoPrestamo::getSgte() const
{
    return sgte;
}

void NodoPrestamo::setSgte(NodoPrestamo *value)
{
    sgte = value;
}
NodoPrestamo::NodoPrestamo()
{

}

NodoPrestamo::~NodoPrestamo()
{

}

