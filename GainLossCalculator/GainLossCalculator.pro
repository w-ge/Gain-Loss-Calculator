#-------------------------------------------------
#
# Project created by QtCreator 2019-07-20T15:39:45
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GainLossCalculator
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        EditScreen/editscreen.cpp \
    MergedScreen/mergedscreen.cpp \
    SecurityMenu/addsecuritydialog.cpp \
    SecurityMenu/securitymenu.cpp \
    SecurityMenu/securitynode.cpp \
        TransactionNode/transactionnode.cpp \
        TransactionScreen/transactionscreen.cpp \
        main.cpp \
        stackedwidget.cpp \

HEADERS += \
        EditScreen/editscreen.h \
    MergedScreen/mergedscreen.h \
    SecurityMenu/addsecuritydialog.h \
    SecurityMenu/securitymenu.h \
    SecurityMenu/securitynode.h \
        TransactionNode/transactionnode.h \
        TransactionScreen/transactionscreen.h \
        stackedwidget.h \


FORMS += \
        EditScreen/editscreen.ui \
    MergedScreen/mergedscreen.ui \
    SecurityMenu/addsecuritydialog.ui \
    SecurityMenu/securitymenu.ui \
    SecurityMenu/securitynode.ui \
        TransactionNode/transactionnode.ui \
        TransactionScreen/transactionscreen.ui \
        stackedwidget.ui \

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
