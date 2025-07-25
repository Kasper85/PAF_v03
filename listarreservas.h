#ifndef LISTARRESERVAS_H
#define LISTARRESERVAS_H

#include <QDialog>

namespace Ui {
class ListarReservas;
}

class ListarReservas : public QDialog
{
    Q_OBJECT

public:
    explicit ListarReservas(QWidget *parent = 0);
    ~ListarReservas();

private:
    Ui::ListarReservas *ui;
};

#endif // LISTARRESERVAS_H
