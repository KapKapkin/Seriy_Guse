QT       += core gui
QT += network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    authorization.cpp \
    funcforclient.cpp \
    graf_min.cpp \
    halving_method.cpp \
    main.cpp \
    mainwindow.cpp \
    result_client.cpp \
    singleton_client.cpp

HEADERS += \
    authorization.h \
    funcforclient.h \
    graf_min.h \
    halving_method.h \
    mainwindow.h \
    result_client.h \
    singleton_client.h

FORMS += \
    authorization.ui \
    graf_min.ui \
    halving_method.ui \
    mainwindow.ui \
    result_client.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target