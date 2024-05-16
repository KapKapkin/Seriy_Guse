#ifndef SERVER_FUNCTION_H
#define SERVER_FUNCTION_H

#include <QObject>
#include <QTcpSocket>
#include <QStringList>
#include <QDebug>
#include <QCoreApplication>
#include <QJsonDocument>
#include <QJsonValue>
#include <QJsonArray>
#include <QJsonObject>

QByteArray parse(QString request);
QByteArray authenticate(const QString &login, const QString &pass);
QByteArray registerUser(const QString &, const QString &, const QString &);
QString getUserStats(const QString &);
bool checkTask(const QString &, const QString &, const QString &, const QString &);



#endif // SERVER_FUNCTION_H
