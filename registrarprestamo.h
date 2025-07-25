#ifndef REGISTRARPRESTAMO_H
#define REGISTRARPRESTAMO_H

#include <QDialog>
#include <listatrabajadores.h>
#include <listalaboratorios.h>
#include <listaprestamos.h>

namespace Ui {
class RegistrarPrestamo;
}

class RegistrarPrestamo : public QDialog
{
    Q_OBJECT

public:
    explicit RegistrarPrestamo(QWidget *parent = 0);
    ~RegistrarPrestamo();

    ListaTrabajadores *getLTra() const;
    void setLTra(ListaTrabajadores *value);

    ListaLaboratorios *getLLab() const;
    void setLLab(ListaLaboratorios *value);

    NodoTrabajador *elegirTrabajador();
    void llenarComboLaboratorios();
    void cargarEquiposDelLaboratorio();
    void limpiar() ;



private slots:
    void on_PbRegistrar_clicked();

private:
    Ui::RegistrarPrestamo *ui;
    ListaTrabajadores *lTra;
    ListaLaboratorios *lLab;
    ListaPrestamos *lPres;
};

#endif // REGISTRARPRESTAMO_H
