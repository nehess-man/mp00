QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.

win32: LIBS += -L$$PWD/'../../../Sequence1/ActiviteCIEL2/Chiffrement Act05/CryptoCiel/x64/Release/' -lcryptoCielTest

INCLUDEPATH += $$PWD/'../../../Sequence1/ActiviteCIEL2/Chiffrement Act05/CryptoCiel'
DEPENDPATH += $$PWD/'../../../Séquence 1/ActiviteCIEL2/Chiffrement Act05/CryptoCiel'

win32:!win32-g++: PRE_TARGETDEPS += $$PWD/'../../../Sequence1/ActiviteCIEL2/Chiffrement Act05/CryptoCiel/x64/Release/cryptoCielTest.lib'
else:win32-g++: PRE_TARGETDEPS += $$PWD/'../../../Sequence1/ActiviteCIEL2/Chiffrement Act05/CryptoCiel/x64/Release/libcryptoCielTest.a'
