QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    tcpclient.cpp \
    widgetbatterie.cpp \
    widgetlidar.cpp \
    widgetvoiture.cpp

HEADERS += \
    mainwindow.h \
    tcpclient.h \
    widgetbatterie.h \
    widgetlidar.h \
    widgetvoiture.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

QT += core network
QT += network