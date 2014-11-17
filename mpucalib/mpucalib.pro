#-------------------------------------------------
#
# Project created by QtCreator 2014-11-16T13:50:53
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = mpucalib
TEMPLATE = app


SOURCES += main.cpp\
        mpucalib.cpp \
    maf.cpp \
    ../../rs232/rs232.cpp

HEADERS  += mpucalib.h \
    maf.h \
    ../../rs232/rs232.h

FORMS    += mpucalib.ui
