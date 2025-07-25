#ifndef RESERVAEQUIPO_H
#define RESERVAEQUIPO_H

#include <QDialog>
#include <listatrabajadores.h>
#include <listalaboratorios.h>
#include <listareserva.h>
namespace Ui {
class ReservaEquipo;
}

class ReservaEquipo : public QDialog
{
    Q_OBJECT

public:
    explicit ReservaEquipo(QWidget *parent = 0);
    ~ReservaEquipo();



    ListaTrabajadores *getLTra() const;
    void setLTra(ListaTrabajadores *value);

    ListaLaboratorios *getLLab() const;
    void setLLab(ListaLaboratorios *value);

    ListaReserva *getLRes() const;
    void setLRes(ListaReserva *value);
    void llenarComboLaboratorios();
    void cargarEquiposDelLaboratorio();
    void limpiar() ;
    NodoTrabajador *elegirTrabajador();


private slots:
    void on_pushButton_clicked();

private:
    Ui::ReservaEquipo *ui;
    ListaTrabajadores *lTra;
    ListaLaboratorios *lLab;
    ListaReserva *lRes;
};

#endif // RESERVAEQUIPO_H
