#ifndef TASK3_H
#define TASK3_H

#include "task4.h"
#include <QString>
#include <QRandomGenerator>
#include <QVariant>

QString vigenere(const QString& Key, const QString& text);
QVariantMap getVigenere();

#endif // TASK3_H
