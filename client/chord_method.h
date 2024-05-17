#ifndef CHORD_METHOD_H
#define CHORD_METHOD_H

#include <QWidget>
#include "funcforclient.h"

namespace Ui {
class Chord_method;
}

class Chord_method : public QWidget
{
    Q_OBJECT

public:
    explicit Chord_method(QWidget *parent = nullptr);
    ~Chord_method();
    void task5_login(QString login);

private slots:
    void on_pushButton_exit_clicked();

    void on_pushButton_check_clicked();

private:
    Ui::Chord_method *ui;
};

#endif // CHORD_METHOD_H
