#include "listadocente.h"


int ListaDocente::getNDoc() const
{
    return nDoc;
}

void ListaDocente::setNDoc(int value)
{
    nDoc = value;
}

NodoDocente *ListaDocente::getCab() const
{
    return cab;
}

void ListaDocente::setCab(NodoDocente *value)
{
    cab = value;
}
ListaDocente::ListaDocente()
{
    this->cab = NULL;
    this->nDoc = 0;
}

ListaDocente::~ListaDocente()
{

}

void ListaDocente::insertarDocente( Docente *doc ){
    NodoDocente *aux = new NodoDocente ();
    NodoDocente *temp = new NodoDocente ();
    temp->setInfo( doc );
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
    this->nDoc++;
}

