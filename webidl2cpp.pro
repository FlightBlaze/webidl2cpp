QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = NewtooWebInterfaceMapper
TEMPLATE = app
DEFINES += QT_DEPRECATED_WARNINGS

# Project created by 2018-10-16T21:31:59

FORMS += \
    source/application/window.ui \
    source/application/output.ui \
    source/application/options.ui \
    source/application/finish.ui \
    source/application/about.ui

HEADERS += \
    source/application/window.h \
    source/application/output.h \
    source/application/options.h \
    source/application/finish.h \
    source/application/about.h \
    source/shared/settings.h \
    source/application/log.h \
    source/core/definition.h \
    source/core/idl.h \
    source/core/definitionlist.h \
    source/core/interface.h \
    source/core/extattr.h \
    source/core/extattrmap.h \
    source/core/function.h \
    source/core/interfaceunit.h \
    source/core/argument.h \
    source/core/dictionary.h \
    source/core/dictionaryunit.h \
    source/core/implements.h \
    source/core/typedefine.h \
    source/core/enumeration.h \
    source/core/callback.h

SOURCES += \
    source/application/window.cpp \
    source/application/output.cpp \
    source/application/options.cpp \
    source/application/finish.cpp \
    source/application/about.cpp \
    source/main.cpp \
    source/shared/settings.cpp \
    source/application/log.cpp \
    source/core/definition.cpp \
    source/core/idl.cpp \
    source/core/definitionlist.cpp \
    source/core/interface.cpp \
    source/core/extattr.cpp \
    source/core/extattrmap.cpp \
    source/core/function.cpp \
    source/core/interfaceunit.cpp \
    source/core/argument.cpp \
    source/core/dictionary.cpp \
    source/core/dictionaryunit.cpp \
    source/core/implements.cpp \
    source/core/typedefine.cpp \
    source/core/enumeration.cpp \
    source/core/callback.cpp

RESOURCES += \
    resources.qrc

DISTFILES += \
    resources/icon.png \
    resources/app_icon.ico \
    source/core/todo.md \
    README.md \
    global_resources.rc

win32 {
        RC_FILE += global_resources.rc
        OTHER_FILES += global_resources.rc
}
