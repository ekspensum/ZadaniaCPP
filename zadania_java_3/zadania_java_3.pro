QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += main.cpp \
    lzesp.cpp \
    lzesp2.cpp \
    vehicle.cpp \
    car.cpp \
    suv.cpp \
    animal.cpp \
    fish.cpp \
    mammal.cpp \
    goldfish.cpp \
    human.cpp \
    zadanie.cpp \
    zadanie1.cpp \
    zadanie2.cpp \
    procesor.cpp \
    procesor_lista.cpp

HEADERS += \
    lzesp.h \
    lzesp2.h \
    vehicle.h \
    car.h \
    suv.h \
    animal.h \
    fish.h \
    mammal.h \
    goldfish.h \
    human.h \
    zadanie.h \
    zadanie1.h \
    zadanie2.h \
    procesor.h \
    procesor_lista.h
