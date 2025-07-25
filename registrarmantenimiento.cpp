#include "registrarmantenimiento.h"
#include "ui_registrarmantenimiento.h"

RegistrarMantenimiento::RegistrarMantenimiento(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegistrarMantenimiento)
{
    ui->setupUi(this);
}

RegistrarMantenimiento::~RegistrarMantenimiento()
{
    delete ui;
}
