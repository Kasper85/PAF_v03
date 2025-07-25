#include "listalaboratorios.h"


int ListaLaboratorios::getNLab() const
{
    return nLab;
}

void ListaLaboratorios::setNLab(int value)
{
    nLab = value;
}

NodoLaboratorio *ListaLaboratorios::getCab() const
{
    return cab;
}

void ListaLaboratorios::setCab(NodoLaboratorio *value)
{
    cab = value;
}
ListaLaboratorios::ListaLaboratorios()
{
    this->cab = NULL;
    this->nLab = 0;
}

ListaLaboratorios::~ListaLaboratorios()
{}

void ListaLaboratorios::insertarLaboratorio (Laboratorio * lab){
        NodoLaboratorio *aux = new NodoLaboratorio ();
        NodoLaboratorio *temp = new NodoLaboratorio ();
        temp->setInfo(lab);
        temp->setSgte(NULL);
        if ( this->cab == NULL ){
            this->cab = temp;
        }
        else{
            aux = this->cab;
            while( aux->getSgte() != NULL ){
                aux = aux->getSgte();
            }
            aux->setSgte(temp);
        }
        this->nLab++;

}

