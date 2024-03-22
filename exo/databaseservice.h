#ifndef DATABASESERVICE_H
#define DATABASESERVICE_H

#include <QObject>
#include <QString>

class DatabaseService : public QObject
{
    Q_OBJECT
public:
    explicit DatabaseService(QObject *parent = nullptr);

    bool connectToDatabase();
    //

private:
         //
};

#endif // DATABASESERVICE_H
