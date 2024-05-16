#ifndef SINGLETON_CLIENR_H
#define SINGLETON_CLIENR_H

#include <QObject>

class Singleton_clienr : public QObject
{
    Q_OBJECT
public:
    explicit Singleton_clienr(QObject *parent = nullptr);

signals:
};

#endif // SINGLETON_CLIENR_H
