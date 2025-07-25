#ifndef LISTADOINSUMOS_H
#define LISTADOINSUMOS_H
#include <listainsumo.h>
#include <QDialog>

namespace Ui {
class ListadoInsumos;
}

class ListadoInsumos : public QDialog
{
    Q_OBJECT

public:
    explicit ListadoInsumos(QWidget *parent = 0);
    ~ListadoInsumos();

    ListaInsumo *getLInsu() const;
    void setLInsu(ListaInsumo *value);
    void listado();

private slots:
    void on_btnBuscar_clicked();

private:
    Ui::ListadoInsumos *ui;
    ListaInsumo*lInsu;
};

#endif // LISTADOINSUMOS_H
