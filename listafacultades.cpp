#include "listafacultades.h"


int ListaFacultades::getNFacu() const
{
    return nFacu;
}

void ListaFacultades::setNFacu(int value)
{
    nFacu = value;
}

NodoFacultades *ListaFacultades::getCab() const
{
    return cab;
}

void ListaFacultades::setCab(NodoFacultades *value)
{
    cab = value;
}
ListaFacultades::ListaFacultades()
{
    this->cab = NULL;
    this->nFacu = 0;

}

ListaFacultades::~ListaFacultades() {}

void ListaFacultades::insertarFacultad (Facultad * facu){
    NodoFacultades *aux = new NodoFacultades ();
    NodoFacultades *temp = new NodoFacultades ();
    temp->setInfo(facu);
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
    this->nFacu++;
}



NodoFacultades* ListaFacultades::buscarFacultadPorNombre(const std::string& nombre) {
    NodoFacultades* aux = this->getCab();
    while(aux != NULL){
        if(aux->getInfo()->getNombre() == nombre){
            return aux;
        }
        aux = aux->getSgte();
    }
    return NULL; // Retornar NULL si no se encuentra el proveedor
}


