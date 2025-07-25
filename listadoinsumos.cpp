#include "listadoinsumos.h"
#include "ui_listadoinsumos.h"
#include "QMessageBox"

ListadoInsumos::ListadoInsumos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ListadoInsumos)
{
    this->lInsu = new ListaInsumo();
    ui->setupUi(this);
    ui->twInsumo->setColumnWidth(0,70 );
    ui->twInsumo->setColumnWidth(1, 220 );
    ui->twInsumo->setColumnWidth(2, 220 );
    ui->twInsumo->setColumnWidth(3, 70 );
}

ListadoInsumos::~ListadoInsumos()
{
    delete ui;
}

ListaInsumo *ListadoInsumos::getLInsu() const
{
    return lInsu;
}

void ListadoInsumos::setLInsu(ListaInsumo *value)
{
    lInsu = value;
}

void ListadoInsumos::listado(){
    NodoInsumo*aux = new NodoInsumo();
    aux = this->lInsu->getCab();
    int x = 0;
    while (aux != NULL ){
        ui->twInsumo->insertRow(ui->twInsumo->rowCount());
        ui->twInsumo->setItem(x,0, new QTableWidgetItem(aux->getInfo()->getNombre().c_str()));
        ui->twInsumo->setItem(x,1, new QTableWidgetItem(aux->getInfo()->getCantidad()));
        ui->twInsumo->setItem(x,2, new QTableWidgetItem(aux->getInfo()->getDescripcion().c_str()));
        ui->twInsumo->setItem(x,3, new QTableWidgetItem(aux->getInfo()->getPrecio()));
        aux = aux->getSgte();
        x++;
    }
}

void ListadoInsumos::on_btnBuscar_clicked()
{
    QMessageBox *msje = new QMessageBox();
    if ( ui->textInsumo->text().isEmpty()){
        msje->setText("Debe ingresar Insumo");
        msje->show();
        ui->textInsumo->setFocus();
        return;
    }
    ui->twInsumo->setRowCount(0); // limpia el table widget
    NodoInsumo *aux = new NodoInsumo();
    aux = this->lInsu->getCab();
    int x = 0;
    while( aux != NULL ){
        if ( aux->getInfo()->getNombre().find(ui->textInsumo->text().toStdString())
            != string::npos){
        //if ( aux->getInfo()->getDni().c_str() == ui->txtDni->text()){
            ui->twInsumo->insertRow( ui->twInsumo->rowCount() );
            ui->twInsumo->setItem(x, 0, new QTableWidgetItem( aux->getInfo()->getNombre().c_str ()));
            ui->twInsumo->setItem(x, 1, new QTableWidgetItem( aux->getInfo()->getDescripcion().c_str() ));
            ui->twInsumo->setItem(x, 2, new QTableWidgetItem( aux->getInfo()->getCantidad() ));
            ui->twInsumo->setItem(x, 3, new QTableWidgetItem( aux->getInfo()->getPrecio() ));

         }
        aux = aux->getSgte();
    }
}

