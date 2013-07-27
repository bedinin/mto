QT    +=   core
QT    +=   sql
QT    +=   gui

SOURCES += \
    main.cpp \
    cmysqlconnect.cpp \
    CMtoCore.cpp \
    ilabel.cpp \
    cdivisions.cpp

HEADERS += \
    global.h \
    cmysqlconnect.h \
    CMtoCore.h \
    ilabel.h \
    cdivisions.h


FORMS += \
    designerDivisions.ui
