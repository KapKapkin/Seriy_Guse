#ifndef REQUESTHANDLER_H
#define REQUESTHANDLER_H

#include <QObject>
#include <QTcpSocket>
#include "authservice.h"

class RequestHandler : public QObject
{
    Q_OBJECT
public:
    explicit RequestHandler(QObject *parent = nullptr);

public slots:
    void handleRequest(QTcpSocket *socket, const QString &request);

private:
    AuthService authService;
    //
};

#endif // REQUESTHANDLER_H
