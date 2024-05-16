#ifndef GRAF_MIN_H
#define GRAF_MIN_H

#include <QWidget>

namespace Ui {
class Graf_min;
}

class Graf_min : public QWidget
{
    Q_OBJECT

public:
    explicit Graf_min(QWidget *parent = nullptr);
    ~Graf_min();

private slots:
    void on_pushButton_exit_graf_min_clicked();

    void on_pushButton_result_graf_min_clicked();

private:
    Ui::Graf_min *ui;
};

#endif // GRAF_MIN_H
