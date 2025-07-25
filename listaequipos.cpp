#include "listaequipos.h"


int ListaEquipos::getNEquipos() const
{
    return nEquipos;
}

void ListaEquipos::setNEquipos(int value)
{
    nEquipos = value;
}

NodoEquipo *ListaEquipos::getCab() const
{
    return cab;
}

void ListaEquipos::setCab(NodoEquipo *value)
{
    cab = value;
}
ListaEquipos::ListaEquipos()
{
    this->cab = NULL;
    this->nEquipos = 0;
}

ListaEquipos::~ListaEquipos()
{

}


void ListaEquipos::insertarEquipo( Equipo *eq ){
    NodoEquipo *aux = new NodoEquipo ();
    NodoEquipo *temp = new NodoEquipo ();
    temp->setInfo( eq );
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
    this->nEquipos++;
}
