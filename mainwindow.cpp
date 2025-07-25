#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "registrarfacultad.h"
#include "registrarinsumo.h"
#include "registrarequipo.h"
#include "registrarlaboratorio.h"
#include "registrarprestamo.h"
#include "listadoinsumos.h"
#include "registrarestudiante.h"
#include "registrardocente.h"
#include "reservaequipo.h"
#include "registrartrabajador.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    this->uni = new Universidad();
    ui->setupUi(this);
    this->centralWidget()->setStyleSheet(
                        "background-image:url(:/Recursos/Fondo.jpg); "
                        "background-position:center;");
    this->showMaximized(); // mostrar ventana maximizada
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionRegistrar_facultades_triggered()
{
    RegistrarFacultad *rF = new RegistrarFacultad();
    rF->show();
}

void MainWindow::on_actionRegistrar_Insumos_triggered()
{
    RegistrarInsumo*rIn= new RegistrarInsumo();
    rIn->show();
}

void MainWindow::on_actionRegistrar_Equipos_triggered()
{
    RegistrarEquipo*rEqui= new RegistrarEquipo();
    rEqui->show();
}

void MainWindow::on_actionRegistrar_laboratorio_triggered()
{
    RegistrarLaboratorio*rLab = new RegistrarLaboratorio();
    rLab->show();
}

void MainWindow::on_actionListar_Insumos_triggered()
{
    ListadoInsumos*lInsu= new ListadoInsumos();
    lInsu->show();
}

void MainWindow::on_actionRegistrar_Prestamos_triggered()
{

    RegistrarPrestamo*rLab = new RegistrarPrestamo();
    rLab->show();
}

void MainWindow::on_actionRegistrar_Estudiante_triggered()
{
    RegistrarEstudiante *rEst = new RegistrarEstudiante ();
    rEst->show();
    Estudiante *est = new Estudiante ();
    rEst->mostrarCodigo(est);
}

void MainWindow::on_actionRegistrar_Docente_triggered()
{
    RegistrarDocente *rDoc = new RegistrarDocente ();
    rDoc->show();
    Docente *doc = new Docente ();
    rDoc->mostrarCodigo(doc);
}

void MainWindow::on_actionReserva_equipo_triggered()
{

    ReservaEquipo*rLab = new ReservaEquipo();
    rLab->show();
}

void MainWindow::on_actionRegistrar_Trabajador_triggered()
{
    RegistrarTrabajador *rTra = new RegistrarTrabajador ();
    rTra->show();
    Trabajador *tra = new Trabajador ();
    rTra->mostrarCodigo(tra);
}
