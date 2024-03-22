#include "requesthandler.h"

RequestHandler::RequestHandler(QObject *parent) : QObject(parent) {}

void RequestHandler::handleRequest(QTcpSocket *socket, const QString &request)
{
    authService.processRequest(socket, request);
    //
}
