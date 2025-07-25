#include "listatrabajadores.h"
#ifndef REGISTRARTRABAJADOR_H
#define REGISTRARTRABAJADOR_H

#include <QDialog>

namespace Ui {
class RegistrarTrabajador;
}

class RegistrarTrabajador : public QDialog
{
    Q_OBJECT

public:
    explicit RegistrarTrabajador(QWidget *parent = 0);
    ~RegistrarTrabajador();

    ListaTrabajadores *getLTra() const;
    void setLTra(ListaTrabajadores *value);
    void guardarTrabajador( Trabajador *tra );
    void limpiar();
    void mostrarCodigo (Trabajador *tra);

private slots:
    void on_btnRegistrar_clicked();

private:
    Ui::RegistrarTrabajador *ui;
    ListaTrabajadores *lTra;
};

#endif // REGISTRARTRABAJADOR_H
