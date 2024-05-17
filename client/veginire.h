#ifndef VEGINIRE_H
#define VEGINIRE_H

#include <QWidget>
#include "funcforclient.h"

namespace Ui {
class Veginire;
}

class Veginire : public QWidget
{
    Q_OBJECT

public:
    explicit Veginire(QWidget *parent = nullptr);
    ~Veginire();
    void setVariant();
    void task3_login(QString login);

private:
    Ui::Veginire *ui;
private slots:
    void on_pushButton_exit_veginire_clicked();
    void on_pushButton_check_veginire_clicked();
};


#endif // VEGINIRE_H
