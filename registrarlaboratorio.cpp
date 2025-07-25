#include "registrarlaboratorio.h"
#include "ui_registrarlaboratorio.h"
#include "QMessageBox"

RegistrarLaboratorio::RegistrarLaboratorio(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegistrarLaboratorio)
{
    this->lLab = new ListaLaboratorios;
    this->lFac = new ListaFacultades;
    ui->setupUi(this);
}

RegistrarLaboratorio::~RegistrarLaboratorio()
{
    delete ui;
}
ListaLaboratorios *RegistrarLaboratorio::getLLab() const
{
    return lLab;
}

void RegistrarLaboratorio::setLLab(ListaLaboratorios *value)
{
    lLab = value;
}

NodoFacultades *RegistrarLaboratorio::elegirFacultad(){

    //ListaProveedores *lprov = new ListaProveedores;
    //lprov = this->getLProv();
    NodoFacultades *aux = this->lFac->getCab();
    ui->cmbFacultad->clear();
    aux = this->lFac->getCab();
    while(aux != NULL){
        ui->cmbFacultad->addItem(QString::fromStdString(aux->getInfo()->getNombre()));
        aux = aux->getSgte();
    }

    return this->lFac->getCab();

}


void RegistrarLaboratorio::on_btnRegistrar_clicked()
{
    QMessageBox*msje = new QMessageBox();
    if(ui->txtNombre->text().isEmpty()){
       msje->setText("Debe ingresar los nombres");
       msje->show();
       return;
    }

    if(ui->spinAforo->value() == 0){
    msje->setText("debe ingresar aforo");
    msje->show();
    return;
    }

    Laboratorio*lab = new Laboratorio();

    lab->setNombre(ui->txtNombre->text().toStdString());
    lab->setAforo(ui->spinAforo->value());

    /*
    this->lLab->insertarLaboratorio(lab);
    msje->setText("laboratorio registrado");
    msje->show();
    limpiarControles();
    */



    // Obtener la facultad seleccionada del ComboBox
    QString nombreFacu = ui->cmbFacultad->currentText();

    NodoFacultades *nodoFacu = this->lFac->buscarFacultadPorNombre(nombreFacu.toStdString());
       if (nodoFacu != NULL) {
        nodoFacu->getInfo()->getLLab()->insertarLaboratorio(lab);
        QMessageBox::information(this, "Registro Exitoso", "Laboratorio registrado correctamente en la facultad.");
      } else {
        QMessageBox::critical(this, "Error", "Facultad no encontrada.");
    }

}

void RegistrarLaboratorio::limpiarControles(){
    ui->txtNombre->clear();
    ui->spinAforo->clear();
}

void RegistrarLaboratorio::on_btnCancelar_clicked()
{
    this->close();
}
