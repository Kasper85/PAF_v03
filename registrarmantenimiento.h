#ifndef REGISTRARMANTENIMIENTO_H
#define REGISTRARMANTENIMIENTO_H

#include <QDialog>

namespace Ui {
class RegistrarMantenimiento;
}

class RegistrarMantenimiento : public QDialog
{
    Q_OBJECT

public:
    explicit RegistrarMantenimiento(QWidget *parent = 0);
    ~RegistrarMantenimiento();

private:
    Ui::RegistrarMantenimiento *ui;
};

#endif // REGISTRARMANTENIMIENTO_H
