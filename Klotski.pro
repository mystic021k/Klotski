QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    klotski.cpp \
    qblockview.cpp \
    qgamehelpdlg.cpp \
    klotskiBlock.cpp \
    klotskiBoard.cpp \
    klotskiEngine.cpp \
    stdafx.cpp

HEADERS += \
    klotski.h \
    qblockview.h \
    qgamehelpdlg.h \
    klotskiBlock.h \
    klotskiBoard.h \
    klotskiEngine.h \
    gameboards.h \
    stdafx.h

FORMS += \
    klotski.ui \
    gamehelp.ui

RESOURCES += \
    klotski.qrc

TRANSLATIONS += \
    Klotski_zh_CN.ts

CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
