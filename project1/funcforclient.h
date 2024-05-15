#ifndef FUNCFORCLIENT_H
#define FUNCFORCLIENT_H
#include "singleton_client.h"

#include <QObject>
bool is_auth(QString log, QString pass);
bool is_reg(QString email, QString log, QString pass);
bool result_graf_min();
bool result_halving_method(QString, QString, QString, QString);

#endif // FUNCFORCLIENT_H
