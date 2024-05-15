#include "funcforclient.h"

bool is_auth(QString log, QString pass) {
    QByteArray request;
    request = "auth&" + log.toUtf8() + "&" + pass.toUtf8();
    QStringList parts = Singleton_client::getInstance()->doRequest(request).split('&');
    if (parts[1] == "+") {
        return true;
    }
    else {
        return false;
    }
}
bool is_reg(QString email, QString log, QString pass) {
    QByteArray request;
    request = "reg&" + log.toUtf8() + "&" + pass.toUtf8() + "&" + email.toUtf8();
    QStringList parts = Singleton_client::getInstance()->doRequest(request).split('&');
    if (parts[1] == "+") {
        return true;
    }
    else {
        return false;
    }
}
bool result_graf_min() {

}
bool result_halving_method(QString a, QString b, QString eps, QString f) {

}
