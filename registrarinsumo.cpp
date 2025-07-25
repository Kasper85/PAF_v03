#include "registrarinsumo.h"
#include "ui_registrarinsumo.h"
#include "QMessageBox"

RegistrarInsumo::RegistrarInsumo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegistrarInsumo)
{
    ui->setupUi(this);
}

RegistrarInsumo::~RegistrarInsumo()
{
    delete ui;
}
ListaInsumo *RegistrarInsumo::getLInsu() const
{
    return lInsu;
}

void RegistrarInsumo::setLInsu(ListaInsumo *value)
{
    lInsu = value;
}


void RegistrarInsumo::on_btnRegistrar_clicked()
{
    QMessageBox*msje= new QMessageBox;
    if (ui->txtNombre->text().isEmpty()){
        msje->setText("Debe ingresar los apellidos");
        msje->show();
        return;
         }
    if ( ui->txtDescripcion->text().isEmpty()){
        msje->setText("Debe ingresar la descripcion");
        msje->show();
        return;

    }

    if( ui->spinCantidad->value() == 0) {
        msje->setText("Debe ingresar la cantidad");
        msje->show();
        return;
    }

    if(ui->spinPrecio->value() == 0){
        msje->setText( "debe ingresar precio");
        msje->show();
        return;
    }

    Insumo*insu = new Insumo();
    insu->setNombre(ui->txtNombre->text().toStdString());
    insu->setDescripcion(ui->txtNombre->text().toStdString());
    insu->setCantidad(ui->spinCantidad->value());
    insu->setPrecio(ui->spinPrecio->value());

   // this->lInsu->insertarInsumo("insumo registrado");
    msje->close();

}

void RegistrarInsumo::limpiarControles(){
    ui->txtNombre->clear();
    ui->txtDescripcion->clear();
    ui->spinCantidad->clear();
    ui->spinPrecio->clear();

}


void RegistrarInsumo::on_btnCancelar_clicked()
{
    this->close();

}
