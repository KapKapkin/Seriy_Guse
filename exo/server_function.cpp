#include "server_function.h"

QByteArray parse(QString request) {
    QByteArray response;
    QStringList parts = request.split('&');
    if (parts.size() == 3 && parts[0] == "auth")
    {
        // Обработка запроса авторизации (auth&login&password)
        response = authenticate(parts[1], parts[2]);
    }
    else if (parts[0] == "reg" && parts.size() == 4){
        // Обработка запроса регистрации (reg&login&password&email)
        response = registerUser(parts[1], parts[2], parts[3]);
    }
    else if (parts[0] == "stat" && parts.size() == 2)
    {
        // Обработка запроса статистики (stat&login)
        response = getUserStats(parts[1]);
    }
    else if (parts[0] == "check" && parts.size() == 5)
    {
        // Обработка запроса проверки (check&task_number&variant&answer&login)
        response = checkTask(parts[1], parts[2], parts[3], parts[4]);
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
    // добавление в базу данных
    if (login == "user" && pass == "123" && email == "t@gmail.com") {
        response = "reg&+&" + login.toUtf8();
    }
    else {
        response = "reg&-";
    }
    return response;
}

QByteArray getUserStats(const QString &login)
{
    QByteArray response;
    // взятие из базы данных результатов пользователя
    // response = "stat&" + результаты через & ;
    return response;
}

QByteArray checkTask(const QString &task_number, const QString &variant, const QString &answer_client, const QString &login)
{
    QByteArray response;
    // ответ пользователя правильный или нет?
    bool check = true;
    if (task_number == "1") {
        // наименьший путь в графе
    }
    else if (task_number == "2") {
        // метод деления пополам
    }
    else if (task_number == "3") {
        // шифр Виженера
    }
    else if (task_number == "4") {
        // шифр sha-512
    }
    else if (task_number == "5") {
        // метод хорд
    }
    else {

    }
    if (check) {
        response = "check&+";
    }
    else {
        response = "check&-";
    }
    return response;
}

