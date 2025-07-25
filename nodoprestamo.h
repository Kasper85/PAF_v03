#ifndef NODOPRESTAMO_H
#define NODOPRESTAMO_H
#include "prestamo.h"

class NodoPrestamo
{
private:
    Prestamo*info;
    NodoPrestamo*sgte;
public:
    NodoPrestamo();
    ~NodoPrestamo();
    Prestamo *getInfo() const;
    void setInfo(Prestamo *value);
    NodoPrestamo *getSgte() const;
    void setSgte(NodoPrestamo *value);
};

#endif // NODOPRESTAMO_H
