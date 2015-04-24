#-------------------------------------------------
#
# Project created by QtCreator 2015-04-23T22:09:53
#
#-------------------------------------------------

QT       -= gui

CONFIG += plugin
TARGET = plugin
TEMPLATE = lib

DEFINES += PLUGIN_LIBRARY

SOURCES += plugin.cpp

HEADERS += plugin.h

symbian {
    MMP_RULES += EXPORTUNFROZEN
    TARGET.UID3 = 0xE5DFFEEA
    TARGET.CAPABILITY = 
    TARGET.EPOCALLOWDLLDATA = 1
    addFiles.sources = plugin.dll
    addFiles.path = !:/sys/bin
    DEPLOYMENT += addFiles
}

unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}
