QT += core gui widgets
TARGET = main console
TEMPLATE = app
DEFINES += QT_DEPRECATED_WARNINGS
SOURCES += main.cpp \
    mid-button.cpp \
    mid-qt5-button.cpp \
    mid-qt5-window.cpp

#CONFIG += c++11 console
#CONFIG -= app_bundle

#HEADERS += 

HEADERS += \
    mid-button.h \
    mid-qt5-button.h \
    mid-application.h \
    mid-qt5-app.h \
    mid-qt5-window.h \
    mid-window.h \
    mid-qt5-msg-dialog.h \
    mid-msg-dialog.h \
    window.h \
    button.h \
    mid-connect.h \
    mid-qt5-connect.h \
    eventtable.h \
    mid-handler.h \
    mid-qt5-handler.h

