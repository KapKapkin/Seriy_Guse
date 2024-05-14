#ifndef DATABASESERVICE_H
#define DATABASESERVICE_H

#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>

class Database;

class DatabaseDestroyer
{
private:
    Database * p_instance;
public:
    ~DatabaseDestroyer();
    void initialize(Database * p){p_instance = p;};};

class Database : public QObject
{
    Q_OBJECT

private:
    QSqlDatabase db;
    static Database * p_instance;
    static DatabaseDestroyer destroyer;

    void connect();
    void disconnect();

protected:
    explicit Database(QObject *parent = nullptr);
    Database(const Database& ) = delete;
    Database& operator = (Database &) = delete;
    ~Database();
    friend class DatabaseDestroyer;

public:
    static Database* getInstance();
    QSqlQuery query(QString queryStr);
};

#endif // DATABASESERVICE_H
