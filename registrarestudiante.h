#ifndef REGISTRARESTUDIANTE_H
#define REGISTRARESTUDIANTE_H
#include "listaestudiante.h"
#include <QDialog>

namespace Ui {
class RegistrarEstudiante;
}

class RegistrarEstudiante : public QDialog
{
    Q_OBJECT

public:
    explicit RegistrarEstudiante(QWidget *parent = 0);
    ~RegistrarEstudiante();

    ListaEstudiante *getLEst() const;
    void setLEst(ListaEstudiante *value);
    void mostrarCodigo(Estudiante *est);
    void guardarEstudiante( Estudiante *est );
    void limpiar();
private slots:
    void on_pushButton_clicked();

private:
    Ui::RegistrarEstudiante *ui;
    ListaEstudiante *lEst;
};

#endif // REGISTRARESTUDIANTE_H
