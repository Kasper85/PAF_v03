#include "listaestudiante.h"

int ListaEstudiante::getNEst() const
{
    return nEst;
}

void ListaEstudiante::setNEst(int value)
{
    nEst = value;
}

NodoEstudiante *ListaEstudiante::getCab() const
{
    return cab;
}

void ListaEstudiante::setCab(NodoEstudiante *value)
{
    cab = value;
}

ListaEstudiante::ListaEstudiante()
{
    this->cab = NULL;
    this->nEst = 0;
}

ListaEstudiante::~ListaEstudiante()
{

}

void ListaEstudiante::insertarEstudiante( Estudiante *est ){
    NodoEstudiante *aux = new NodoEstudiante ();
    NodoEstudiante *temp = new NodoEstudiante ();
    temp->setInfo( est );
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
    this->nEst++;
}
