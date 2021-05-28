QT       += core gui svg

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

CONFIG(debug, debug|release) {
    DESTDIR = $$OUT_PWD/../SvgDebug
} else {
    DESTDIR = $$OUT_PWD/../SvgRelease
}

MOC_DIR = ../common/build/moc
RCC_DIR = ../common/build/rcc
UI_DIR =  ../common/build/ui

QMAKE_CXXFLAGS_WARN_OFF -= -Wunused-parameter

#CONFIG(debug, debug|release) {
#    QMAKE_POST_LINK += windeployqt.exe $$OUT_PWD/../SvgDebug
#} else {
#    QMAKE_POST_LINK += windeployqt.exe $$OUT_PWD/../SvgRelease
#}

#win32:OBJECTS_DIR = ../common/build/o/win32
#macx:OBJECTS_DIR = ../common/build/o/macx
#unix:OBJECTS_DIR = ../common/build/o/unix

SOURCES += \
    src/controlitem.cpp \
    src/graphicspainter.cpp \
    src/jsonhandler.cpp \
    src/main.cpp \
    src/mainwindow.cpp \
    src/movecommand.cpp \
    src/roundedpolygon.cpp \
    src/switchbutton.cpp

HEADERS += \
    include/LetterMacros.hpp \
    include/controlitem.hpp \
    include/graphicspainter.hpp \
    include/jsonhandler.hpp \
    include/mainwindow.hpp \
    include/movecommand.hpp \
    include/roundedpolygon.hpp \
    include/switchbutton.hpp

FORMS += \
    ui/mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
