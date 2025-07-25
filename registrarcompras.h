#ifndef REGISTRARCOMPRAS_H
#define REGISTRARCOMPRAS_H

#include <QDialog>

namespace Ui {
class RegistrarCompras;
}

class RegistrarCompras : public QDialog
{
    Q_OBJECT

public:
    explicit RegistrarCompras(QWidget *parent = 0);
    ~RegistrarCompras();

private:
    Ui::RegistrarCompras *ui;
};

#endif // REGISTRARCOMPRAS_H
