#include <string>
#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"
#include "qmessagebox.h"
#include "sstream"
#include "fstream"

const char limite = '%';
const string archivoEstudiantes = "..\\estudiantes.txt";
const string archivoTrabajadores = "..\\trabajadores.txt";
const string archivoDocentes = "..\\docentes.txt";

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    this->lDoc = new ListaDocente();
    this->lEst = new ListaEstudiante ();
    this->lTra = new ListaTrabajadores ();
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}
ListaEstudiante *Login::getLEst() const
{
    return lEst;
}

void Login::setLEst(ListaEstudiante *value)
{
    lEst = value;
}
ListaDocente *Login::getLDoc() const
{
    return lDoc;
}

void Login::setLDoc(ListaDocente *value)
{
    lDoc = value;
}

void Login::on_BtnIngresar_clicked()
{
    QMessageBox *msje = new QMessageBox();
    if ( ui->txtUser->text().isEmpty() ){
        msje->setText("Debe ingresar Usuario");
        msje->show();
        return;
    }
    if ( ui->txtContra->text().isEmpty() ){
        msje->setText("Debe ingresar Contraseña");
        msje->show();
        return;
    }
    recuperarTrabajador ();
    recuperarDocente ();
    recuperarEstudiante ();

    Trabajador *tra = new Trabajador();

    tra = this->getLTra()->BuscarCredenciales( ui->txtUser->text().toStdString(),
                                               ui->txtContra->text().toStdString() );
    if ( tra == NULL){
        QMessageBox *qm = new QMessageBox();
          qm->setText("Usuario y/o contraseña incorrecta");
          qm->exec();
    }else{
        this->close();
        MainWindow *mw = new MainWindow();
        //asignarPermisos(  );
        mw->show();
    }

}
ListaTrabajadores *Login::getLTra() const
{
    return lTra;
}

void Login::setLTra(ListaTrabajadores *value)
{
    lTra = value;
}

void Login::recuperarDocente(){
    string linea, codigo, nombre, apellidos, dni, genero,especialidad, sueldo ;

    ifstream archivo( archivoDocentes.c_str(), ios_base::in );
    while( getline( archivo, linea )){
        Docente *doc = new Docente();
        stringstream entrada(linea);
        getline( entrada, codigo, limite );
        doc->setCodDoc( codigo );
        getline( entrada, nombre, limite );
        doc->setNombre(nombre);
        getline( entrada, apellidos, limite );
        doc->setApellido(apellidos);
        getline( entrada, dni, limite );
        doc->setDni(dni);
        getline(entrada, genero, limite);
        doc->setGenero(genero == "1"); // Convierte "1" en true y cualquier otro valor en false.
        getline(entrada, especialidad, limite);
        doc->setEspecialidad(especialidad);
        getline(entrada, sueldo, limite);
        doc->setSueldo(atof(sueldo.c_str())); // Convirtiendo string a double.
        this->getLDoc()->insertarDocente(doc);
    }
    archivo.close();
}

void Login::recuperarEstudiante(){
    string linea, codigo, nombre, apellidos, dni, genero,ciclo ;

    ifstream archivo( archivoEstudiantes.c_str(), ios_base::in );
    while( getline( archivo, linea )){
        Estudiante *est = new Estudiante();
        stringstream entrada(linea);
        getline( entrada, codigo, limite );
        est->setCodEst( codigo );
        getline( entrada, nombre, limite );
        est->setNombre(nombre);
        getline( entrada, apellidos, limite );
        est->setApellido(apellidos);
        getline( entrada, dni, limite );
        est->setDni(dni);
        getline(entrada, genero, limite);
        est->setGenero(genero == "1"); // Convierte "1" en true y cualquier otro valor en false.
        getline(entrada, ciclo, limite);
        est->setCiclo(ciclo);
        this->getLEst()->insertarEstudiante(est);
    }
    archivo.close();
}

void Login::recuperarTrabajador(){
    string linea,codigo, nombre, apellidos, dni , genero , usuario,contra, nivel ;

    ifstream archivo( archivoTrabajadores.c_str(), ios_base::in );
    while( getline( archivo, linea )){
        Trabajador *tra = new Trabajador();
        stringstream entrada(linea);
        getline( entrada, codigo, limite );
        tra->setCodTra( codigo );
        getline( entrada, nombre, limite );
        tra->setNombre(nombre);
        getline( entrada, apellidos, limite );
        tra->setApellido(apellidos);
        getline( entrada, dni, limite );
        tra->setDni(dni);
        getline(entrada, genero, limite);
        tra->setGenero(genero == "1"); // Convierte "1" en true y cualquier otro valor en false.
        getline( entrada, usuario, limite );
        tra->setUsuario(usuario);
        getline( entrada, contra, limite );
        tra->setContra(contra);
        getline( entrada, nivel, limite );
        tra->setNivel( atoi(  nivel.c_str() ) );
        this->getLTra()->insertarTrabajador(tra);
    }
   archivo.close();
}



