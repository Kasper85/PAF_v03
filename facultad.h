#ifndef FACULTAD_H
#define FACULTAD_H
#include <iostream>
#include <listalaboratorios.h>
using namespace std;


class Facultad
{
private:
    string nombre;
    string nombreDecano;
    ListaLaboratorios *lLab;
public:
    Facultad();
    ~Facultad();
    string getNombre() const;
    void setNombre(const string &value);
    string getNombreDecano() const;
    void setNombreDecano(const string &value);
    ListaLaboratorios *getLLab() const;
    void setLLab(ListaLaboratorios *value);
};

#endif // FACULTAD_H
