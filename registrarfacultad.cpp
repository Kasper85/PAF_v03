#include "registrarfacultad.h"
#include "ui_registrarfacultad.h"
#include "QMessageBox"
#include "facultad.h"
#include <QString>
#include <QVariant>
#include <fstream>
#include <sstream>
//#include <QObject>
#include <QDebug>


const char limite = '%';
const string archivoFacu = "Facultad.txt";

RegistrarFacultad::RegistrarFacultad(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegistrarFacultad)
{
    ui->setupUi(this);
    lFac = new ListaFacultades();
    this->lLab = new ListaLaboratorios();

}

RegistrarFacultad::~RegistrarFacultad()
{
    delete ui;
}
ListaFacultades *RegistrarFacultad::getLFac() const
{
    return lFac;
}

void RegistrarFacultad::setLFac(ListaFacultades *value)
{
    lFac = value;
}


void RegistrarFacultad::on_btnRegistrar_clicked()
{
    QMessageBox*msje = new QMessageBox();
    if(ui->txtFacultad->text().isEmpty()){
        msje->setText("debe ingresar la facultad");
        msje->show();
        return;
    }
    if(ui->txtDecano->text().isEmpty()){
        msje->setText("debe ingresar Decano");
        msje->show();
        return;
    }
        Facultad *facu = new Facultad();
        facu->setNombre(ui->txtFacultad->text().toStdString());
        facu->setNombreDecano(ui->txtDecano->text().toStdString());
        this->lFac->insertarFacultad(facu);
        guardarFacu (facu);
        msje->setText("Facultad Registrada");
        msje->show();
        limpiarControles();
}

void RegistrarFacultad::limpiarControles(){
    ui->txtDecano->clear();
    ui->txtFacultad->clear();
}

void RegistrarFacultad::on_btnCancelar_clicked()
{

    this->close();
}
ListaLaboratorios *RegistrarFacultad::getLLab() const
{
    return lLab;
}

void RegistrarFacultad::setLLab(ListaLaboratorios *value)
{
    lLab = value;
}


void RegistrarFacultad::guardarFacu(Facultad *facu) {
    ofstream archivo;
    archivo.open(archivoFacu.c_str(), std::ios_base::out | std::ios_base::app);
    if (archivo.is_open()) {
        archivo << facu->getNombre() << limite
                << facu->getNombreDecano() << endl;
        if (archivo.is_open()) {
            archivo << facu->getNombre() << "|" << facu->getNombreDecano() << std::endl;
            qDebug() << "Facultad guardada:" << QString::fromStdString(facu->getNombre());
        } else {
            qDebug() << "NO se pudo guardar facultad";
        }
    }
    archivo.close();
}
