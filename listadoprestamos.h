#ifndef LISTADOPRESTAMOS_H
#define LISTADOPRESTAMOS_H

#include <QDialog>

namespace Ui {
class ListadoPrestamos;
}

class ListadoPrestamos : public QDialog
{
    Q_OBJECT

public:
    explicit ListadoPrestamos(QWidget *parent = 0);
    ~ListadoPrestamos();

private:
    Ui::ListadoPrestamos *ui;
};

#endif // LISTADOPRESTAMOS_H
