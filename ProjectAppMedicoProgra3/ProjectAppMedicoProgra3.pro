QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    adminexpedientes.cpp \
    adminsalas.cpp \
    classcreateuser.cpp \
    main.cpp \
    createuser.cpp \
    recetas.cpp

HEADERS += \
    adminexpedientes.h \
    adminsalas.h \
    classcreateuser.h \
    createuser.h \
    recetas.h

FORMS += \
    createuser.ui

TRANSLATIONS += \
    ProjectAppMedicoProgra3_es_HN.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
