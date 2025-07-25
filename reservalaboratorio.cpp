#include "reservalaboratorio.h"
#include "ui_reservalaboratorio.h"

ReservaLaboratorio::ReservaLaboratorio(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReservaLaboratorio)
{
    ui->setupUi(this);
}

ReservaLaboratorio::~ReservaLaboratorio()
{
    delete ui;
}
