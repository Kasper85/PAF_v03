#ifndef LISTAREQUIPO_H
#define LISTAREQUIPO_H

#include <QDialog>

namespace Ui {
class ListarEquipo;
}

class ListarEquipo : public QDialog
{
    Q_OBJECT

public:
    explicit ListarEquipo(QWidget *parent = 0);
    ~ListarEquipo();

private:
    Ui::ListarEquipo *ui;
};

#endif // LISTAREQUIPO_H
