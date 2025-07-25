
#include "listatrabajadores.h"


int ListaTrabajadores::getNTra() const
{
    return nTra;
}

void ListaTrabajadores::setNTra(int value)
{
    nTra = value;
}

NodoTrabajador *ListaTrabajadores::getCab() const
{
    return cab;
}

void ListaTrabajadores::setCab(NodoTrabajador *value)
{
    cab = value;
}
ListaTrabajadores::ListaTrabajadores()
{
    this->nTra = 0;
    this->cab = NULL;
}

ListaTrabajadores::~ListaTrabajadores()
{

}

void ListaTrabajadores::insertarTrabajador( Trabajador *tra ){
    NodoTrabajador *aux = new NodoTrabajador ();
    NodoTrabajador *temp = new NodoTrabajador ();
    temp->setInfo( tra );
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
    this->nTra++;
}

Trabajador *ListaTrabajadores::BuscarCredenciales( string usuario, string contra ){
    NodoTrabajador *aux = new NodoTrabajador ();
    aux = this->cab;
    while( aux ){
        if ( aux->getInfo()->getUsuario() == usuario &&
             aux->getInfo()->getContra() == contra ){
            return aux->getInfo();
        }
        aux = aux->getSgte();
    }
    return NULL;
}
