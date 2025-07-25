#include "listarreportes.h"
#include "ui_listarreportes.h"

ListarReportes::ListarReportes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ListarReportes)
{
    ui->setupUi(this);
}

ListarReportes::~ListarReportes()
{
    delete ui;
}
