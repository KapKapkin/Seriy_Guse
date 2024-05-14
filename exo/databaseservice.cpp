#include "databaseservice.h"

Database::Database(QObject *parent) : QObject(parent) // вызывается в getInstance, если еще нет подключения
{
    this->connect(); //подключение к бд
}

Database * Database::p_instance = nullptr;
DatabaseDestroyer Database::destroyer;

DatabaseDestroyer::~DatabaseDestroyer()
{
    delete p_instance;
}

Database::~Database()
{
    if (db.isOpen())
        disconnect();
    if (p_instance)
        delete p_instance;
}

Database* Database::getInstance()
{
    if (!p_instance)
    {
        p_instance = new Database();
        destroyer.initialize(p_instance);
    }
    return p_instance;
}


void Database::connect() {
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./Test.db"); // Test.db в каталоге сборки (путь к нему можно настроить во вкладке проекты)

    if(db.open())
    {
        qDebug("open");
    }
    else
    {
        qDebug("no open");
    }
}

QSqlQuery Database::query(QString queryStr) //отправка sql запросов
{
    QSqlQuery myquery;
    if(myquery.prepare(queryStr))
    {
        myquery.exec();
    }
    return myquery;
}

void Database::disconnect()
{
    db.close();
}
