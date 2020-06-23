QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addbook.cpp \
    admin.cpp \
    adminoptions.cpp \
    books.cpp \
    cancelmembership.cpp \
    main.cpp \
    group34.cpp \
    registernewacc.cpp \
    reserve.cpp \
    reservebookadmin.cpp \
    return1.cpp \
    returnbook.cpp \
    student.cpp \
    student1.cpp \
    studentinfo.cpp

HEADERS += \
    addbook.h \
    admin.h \
    adminoptions.h \
    books.h \
    cancelmembership.h \
    group34.h \
    registernewacc.h \
    reserve.h \
    reservebookadmin.h \
    return1.h \
    returnbook.h \
    student.h \
    student1.h \
    studentinfo.h

FORMS += \
    addbook.ui \
    admin.ui \
    adminoptions.ui \
    books.ui \
    cancelmembership.ui \
    group34.ui \
    registernewacc.ui \
    reserve.ui \
    reservebookadmin.ui \
    return1.ui \
    returnbook.ui \
    student.ui \
    student1.ui \
    studentinfo.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resourcessw.qrc
