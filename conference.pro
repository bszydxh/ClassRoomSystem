QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
QT+=sql

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    source/admincfwindow.cpp \
    source/adminrswindow.cpp \
    source/adminwindow.cpp \
    source/mainwindow.cpp \
    source/mycfsql.cpp \
    source/reservewindow.cpp \
    source/roomwindow.cpp \
    source/signwindow.cpp \
    source/usercfwindow.cpp \
    source/userrswindow.cpp \
    source/userwindow.cpp

INCLUDEPATH += ./head

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    README.md \
    conference.pro.user \
    conference.pro.user.7fcb233 \
    imgs/conference.png

HEADERS += \
    head/admincfwindow.h \
    head/adminrswindow.h \
    head/adminwindow.h \
    head/mainwindow.h \
    head/mycfsql.h \
    head/reservewindow.h \
    head/roomwindow.h \
    head/signwindow.h \
    head/usercfwindow.h \
    head/userrswindow.h \
    head/userwindow.h
