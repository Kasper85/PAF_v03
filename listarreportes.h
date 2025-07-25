#ifndef LISTARREPORTES_H
#define LISTARREPORTES_H

#include <QDialog>

namespace Ui {
class ListarReportes;
}

class ListarReportes : public QDialog
{
    Q_OBJECT

public:
    explicit ListarReportes(QWidget *parent = 0);
    ~ListarReportes();

private:
    Ui::ListarReportes *ui;
};

#endif // LISTARREPORTES_H
