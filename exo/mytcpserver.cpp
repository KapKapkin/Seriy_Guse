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
        QString res = "";
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
        curr_mTcpSocket->write(res.toUtf8());
    }

    // Обработка запросов

    /*AuthService authService;
    authService.processRequest(curr_mTcpSocket, res);*/
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
