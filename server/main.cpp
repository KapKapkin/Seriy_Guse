#include <QCoreApplication>
#include "mytcpserver.h"
#include "databaseservice.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Database * database = Database::getInstance(); //получение объекта класса database

    /*database->query("CREATE TABLE User("
                    "login VARCHAR(20) NOT NULL,"
                    "password VARCHAR(20) NOT NULL)");*/
    //пример запроса на создание таблицы

    MyTcpServer server;
    return a.exec();
}
