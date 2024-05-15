#ifndef HALVING_METHOD_H
#define HALVING_METHOD_H

#include <QWidget>

namespace Ui {
class Halving_method;
}

class Halving_method : public QWidget
{
    Q_OBJECT

public:
    explicit Halving_method(QWidget *parent = nullptr);
    ~Halving_method();

private:
    Ui::Halving_method *ui;
private slots:
    void on_pushButton_exit_halving_method_clicked();
    void on_pushButton_result_halving_method_clicked();
};

#endif // HALVING_METHOD_H
