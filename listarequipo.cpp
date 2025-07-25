#include "listarequipo.h"
#include "ui_listarequipo.h"

ListarEquipo::ListarEquipo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ListarEquipo)
{
    ui->setupUi(this);
}

ListarEquipo::~ListarEquipo()
{
    delete ui;
}
