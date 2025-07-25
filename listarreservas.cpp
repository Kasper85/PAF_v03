#include "listarreservas.h"
#include "ui_listarreservas.h"

ListarReservas::ListarReservas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ListarReservas)
{
    ui->setupUi(this);
}

ListarReservas::~ListarReservas()
{
    delete ui;
}
