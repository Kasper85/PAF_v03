#include "listadoprestamos.h"
#include "ui_listadoprestamos.h"

ListadoPrestamos::ListadoPrestamos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ListadoPrestamos)
{
    ui->setupUi(this);
}

ListadoPrestamos::~ListadoPrestamos()
{
    delete ui;
}
