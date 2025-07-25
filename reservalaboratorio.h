#ifndef RESERVALABORATORIO_H
#define RESERVALABORATORIO_H

#include <QDialog>

namespace Ui {
class ReservaLaboratorio;
}

class ReservaLaboratorio : public QDialog
{
    Q_OBJECT

public:
    explicit ReservaLaboratorio(QWidget *parent = 0);
    ~ReservaLaboratorio();

private:
    Ui::ReservaLaboratorio *ui;
};

#endif // RESERVALABORATORIO_H
