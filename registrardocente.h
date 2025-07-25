#ifndef REGISTRARDOCENTE_H
#define REGISTRARDOCENTE_H
#include "listadocente.h"
#include <QDialog>

namespace Ui {
class RegistrarDocente;
}

class RegistrarDocente : public QDialog
{
    Q_OBJECT

public:
    explicit RegistrarDocente(QWidget *parent = 0);
    ~RegistrarDocente();

    void mostrarCodigo (Docente *doc);
    void guardarDocente (Docente *doc);
    void limpiar ();
    ListaDocente *getLDoc() const;
    void setLDoc(ListaDocente *value);

private slots:
    void on_btnRegistrar_clicked();

private:
    Ui::RegistrarDocente *ui;
    ListaDocente *lDoc;
};

#endif // REGISTRARDOCENTE_H
