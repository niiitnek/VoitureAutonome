QT = core

CONFIG += c++17 cmdline

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        main.cpp \
        mastrategie.cpp \
        materiel.cpp \
        materielsimule.cpp \
        comportement.cpp \
        stop.cpp \
        strategie.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    mastrategie.h \
    materiel.h \
    materielsimule.h \
    comportement.h \
    stop.h \
    strategie.h
