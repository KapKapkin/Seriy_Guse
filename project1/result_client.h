#ifndef RESULT_CLIENT_H
#define RESULT_CLIENT_H

#include <QWidget>

namespace Ui {
class Result_client;
}

class Result_client : public QWidget
{
    Q_OBJECT

public:
    explicit Result_client(QWidget *parent = nullptr);
    ~Result_client();

private slots:
    void on_pushButton_exit_result_clicked();

private:
    Ui::Result_client *ui;
signals:
    void is_result_main();
};

#endif // RESULT_CLIENT_H
