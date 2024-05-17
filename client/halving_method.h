#ifndef HALVING_METHOD_H
#define HALVING_METHOD_H

#include <QWidget>
#include "funcforclient.h"

namespace Ui {
class Halving_method;
}

class Halving_method : public QWidget
{
    Q_OBJECT

public:
    explicit Halving_method(QWidget *parent = nullptr);
    ~Halving_method();
    void task2_login(QString login);

private:
    Ui::Halving_method *ui;
private slots:
    void on_pushButton_exit_halving_method_clicked();
    void on_pushButton_check_halving_method_clicked();
};

#endif // HALVING_METHOD_H
