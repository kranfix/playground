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
        mpucalib.cpp

HEADERS  += mpucalib.h

FORMS    += mpucalib.ui

INCLUDEPATH += $$(BUSRC)

LIBS += -L$$(BUPKG)/linux_amd64/github.com/kranfix -lrs232cc \
        -L$$(BUPKG)/linux_amd64/github.com/kranfix/dsp -lmafcc
