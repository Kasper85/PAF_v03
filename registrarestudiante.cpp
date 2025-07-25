#include "registrarestudiante.h"
#include "ui_registrarestudiante.h"
#include "qmessagebox.h"
#include "fstream"

const char limite = '%';
const string archivoEstudiantes = "..\\estudiantes.txt";

RegistrarEstudiante::RegistrarEstudiante(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegistrarEstudiante)
{
    this->lEst = new ListaEstudiante;
    ui->setupUi(this);
}

RegistrarEstudiante::~RegistrarEstudiante()
{
    delete ui;
}

ListaEstudiante *RegistrarEstudiante::getLEst() const
{
    return lEst;
}

void RegistrarEstudiante::setLEst(ListaEstudiante *value)
{
    lEst = value;
}

void RegistrarEstudiante::mostrarCodigo(Estudiante *est){
    ui->txtCodigo->setText(QString::fromStdString(est->getCodEst()));
}


void RegistrarEstudiante::on_pushButton_clicked()
{
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

    if (ui->txtCiclo->text().isEmpty()){
        QMessageBox::critical(this,"Error","Debe de ingresar el ciclo");
        return;
    }
    Estudiante *est = new Estudiante ();
    est->setNombre(ui->txtNombre->text().toStdString());
    est->setApellido(ui->txtApellido->text().toStdString());
    est->setDni(ui->txtDni->text().toStdString());
    if(ui->rbtHom->isChecked())
        est->setGenero(true);
    else
        est->setGenero(false);
    est->setCiclo(ui->txtCiclo->text().toStdString());

    this->lEst->insertarEstudiante (est);

    guardarEstudiante (est);
    QMessageBox::information(this,"Registro","Estudiante registrado correctamente",QMessageBox::Ok);

    limpiar();

}

void RegistrarEstudiante::limpiar(){
    ui->txtNombre->clear();
    ui->txtApellido->clear();
    ui->txtDni->clear();
    ui->txtCiclo->clear();
    ui->txtNombre->setFocus();
}

void RegistrarEstudiante::guardarEstudiante( Estudiante *est ) {
      ofstream archivo;
      archivo.open( archivoEstudiantes.c_str(),
                    std::ios_base::out | std::ios_base::app  );
      if ( archivo.is_open()  ){
          archivo << est->getCodEst() << limite <<
                     est->getNombre() << limite <<
                     est->getApellido() << limite <<
                     est->getDni() << limite <<
                     est->getGenero() << limite <<
                     est->getCiclo() << endl ;
      }
      archivo.close();
}





