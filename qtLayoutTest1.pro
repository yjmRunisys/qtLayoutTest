QT += core widgets
#QT -= gui

CONFIG += c++11

TARGET = qtLayoutTest1
#show win32 console dialog
#CONFIG += console
#CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    finddialog.cpp \
    userlayout.cpp \
    qqlogint.cpp \
    yjmlayout.cpp

HEADERS += \
    finddialog.h \
    userlayout.h \
    qqlogint.h \
    yjmlayout.h

RESOURCES += \
    qtres.qrc

FORMS += \
    yjmlayout.ui
