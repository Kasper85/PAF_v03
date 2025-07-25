#ifndef REGISTRAREQUIPO_H
#define REGISTRAREQUIPO_H
#include<listaequipos.h>
#include<listalaboratorios.h>

#include <QDialog>

namespace Ui {
class RegistrarEquipo;
}

class RegistrarEquipo : public QDialog
{
    Q_OBJECT

public:
    explicit RegistrarEquipo(QWidget *parent = 0);
    ~RegistrarEquipo();

    ListaEquipos *getLEqui() const;
    void setLEqui(ListaEquipos *value);
    void guardarEquipo(Equipo * eq);
    void limpiar();

    
    ListaLaboratorios *getLLab() const;
    void setLLab(ListaLaboratorios *value);

    void llenarComboLaboratorios() ;


private slots:
    void on_btnRegistrar_clicked();
    
    void on_btnCancelar_clicked();
    
private:
    Ui::RegistrarEquipo *ui;
    ListaEquipos*lEqui;
    ListaLaboratorios *lLab;
};

#endif // REGISTRAREQUIPO_H
