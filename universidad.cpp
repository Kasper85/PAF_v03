#include "universidad.h"

Universidad::Universidad()
{
    this->nombre = "Universidad Señor de Sipan";
    this->ruc = "0000000012";

    this->lEst = new ListaEstudiante ();
    this->lDoc = new ListaDocente();
    this->lTra = new ListaTrabajadores();
    this->lFac = new ListaFacultades();
    this->lComp = new ListaCompras();
    this->lMant = new ListaMantenimientos();
    this->lRes = new ListaReserva();
    this->lRep = new ListaReporte();
    this->lPre = new ListaPrestamos();
}

Universidad::~Universidad()
{

}



ListaDocente *Universidad::getLDoc() const
{
    return lDoc;
}

void Universidad::setLDoc(ListaDocente *value)
{
    lDoc = value;
}

ListaTrabajadores *Universidad::getLTra() const
{
    return lTra;
}

void Universidad::setLTra(ListaTrabajadores *value)
{
    lTra = value;
}

ListaFacultades *Universidad::getLFac() const
{
    return lFac;
}

void Universidad::setLFac(ListaFacultades *value)
{
    lFac = value;
}

ListaCompras *Universidad::getLComp() const
{
    return lComp;
}

void Universidad::setLComp(ListaCompras *value)
{
    lComp = value;
}

ListaMantenimientos *Universidad::getLMant() const
{
    return lMant;
}

void Universidad::setLMant(ListaMantenimientos *value)
{
    lMant = value;
}

ListaReserva *Universidad::getLRes() const
{
    return lRes;
}

void Universidad::setLRes(ListaReserva *value)
{
    lRes = value;
}

ListaReporte *Universidad::getLRep() const
{
    return lRep;
}

void Universidad::setLRep(ListaReporte *value)
{
    lRep = value;
}

ListaPrestamos *Universidad::getLPre() const
{
    return lPre;
}

void Universidad::setLPre(ListaPrestamos *value)
{
    lPre = value;
}
ListaEstudiante *Universidad::getLEst() const
{
    return lEst;
}

void Universidad::setLEst(ListaEstudiante *value)
{
    lEst = value;
}
