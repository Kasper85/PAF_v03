#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "universidad.h"

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionRegistrar_facultades_triggered();

    void on_actionRegistrar_Insumos_triggered();

    void on_actionRegistrar_Equipos_triggered();

    void on_actionRegistrar_laboratorio_triggered();

    void on_actionListar_Insumos_triggered();

    void on_actionRegistrar_Prestamos_triggered();

    void on_actionRegistrar_Estudiante_triggered();

    void on_actionRegistrar_Docente_triggered();

    void on_actionReserva_equipo_triggered();

    void on_actionRegistrar_Trabajador_triggered();

private:
    Ui::MainWindow *ui;
    Universidad *uni;
};

#endif // MAINWINDOW_H
