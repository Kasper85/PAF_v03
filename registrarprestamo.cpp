#include "registrarprestamo.h"
#include "ui_registrarprestamo.h"
#include <qmessagebox.h>

RegistrarPrestamo::RegistrarPrestamo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegistrarPrestamo)
{
    this->lLab = new ListaLaboratorios;
    this->lTra = new ListaTrabajadores;
    ui->setupUi(this);

}

RegistrarPrestamo::~RegistrarPrestamo()
{
    delete ui;
}
ListaTrabajadores *RegistrarPrestamo::getLTra() const
{
    return lTra;
}

void RegistrarPrestamo::setLTra(ListaTrabajadores *value)
{
    lTra = value;
}
ListaLaboratorios *RegistrarPrestamo::getLLab() const
{
    return lLab;
}

void RegistrarPrestamo::setLLab(ListaLaboratorios *value)
{
    lLab = value;
}

NodoTrabajador *RegistrarPrestamo::elegirTrabajador(){

    NodoTrabajador *aux = new NodoTrabajador;
    ui->CbxTrabajador->clear();
    aux = this->lTra->getCab();
    while(aux != NULL){
        ui->CbxTrabajador->addItem(QString::fromStdString(aux->getInfo()->getNombre()));
        aux = aux->getSgte();
    }
    return aux;
}

void RegistrarPrestamo::llenarComboLaboratorios() {
    NodoLaboratorio* aux = new NodoLaboratorio;
    ui->CbxLaboratorio->clear();

    aux = this->lLab->getCab();

    while (aux != NULL) {
        ui->CbxLaboratorio->addItem(QString::fromStdString(aux->getInfo()->getNombre()));
        aux = aux->getSgte();
    }
}
void RegistrarPrestamo::cargarEquiposDelLaboratorio() {
    QString nombreLab = ui->CbxLaboratorio->currentText();
    NodoLaboratorio* aux = this->lLab->getCab();
    ui->CbxEquipo->clear();

    while (aux != NULL) {
        if (QString::fromStdString(aux->getInfo()->getNombre()) == nombreLab) {
            ListaEquipos* lE = aux->getInfo()->getLEq();
            NodoEquipo* nE = lE->getCab();
            while (nE != NULL) {
                ui->CbxEquipo->addItem(QString::fromStdString(nE->getInfo()->getNombre()));
                nE = nE->getSgte();
            }
            break;
        }
        aux = aux->getSgte();
    }
}




void RegistrarPrestamo::on_PbRegistrar_clicked()
{

    if(ui->LnDni->text().isEmpty()){
        QMessageBox::critical(this,"Error","debe ingresar DNI");
        return;
    }
    if(ui->LnPago->text().isEmpty()){
        QMessageBox::critical(this,"Error","debe ingresar Pago");
        return;
    }
    Prestamo *pre = new Prestamo();
  //  pre->getEst(ui->LnDni->text().toStdString());
    pre->setPago(ui->LnPago->text().toFloat());
    pre->setFechaPrestamos(ui->dtPrestamo->text().toStdString());
    pre->setFechaDevolucion(ui->dtDevolucion->text().toStdString());

    QMessageBox::information(this, "Registro Trabajador", "Trabajador registrado correctamente");
    limpiar();

}

void RegistrarPrestamo::limpiar() {
    ui->LnDni->clear();
    ui->LnPago->clear();
    ui->dtPrestamo->clear();
    ui->dtDevolucion->clear();

}
