#include "registrarcompras.h"
#include "ui_registrarcompras.h"

RegistrarCompras::RegistrarCompras(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegistrarCompras)
{
    ui->setupUi(this);
}

RegistrarCompras::~RegistrarCompras()
{
    delete ui;
}
