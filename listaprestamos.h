#ifndef LISTAPRESTAMOS_H
#define LISTAPRESTAMOS_H
#include "nodoprestamo.h"

class ListaPrestamos
{
private:
    int nPrestamos;
    NodoPrestamo*cab;
public:
    ListaPrestamos();
    ~ListaPrestamos();
    int getNPrestamos() const;
    void setNPrestamos(int value);
    NodoPrestamo *getCab() const;
    void setCab(NodoPrestamo *value);
};

#endif // LISTAPRESTAMOS_H
