#ifndef EQUIPO_H
#define EQUIPO_H
#include <iostream>


using namespace std;

class Equipo
{
private:
    int cantidad;
    string nombre;
    float precio;
    string descripcion;
    string nSerie;
    char estado; //ocupado, libre, mantenimiento
public:
    Equipo();
    ~Equipo();

    int getCantidad() const;
    void setCantidad(int value);
    string getNombre() const;
    void setNombre(const string &value);
    float getPrecio() const;
    void setPrecio(float value);
    string getDescripcion() const;
    void setDescripcion(const string &value);
    string getNSerie() const;
    void setNSerie(const string &value);
    char getEstado() const;
    void setEstado(char value);
};

#endif // EQUIPO_H
