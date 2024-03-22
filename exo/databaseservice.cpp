#include "databaseservice.h"

DatabaseService::DatabaseService(QObject *parent) : QObject(parent)
{}

bool DatabaseService::connectToDatabase()
{
    // подключение к бд
    return true;
}
