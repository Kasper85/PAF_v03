#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>

using namespace std;

class Persona
{
protected:
    static int cod;
    string codigoP;
    string nombre;
    string apellido;
    string dni;
    bool genero;
public:
        Persona();
        ~Persona();
        Persona (string nombre,
           string apellido, string dni, bool genero);
        string generarCod();

        string getNombre() const;
        void setNombre(const string &value);
        string getApellido() const;
        void setApellido(const string &value);
        string getDni() const;
        void setDni(const string &value);
        static int getCod();
        static void setCod(int value);
        string getCodigoP() const;
        void setCodigoP(const string &value);
        bool getGenero() const;
        void setGenero(bool value);
    };

#endif // PERSONA_H
