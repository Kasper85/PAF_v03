#include "registrardocente.h"
#include "ui_registrardocente.h"
#include "qmessagebox.h"
#include "fstream"

const char limite = '%';
const string archivoDocentes = "..\\docentes.txt";

RegistrarDocente::RegistrarDocente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegistrarDocente)
{
    ui->setupUi(this);
    this->lDoc = new ListaDocente;
}

RegistrarDocente::~RegistrarDocente()
{
    delete ui;
}
ListaDocente *RegistrarDocente::getLDoc() const
{
    return lDoc;
}

void RegistrarDocente::setLDoc(ListaDocente *value)
{
    lDoc = value;
}

void RegistrarDocente::mostrarCodigo(Docente *doc){
    ui->txtCodigo->setText(QString::fromStdString(doc->getCodDoc()));
}


void RegistrarDocente::on_btnRegistrar_clicked()
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

    if (ui->txtEspecialidad->text().isEmpty()){
        QMessageBox::critical(this,"Error","Debe de ingresar la especialidad");
        return;
    }

    if (ui->spinSueldo->value() == 0){
        QMessageBox::critical(this,"Error","Debe de ingresar el sueldo");
        return;
    }

    Docente *doc = new Docente ();
    doc->setNombre(ui->txtNombre->text().toStdString());
    doc->setApellido(ui->txtApellido->text().toStdString());
    doc->setDni(ui->txtDni->text().toStdString());
    if(ui->rbtHom->isChecked())
        doc->setGenero(true);
    else
        doc->setGenero(false);
    doc->setEspecialidad(ui->txtEspecialidad->text().toStdString());
    doc->setSueldo(ui->spinSueldo->value());

    this->lDoc->insertarDocente (doc);

    guardarDocente (doc);
    QMessageBox::information(this,"Registro","Docente registrado correctamente",QMessageBox::Ok);

    limpiar ();
}

void RegistrarDocente::limpiar(){
    ui->txtNombre->clear();
    ui->txtApellido->clear();
    ui->txtDni->clear();
    ui->txtEspecialidad->clear();
    ui->spinSueldo->setValue(0);
    ui->txtNombre->setFocus();
}

void RegistrarDocente::guardarDocente( Docente *doc ) {
      ofstream archivo;
      archivo.open( archivoDocentes.c_str(),
                    std::ios_base::out | std::ios_base::app  );
      if ( archivo.is_open()  ){
          archivo << doc->getCodDoc() << limite <<
                     doc->getNombre() << limite <<
                     doc->getApellido() << limite <<
                     doc->getDni() << limite <<
                     doc->getGenero() << limite <<
                     doc->getEspecialidad() << limite <<
                     doc->getSueldo() << endl ;
      }
      archivo.close();
}



