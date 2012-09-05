#-------------------------------------------------
#
# Project created by QtCreator 2012-08-05T00:38:30
#
#-------------------------------------------------

QT       += core gui

TARGET = logcommander
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    mdichild.cpp \
    TextProcessor/textprocessor.cpp \
    menu/custommenu.cpp

HEADERS  += widget.h \
    mdichild.h \
    TextProcessor/textprocessor.h \
    menu/custommenu.h

FORMS    += widget.ui
