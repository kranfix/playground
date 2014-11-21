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
    ../../rs232/rs232.cc \
    ../../dsp/maf/maf.cc

HEADERS  += mpucalib.h \
    ../../rs232/rs232.h \
    ../../dsp/maf/maf.h

FORMS    += mpucalib.ui
