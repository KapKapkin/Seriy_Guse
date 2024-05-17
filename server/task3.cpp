#include "task3.h"
#include <iostream>

QString vigenere(const QString& Key, const QString& text) {
    QString code;
    QString key = Key;
    int keyIndex = 0;

    for (int i = 0; i < text.length(); i++) {
        QChar currentChar = text[i];
        QChar keyChar = key[keyIndex % key.length()];
        if (currentChar.isLetter()) {
            QChar base = currentChar.isLower() ? 'a' : 'A';
            int t = currentChar.toLatin1() - base.toLatin1();
            int k = keyChar.toLower().toLatin1() - 'a';
            int sum = (t + k) % 26;
            code += QChar(base.toLatin1() + sum);
            keyIndex++;
        } else if (currentChar.isNumber() || currentChar.isPunct() || currentChar == ' ') {
            code += currentChar;
        }
    }
    return code;
}
QVariantMap getVigenere() {
    QVariantMap task;
    QString key = genRandomString(4);
    QString text = genRandomString(10);
    QString code = vigenere( key, text);
    task["text"] = text;
    task["key"] = key;
    task["answer"] = code;
    std::cout << "text: " << text.toStdString() << ", key: " << key.toStdString() << ", code: " << code.toStdString() <<std::endl;
    return task;
}
