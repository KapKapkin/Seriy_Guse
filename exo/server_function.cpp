#include "server_function.h"

QByteArray parse(QString request) {
    QByteArray response;
    QStringList parts = request.split('&');
    if (parts.size() == 3 && part[0] == "auth")
    {
        // Обработка запроса авторизации (auth&login&password)
        response = authenticate(parts[1], parts[2]);
    }
    else if (part[0] == "reg" && parts.size() == 4){
        // Обработка запроса регистрации (reg&login&password&email)
        response = registerUser(parts[1], parts[2], parts[3]);
    }
    else if (request.startsWith("stat"))
    {
        // Обработка запроса статистики (stat&login)
        QStringList parts = request.split('&');
        if (parts.size() == 2)
        {
            QString login = parts[1];
            // Получение статистики
            QString stats = "3$6&21"; // например
            response = "stat&" + stats.toUtf8();
        }
    }
    else if (request.startsWith("check"))
    {
        // Обработка запроса проверки (check&task_number&variant&answer)
        QStringList parts = request.split('&');
        if (parts.size() == 4)
        {
            response = "check+";
        }
    }
    return response;
}
QByteArray authenticate(const QString &login, const QString &pass)
{
    QByteArray response;
    if (login == "user" && pass == "123") {
        response = "auth&+&" + login.toUtf8();
    }
    else {
        response = "auth&-";
    }
    return response;

}

QByteArray registerUser(const QString &login, const QString &pass, const QString &email)
{
    QByteArray response;
    if (login == "user" && pass == "123" && email == "t@gmail.com") {
        response = "reg&+&" + login.toUtf8();
    }
    else {
        response = "reg&-";
    }
    return response;
}

QString getUserStats(const QString &)
{
    // получение статистики
    return "";
}

bool checkTask(const QString &, const QString &, const QString &, const QString &)
{
    // проверка введенных данных
    return true;
}

