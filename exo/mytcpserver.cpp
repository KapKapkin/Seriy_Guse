#include "mytcpserver.h"
// #include "authservice.cpp"

MyTcpServer::~MyTcpServer()
{
    mTcpServer->close();
    server_status = 0;
}

MyTcpServer::MyTcpServer(QObject *parent) : QObject(parent)
{
    mTcpServer = new QTcpServer(this);

    connect(mTcpServer, &QTcpServer::newConnection,
            this, &MyTcpServer::slotNewConnection);

    if (!mTcpServer->listen(QHostAddress::Any, 33333))
    {
        qDebug() << "Server is not started";
    }
    else
    {
        server_status = 1;
        qDebug() << "Server is started";
    }
}

void MyTcpServer::slotNewConnection()
{
    if (server_status == 1)
    {
        QTcpSocket *curr_mTcpSocket = mTcpServer->nextPendingConnection();
        if (curr_mTcpSocket)
        {
            qDebug() << "New connection established:" << curr_mTcpSocket->socketDescriptor();
            curr_mTcpSocket->write("Hello, World!!! I am echo server!\r\n");
            connect(curr_mTcpSocket, &QTcpSocket::readyRead,
                    this, &MyTcpServer::slotServerRead);
            connect(curr_mTcpSocket, &QTcpSocket::disconnected,
                    this, &MyTcpServer::slotClientDisconnected);
            mTcpSocket[curr_mTcpSocket->socketDescriptor()] = curr_mTcpSocket;
        }
    }
}

void MyTcpServer::slotServerRead()
{
    QTcpSocket *curr_mTcpSocket = qobject_cast<QTcpSocket*>(sender());
    if (curr_mTcpSocket)
    {
        QString request = "";
        while (curr_mTcpSocket->bytesAvailable() > 0)
        {
            request.append(curr_mTcpSocket->readAll());
        }

        QByteArray response;

        if (request.startsWith("auth"))
        {
            // Обработка запроса авторизации (auth&login&password)
            QStringList parts = request.split('&');
            if (parts.size() == 3)
            {
                QString login = parts[1];
                // Проверка логина и пароля
                bool isAuthenticated = true; // Пример успешной аутентификации
                if (isAuthenticated)
                    response = "auth+&" + login.toUtf8();
                else
                    response = "auth-";
            }
        }
        else if (request.startsWith("reg"))
        {
            // Обработка запроса регистрации (reg&login&password&email)
            QStringList parts = request.split('&');
            if (parts.size() == 4)
            {
                QString login = parts[1];
                // Регистрация
                bool isRegistered = true; // Пример успешной регистрации
                if (isRegistered)
                    response = "reg+&" + login.toUtf8();
                else
                    response = "reg-";
            }
        }
        else if (request.startsWith("stat"))
        {
            // Обработка запроса статистики (stat&login)
            QStringList parts = request.split('&');
            if (parts.size() == 2)
            {
                QString login = parts[1];
                // Получение статистики
                QString stats = "3$6&21"; // например
                response = "stat&" + stats.toUtf8();
            }
        }
        else if (request.startsWith("check"))
        {
            // Обработка запроса проверки (check&task_number&variant&answer)
            QStringList parts = request.split('&');
            if (parts.size() == 4)
            {
                // Проверка решения задачи + генерация ответа
                response = "check+";
            }
        }

        // Отправляем ответ обратно клиенту
        curr_mTcpSocket->write(response);

        /*QByteArray response = curr_mTcpSocket->readAll();
        qDebug() << request << "\n";
        curr_mTcpSocket->write(response);*/

        /*QString res = "";
        while (curr_mTcpSocket->bytesAvailable() > 0)
        {
            QByteArray array = curr_mTcpSocket->readAll();
            qDebug() << array << "\n";
            if (array == "\x01")
            {
                curr_mTcpSocket->write(res.toUtf8());
                res = "";
            }
            else
            {
                res.append(array);
            }
        }
        curr_mTcpSocket->write(res.toUtf8());*/
    }

}

void MyTcpServer::slotClientDisconnected()
{
    QTcpSocket *disconnectedSocket = qobject_cast<QTcpSocket*>(sender());
    if (disconnectedSocket)
    {
        int socketDescriptor = disconnectedSocket->socketDescriptor();
        qDebug() << "Client disconnected:" << socketDescriptor;
        mTcpSocket.remove(socketDescriptor);
        disconnectedSocket->deleteLater();
    }
}
