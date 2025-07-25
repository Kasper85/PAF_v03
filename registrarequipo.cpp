#include "registrarequipo.h"
#include "ui_registrarequipo.h"
#include "QMessageBox"
#include "sstream"
#include "fstream"


const char limite = '%';
const string archivoEquipo = "..\equipo.txt";


RegistrarEquipo::RegistrarEquipo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegistrarEquipo)
{
    this->lEqui = new ListaEquipos;
    ui->setupUi(this);
    this->llenarComboLaboratorios();

    ui->cmbEstado->addItem("ocupado", QVariant(1) );
    ui->cmbEstado->addItem("libre", QVariant(2) );
    ui->cmbEstado->addItem("mantenimiento", QVariant(3));
}

RegistrarEquipo::~RegistrarEquipo()
{
    delete ui;
}
ListaEquipos *RegistrarEquipo::getLEqui() const
{
    return lEqui;
}

void RegistrarEquipo::setLEqui(ListaEquipos *value)
{
    lEqui = value;
}

void RegistrarEquipo::llenarComboLaboratorios() {
    ui->cmbLabo->clear();
    NodoLaboratorio* aux = lLab->getCab();
    while (aux != NULL) {
        ui->cmbLabo->addItem(QString::fromStdString(aux->getInfo()->getNombre()));
        aux = aux->getSgte();
    }
}



void RegistrarEquipo::on_btnRegistrar_clicked()
{
    QMessageBox*msje = new QMessageBox();
    if(ui->txtNombre->text().isEmpty()){
        msje->setText("Debe ingresar nombre de equipo");
        msje->show();
        return;
    }

    if(ui->txtDescripcion->text().isEmpty()){
        msje->setText("Debe ingresar la descripcion");
        msje->show();
        return;
    }
    if(ui->txtNumSerie->text().isEmpty()){
        msje->setText("Debe ingresar el numero de serie");
        msje->show();
        return;
    }

    if(ui->spinCantidad->value() == 0){
        msje->setText("Debe ingresar cantidad");
        msje->show();
        return;
    }

    if(ui->spinPrecioUni->value()==0){
        msje->setText("debe ingresar el precio unitario ");
        msje->show();
        return;
    }

    Equipo*equi = new Equipo();
    equi->setNombre(ui->txtNombre->text().toStdString());
    equi->setDescripcion(ui->txtDescripcion->text().toStdString());
    equi->setNSerie(ui->txtNumSerie->text().toStdString());
    equi->setCantidad(ui->spinCantidad->value());
    equi->setPrecio(ui->spinPrecioUni->value());

    QString nombreLab = ui->cmbLabo->currentText();
    NodoLaboratorio* aux = lLab->getCab();
    while (aux != NULL) {
        if (QString::fromStdString(aux->getInfo()->getNombre()) == nombreLab) {
            aux->getInfo()->getLEq()->insertarEquipo(equi);  // Aquí se añade el equipo al laboratorio
            break;
        }
        aux = aux->getSgte();
    }

    guardarEquipo( equi );
    msje->setText("Trabajador registrado correctamente");
    msje->show();
    limpiar();
}



void RegistrarEquipo::limpiar(){
    ui->txtNombre->clear();
    ui->txtDescripcion->clear();
    ui->txtNumSerie->clear();
    ui->spinCantidad->clear();
    ui->spinPrecioUni->setFocus();
}




void RegistrarEquipo::guardarEquipo( Equipo *eq ) {
      ofstream archivo;
      archivo.open( archivoEquipo.c_str(),
                    std::ios_base::out | std::ios_base::app  );
      if ( archivo.is_open()  ){
          archivo << eq->getNombre() << limite <<
                     eq->getDescripcion() << limite <<
                     eq->getNSerie() << limite <<
                     eq->getCantidad() << limite <<
                     eq->getPrecio() << endl ;
      }
      archivo.close();
}











void RegistrarEquipo::on_btnCancelar_clicked()
{
    this->close();
}
ListaLaboratorios *RegistrarEquipo::getLLab() const
{
    return lLab;
}

void RegistrarEquipo::setLLab(ListaLaboratorios *value)
{
    lLab = value;
}

