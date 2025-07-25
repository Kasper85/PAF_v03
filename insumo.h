#ifndef INSUMO_H
#define INSUMO_H
#include <iostream>
using namespace std;

class Insumo
{
private:
    int cantidad;
    string nombre;
    string descripcion;
    float precio;


public:
    Insumo();
    ~Insumo();
    int getCantidad() const;
    void setCantidad(int value);
    string getNombre() const;
    void setNombre(const string &value);
    string getDescripcion() const;
    void setDescripcion(const string &value);
    float getPrecio() const;
    void setPrecio(float value);
};

#endif // INSUMO_H
