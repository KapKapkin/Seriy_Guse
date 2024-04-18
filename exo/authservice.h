#ifndef AUTHSERVICE_H
#define AUTHSERVICE_H

#include <QObject>
#include <QTcpSocket>
#include <QStringList>

class AuthService : public QObject
{
    Q_OBJECT
public:
    explicit AuthService(QObject *parent = nullptr);
    bool authenticate(const QString &login, const QString &password);
    bool registerUser(const QString &login, const QString &password, const QString &email);
    QString getUserStats(const QString &login);
    bool checkTask(const QString &login, const QString &taskNumber, const QString &variant, const QString &answer);
public slots:
    void processRequest(QTcpSocket *socket, const QString &request);

private:
    /*bool authenticate(const QString &login, const QString &password);
    bool registerUser(const QString &login, const QString &password, const QString &email);
    QString getUserStats(const QString &login);
    bool checkTask(const QString &login, const QString &taskNumber, const QString &variant, const QString &answer);*/
};

#endif // AUTHSERVICE_H
