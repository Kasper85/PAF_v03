#ifndef UNIVERSIDAD_H
#define UNIVERSIDAD_H
#include <iostream>
#include <listadocente.h>
#include <listaestudiante.h>
#include <ListaTrabajadores.h>
#include <ListaFacultades.h>
#include <ListaCompras.h>
#include <ListaMantenimientos.h>
#include <ListaReserva.h>
#include <ListaReporte.h>
#include <ListaPrestamos.h>


using namespace std;

class Universidad
{
private:
    string ruc;
    string nombre;

    ListaEstudiante *lEst;
    ListaDocente *lDoc;
    ListaTrabajadores *lTra;
    ListaFacultades *lFac;
    ListaCompras *lComp;
    ListaMantenimientos *lMant;
    ListaReserva *lRes;
    ListaReporte *lRep;
    ListaPrestamos *lPre;
public:
    Universidad();
    ~Universidad();
    ListaEstudiante *getLEst() const;
    void setLEst(ListaEstudiante *value);
    ListaDocente *getLDoc() const;
    void setLDoc(ListaDocente *value);
    ListaTrabajadores *getLTra() const;
    void setLTra(ListaTrabajadores *value);
    ListaFacultades *getLFac() const;
    void setLFac(ListaFacultades *value);
    ListaCompras *getLComp() const;
    void setLComp(ListaCompras *value);
    ListaMantenimientos *getLMant() const;
    void setLMant(ListaMantenimientos *value);
    ListaReserva *getLRes() const;
    void setLRes(ListaReserva *value);
    ListaReporte *getLRep() const;
    void setLRep(ListaReporte *value);
    ListaPrestamos *getLPre() const;
    void setLPre(ListaPrestamos *value);
};

#endif // UNIVERSIDA_H
