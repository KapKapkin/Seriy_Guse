#ifndef GRAF_MIN_H
#define GRAF_MIN_H

#include <QWidget>
#include "funcforclient.h"

namespace Ui {
class Graf_min;
}

class Graf_min : public QWidget
{
    Q_OBJECT

public:
    explicit Graf_min(QWidget *parent = nullptr);
    ~Graf_min();
    void task1_login(QString login);

private slots:
    void on_pushButton_exit_graf_min_clicked();

    void on_pushButton_check_graf_min_clicked();

private:
    Ui::Graf_min *ui;
};

#endif // GRAF_MIN_H
