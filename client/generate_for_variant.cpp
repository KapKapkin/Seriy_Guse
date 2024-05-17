#include "generate_for_variant.h"
#include "singleton_client.h"
#include <iostream>

QString generate_task1() {
    // наименьший путь в графе
    QString result = "111";
    return result;
}
QString generate_task2() {
    // метод деления пополам
    QString result = "111";
    return result;
}
QString generate_task3() {
    QByteArray request;
    request = "task&3";
    QString result = Singleton_client::getInstance()->doRequest(request);
    return result;
}
QString generate_task4() {
    // шифр sha-512
    QString result = "111";
    return result;
}
QString generate_task5() {
    // метод хорд
    QString result = "111";
    return result;
}

