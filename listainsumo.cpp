#include "listainsumo.h"


int ListaInsumo::getNInsu() const
{
    return nInsu;
}

void ListaInsumo::setNInsu(int value)
{
    nInsu = value;
}

NodoInsumo *ListaInsumo::getCab() const
{
    return cab;
}

void ListaInsumo::setCab(NodoInsumo *value)
{
    cab = value;
}
ListaInsumo::ListaInsumo()
{
    this->cab = NULL;
    this->nInsu = 0;
}

ListaInsumo::~ListaInsumo()
{

}

void ListaInsumo::insertarInsumo(Insumo*insu){
    NodoInsumo*aux= new NodoInsumo();
    NodoInsumo*temp= new NodoInsumo();
    temp->setInfo(insu);
    temp->setSgte(NULL);
    if(this->cab == NULL ){
        this->cab=temp;
    }
    else{
        aux = this->cab;
        while(aux->getSgte()!=NULL){
            aux=aux->getSgte();
        }
        aux->setSgte(temp);
    }
    this->nInsu++;
}

