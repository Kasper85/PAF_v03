#include "reservaequipo.h"
#include "ui_reservaequipo.h"
#include <qmessagebox.h>

ReservaEquipo::ReservaEquipo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReservaEquipo)
{

    this->lLab = new ListaLaboratorios;
    this->lTra = new ListaTrabajadores;
    ui->setupUi(this);
    ui->setupUi(this);
}

ReservaEquipo::~ReservaEquipo()
{
    delete ui;
}
ListaTrabajadores *ReservaEquipo::getLTra() const
{
    return lTra;
}

void ReservaEquipo::setLTra(ListaTrabajadores *value)
{
    lTra = value;
}
ListaLaboratorios *ReservaEquipo::getLLab() const
{
    return lLab;
}

void ReservaEquipo::setLLab(ListaLaboratorios *value)
{
    lLab = value;
}
ListaReserva *ReservaEquipo::getLRes() const
{
    return lRes;
}

void ReservaEquipo::setLRes(ListaReserva *value)
{
    lRes = value;
}


NodoTrabajador *ReservaEquipo::elegirTrabajador(){
    NodoTrabajador *aux = new NodoTrabajador;
    ui->cmbTra->clear();
    aux = this->lTra->getCab();
    while(aux != NULL){
        ui->cmbTra->addItem(QString::fromStdString(aux->getInfo()->getNombre()));
        aux = aux->getSgte();
    }
    return aux;
}

void ReservaEquipo::llenarComboLaboratorios() {
    NodoLaboratorio* aux = new NodoLaboratorio;
    ui->cmblab->clear();

    aux = this->lLab->getCab();

    while (aux != NULL) {
        ui->cmblab->addItem(QString::fromStdString(aux->getInfo()->getNombre()));
        aux = aux->getSgte();
    }
}
void ReservaEquipo::cargarEquiposDelLaboratorio() {
    QString nombreLab = ui->cmblab->currentText();
    NodoLaboratorio* aux = this->lLab->getCab();
    ui->cmbEqui->clear();

    while (aux != NULL) {
        if (QString::fromStdString(aux->getInfo()->getNombre()) == nombreLab) {
            ListaEquipos* lE = aux->getInfo()->getLEq();
            NodoEquipo* nE = lE->getCab();
            while (nE != NULL) {
                ui->cmbEqui->addItem(QString::fromStdString(nE->getInfo()->getNombre()));
                nE = nE->getSgte();
            }
            break;
        }
        aux = aux->getSgte();
    }
}






void ReservaEquipo::on_pushButton_clicked()
{

    if(ui->txtNom->text().isEmpty()){
        QMessageBox::critical(this,"Error","debe ingresar Nombre");
        return;
    }
    if(ui->txtCant->text().isEmpty()){
        QMessageBox::critical(this,"Error","debe ingresar cantidad ");
        return;
    }
    if(ui->txtMoti->toPlainText().isEmpty()){
        QMessageBox::critical(this,"Error","debe ingresar Motivo");
        return;
    }

    Reserva * res = new Reserva();
    Docente * doc = new Docente();
    doc->setNombre(ui->txtNom->text().toStdString());
    res->setCantidadHoras(ui->txtCant->text().toFloat());
    res->setMotivo(ui->txtMoti->toPlainText().toStdString());
    res->setFechaReserva(ui->setFechaReserva->text().toStdString());

    QMessageBox::information(this, "Registro Reserva Equipo", "Reserva Equipo registrado correctamente");
    limpiar();

}

void ReservaEquipo::limpiar() {
    ui->txtNom->clear();
    ui->txtCant->clear();
    ui->txtMoti->clear();
    ui->setFechaReserva->clear();

}
