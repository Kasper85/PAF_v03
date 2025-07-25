#include "registrartrabajador.h"
#include "ui_registrartrabajador.h"
#include "QMessageBox"
#include "sstream"
#include "fstream"

const char limite = '%';
const string archivoTrabajadores = "..\\trabajadores.txt";

RegistrarTrabajador::RegistrarTrabajador(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegistrarTrabajador)
{
    this->lTra = new ListaTrabajadores();
    ui->setupUi(this);
    ui->cmbNivel->addItem("Admin",QVariant(1));
    ui->cmbNivel->addItem("Encargado",QVariant(2));
}

RegistrarTrabajador::~RegistrarTrabajador()
{
    delete ui;
}

ListaTrabajadores *RegistrarTrabajador::getLTra() const
{
    return lTra;
}

void RegistrarTrabajador::setLTra(ListaTrabajadores *value)
{
    lTra = value;
}

void RegistrarTrabajador::mostrarCodigo(Trabajador *tra){
    ui->txtCodigo->setText(QString::fromStdString(tra->getCodTra()));
}

void RegistrarTrabajador::on_btnRegistrar_clicked()
{
    QMessageBox *msje = new QMessageBox();
    if (ui->txtNombre->text().isEmpty()){
        QMessageBox::critical(this,"Error","Debe de ingresar el nombre");
        return;
    }

    if (ui->txtApellido->text().isEmpty()){
        QMessageBox::critical(this,"Error","Debe de ingresar el apellido");
        return;
    }

    if (ui->txtDni->text().isEmpty()){
        QMessageBox::critical(this,"Error","Debe de ingresar el dni");
        return;
    }

    if (ui->txtUsu->text().isEmpty()){
        QMessageBox::critical(this,"Error","Debe de ingresar el usuario");
        return;
    }

    if (ui->txtContra->text().isEmpty()){
        QMessageBox::critical(this,"Error","Debe de ingresar la contraseña");
        return;
    }

    Trabajador *tra = new Trabajador ();
    tra->setNombre(ui->txtNombre->text().toStdString());
    tra->setApellido(ui->txtApellido->text().toStdString());
    tra->setDni(ui->txtDni->text().toStdString());
    if(ui->rbtHom->isChecked())
        tra->setGenero(true);
    else
        tra->setGenero(false);
    tra->setUsuario(ui->txtUsu->text().toStdString());
    tra->setContra(ui->txtContra->text().toStdString());
    tra->setNivel( ui->cmbNivel->currentIndex() + 1 );
    this->getLTra()->insertarTrabajador(tra);
    guardarTrabajador(tra);
    msje->setText ("Trabajador registrado correctamente");
    msje->show();
    limpiar();
}

void RegistrarTrabajador::limpiar(){
    ui->txtNombre->clear();
    ui->txtApellido->clear();
    ui->txtDni->clear();
    ui->txtUsu->clear();
    ui->txtContra->clear();
    ui->txtNombre->setFocus();
}

void RegistrarTrabajador::guardarTrabajador( Trabajador *tra ) {
      ofstream archivo;
      archivo.open( archivoTrabajadores.c_str(),
                    std::ios_base::out | std::ios_base::app  );
      if ( archivo.is_open()  ){
          archivo << tra->getCodTra() << limite <<
                     tra->getNombre() << limite <<
                     tra->getApellido() << limite <<
                     tra->getDni() << limite <<
                     tra->getGenero() << limite <<
                     tra->getUsuario() << limite <<
                     tra->getContra() << limite <<
                     tra->getNivel() << endl;
      }
      archivo.close();
}
