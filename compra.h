#ifndef COMPRA_H
#define COMPRA_H
#include <iostream>
#include <trabajador.h>
#include <equipo.h>
#include <insumo.h>



using namespace std;

class Compra
{
private:
    int codigo;
    Trabajador *Tra;
    Equipo *Equ;
    Insumo *Ins;
    int cantidad;
    float precioTotal;
public:
    Compra();
    ~Compra();
    int getCodigo() const;
    void setCodigo(int value);
    Trabajador *getTra() const;
    void setTra(Trabajador *value);
    Equipo *getEqu() const;
    void setEqu(Equipo *value);
    Insumo *getIns() const;
    void setIns(Insumo *value);
    int getCantidad() const;
    void setCantidad(int value);
    float getPrecioTotal() const;
    void setPrecioTotal(float value);
};

#endif // COMPRA_H
