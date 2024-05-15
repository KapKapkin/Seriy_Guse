#include "requesthandler.h"

RequestHandler::RequestHandler(QObject *parent) : QObject(parent) {}

void RequestHandler::handleRequest(QTcpSocket *socket, const QString &request)
{
    QStringList parts = request.split('&');

    if (parts.size() < 2)
    {
        // Обработка ошибки "Invalid request format"
        return;
    }

    QString command = parts[0];

    if (command == "auth")
    {
        // Обработка запроса авторизации (auth&login&password)
        if (parts.size() == 3)
        {
            QString login = parts[1];
            QString password = parts[2];

            if (authService.authenticate(login, password))
                socket->write("auth&+&" + login.toUtf8());
            else
                socket->write("auth&-");
        }
    }
    else if (command == "reg")
    {
        // Обработка запроса регистрации (reg&login&password&email)
        if (parts.size() == 4)
        {
            QString login = parts[1];
            QString password = parts[2];
            QString email = parts[3];

            if (authService.registerUser(login, password, email))
                socket->write("reg+&" + login.toUtf8());
            else
                socket->write("reg-");
        }
    }
    else if (command == "stat")
    {
        // Обработка запроса статистики (stat&login)
        if (parts.size() == 2)
        {
            QString login = parts[1];
            QString stats = authService.getUserStats(login);
            socket->write("stat&" + stats.toUtf8());
        }
    }
    else if (command == "check")
    {
        // Обработка запроса проверки (check&task_number&variant&answer)
        if (parts.size() == 4)
        {
            QString taskNumber = parts[1];
            QString variant = parts[2];
            QString answer = parts[3];

            // authService.checkTask() для доп задач

        }
    }
}
