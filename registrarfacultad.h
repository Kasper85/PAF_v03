#ifndef REGISTRARFACULTAD_H
#define REGISTRARFACULTAD_H
#include<listafacultades.h>

#include <QDialog>

namespace Ui {
class RegistrarFacultad;
}

class RegistrarFacultad : public QDialog
{
    Q_OBJECT

public:
    explicit RegistrarFacultad(QWidget *parent = 0);
    ~RegistrarFacultad();

    ListaFacultades *getLFac() const;
    void setLFac(ListaFacultades *value);
    void limpiarControles();

    ListaLaboratorios *getLLab() const;
    void setLLab(ListaLaboratorios *value);

private slots:
    void on_btnRegistrar_clicked();

    void on_btnCancelar_clicked();

private:
    Ui::RegistrarFacultad *ui;
    ListaFacultades *lFac;
    ListaLaboratorios *lLab;
    void guardarFacu(Facultad *Fac) ;

};

#endif // REGISTRARFACULTAD_H
