#ifndef REGISTRARLABORATORIO_H
#define REGISTRARLABORATORIO_H
#include <listalaboratorios.h>
#include <listafacultades.h>

#include <QDialog>

namespace Ui {
class RegistrarLaboratorio;
}

class RegistrarLaboratorio : public QDialog
{
    Q_OBJECT

public:
    explicit RegistrarLaboratorio(QWidget *parent = 0);
    ~RegistrarLaboratorio();

    ListaLaboratorios *getLLab() const;
    void setLLab(ListaLaboratorios *value);
    void limpiarControles();
    NodoFacultades *elegirFacultad();

private slots:
    void on_btnRegistrar_clicked();

    void on_btnCancelar_clicked();

private:
    Ui::RegistrarLaboratorio *ui;
    ListaLaboratorios*lLab;
    ListaFacultades *lFac;

};

#endif // REGISTRARLABORATORIO_H
