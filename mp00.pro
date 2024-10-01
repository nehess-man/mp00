QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG += c++17

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h \
    cryptoCielTest.h

FORMS += \
    mainwindow.ui

# Include library
win32: LIBS += -L$$PWD/'../../../Sequence1/ActiviteCIEL2/Chiffrement Act05/CryptoCiel/x64/Release/' -lcryptoCielTest
INCLUDEPATH += $$PWD/'../../../Sequence1/ActiviteCIEL2/Chiffrement Act05/CryptoCiel'
DEPENDPATH += $$PWD/'../../../Sequence1/ActiviteCIEL2/Chiffrement Act05/CryptoCiel'

win32:!win32-g++: PRE_TARGETDEPS += $$PWD/'../../../Sequence1/ActiviteCIEL2/Chiffrement Act05/CryptoCiel/x64/Release/cryptoCielTest.lib'
else:win32-g++: PRE_TARGETDEPS += $$PWD/'../../../Sequence1/ActiviteCIEL2/Chiffrement Act05/CryptoCiel/x64/Release/libcryptoCielTest.a'

win32: LIBS += -L$$PWD/'../../../Sequence1/ActiviteCIEL2/Chiffrement Act05/cryptopp/x64/Output/Release/' -lcryptlib

INCLUDEPATH += $$PWD/'../../../Sequence1/ActiviteCIEL2/Chiffrement Act05/cryptopp'
DEPENDPATH += $$PWD/'../../../Sequence1/ActiviteCIEL2/Chiffrement Act05/cryptopp'

win32:!win32-g++: PRE_TARGETDEPS += $$PWD/'../../../Sequence1/ActiviteCIEL2/Chiffrement Act05/cryptopp/x64/Output/Release/cryptlib.lib'
else:win32-g++: PRE_TARGETDEPS += $$PWD/'../../../Sequence1/ActiviteCIEL2/Chiffrement Act05/cryptopp/x64/Output/Release/libcryptlib.a'
