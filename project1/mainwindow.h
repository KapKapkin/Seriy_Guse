#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "halving_method.h"
#include "graf_min.h"
#include "result_client.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_exit_clicked();


    void on_pushButton_task1_clicked();

    void on_pushButton_task2_clicked();

    void on_pushButton_result_clicked();

private:
    Ui::MainWindow *ui;
    Graf_min *ui_task1;
    Halving_method *ui_task2;
    Result_client *ui_result;
signals:
    void is_main_task1();
    void is_main_task2();
    void is_main_result();

};
#endif // MAINWINDOW_H
