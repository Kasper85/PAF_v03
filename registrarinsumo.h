#ifndef REGISTRARINSUMO_H
#define REGISTRARINSUMO_H
#include <listainsumo.h>

#include <QDialog>

namespace Ui {
class RegistrarInsumo;
}

class RegistrarInsumo : public QDialog
{
    Q_OBJECT

public:
    explicit RegistrarInsumo(QWidget *parent = 0);
    ~RegistrarInsumo();

    ListaInsumo *getLInsu() const;
    void setLInsu(ListaInsumo *value);
    void limpiarControles();

private slots:
    void on_btnRegistrar_clicked();

    void on_btnCancelar_clicked();

private:
    Ui::RegistrarInsumo *ui;
    ListaInsumo*lInsu;
};

#endif // REGISTRARINSUMO_H
