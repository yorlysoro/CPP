TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    nodolista.cpp \
    lista.cpp

HEADERS += \
    nodolista.h \
    lista.h

QMAKE_CXXFLAGS += -std=c++17
QMAKE_CXXFLAGS_DEBUG += -g
