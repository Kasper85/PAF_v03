#ifndef PRESTAMO_H
#define PRESTAMO_H
#include <iostream>
#include <docente.h>
#include <estudiante.h>
#include <laboratorio.h>

using namespace std;

class Prestamo
{
private:
    string fechaPrestamos;
    string fechaDevolucion;
    float pago;
    int cantidad;
    Docente *Doc;
    Estudiante *Est;
    Laboratorio *Lab;
    Equipo *Eq;

public:
    Prestamo();
    ~Prestamo();

    string getFechaPrestamos() const;
    void setFechaPrestamos(const string &value);
    Docente *getDoc() const;
    void setDoc(Docente *value);
    Estudiante *getEst() const;
    void setEst(Estudiante *value);
    Laboratorio *getLab() const;
    void setLab(Laboratorio *value);
    Equipo *getEq() const;
    void setEq(Equipo *value);
    float getPago() const;
    void setPago(float value);
    string getFechaDevolucion() const;
    void setFechaDevolucion(const string &value);
    int getCantidad() const;
    void setCantidad(int value);
};

#endif // PRESTAMO_H
