#ifndef TRABAJADOR_H
#define TRABAJADOR_H
#include <iostream>
#include "persona.h"

using namespace std;

class Trabajador : public Persona
{
    string codTra;
    string usuario;
    string contra;
    unsigned short nivel;

public:
    Trabajador();
    ~Trabajador();
    Trabajador(string usuario, string contra, unsigned short nivel, string nombre,string apellido,string dni,bool genero);
    string getCodTra() const;
    void setCodTra(const string &value);
    string generarCodigo( );
    string getUsuario() const;
    void setUsuario(const string &value);
    string getContra() const;
    void setContra(const string &value);
    unsigned short getNivel() const;
    void setNivel(unsigned short value);
};

#endif // TRABAJADOR_H
