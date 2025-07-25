#ifndef LOGIN_H
#define LOGIN_H

#include "listatrabajadores.h"
#include "listaestudiante.h"
#include "listadocente.h"
#include <QDialog>

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();

    ListaEstudiante *getLEst() const;
    void setLEst(ListaEstudiante *value);

    ListaDocente *getLDoc() const;
    void setLDoc(ListaDocente *value);
    void recuperarDocente();
    void recuperarEstudiante();
    void recuperarTrabajador();

    ListaTrabajadores *getLTra() const;
    void setLTra(ListaTrabajadores *value);

private slots:
    void on_BtnIngresar_clicked();

private:
    Ui::Login *ui;
    ListaEstudiante *lEst;
    ListaDocente *lDoc;
    ListaTrabajadores *lTra;
};

#endif // LOGIN_H
