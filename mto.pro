QT    +=   core
QT    +=   sql
QT    +=   gui

SOURCES += \
    main.cpp \
    cmysqlconnect.cpp \
    CMtoCore.cpp \
    ilabel.cpp \
    cdivisions.cpp \
    cnomenclature.cpp \
    covd.cpp \
    cstatusdevice.cpp

HEADERS += \
    global.h \
    cmysqlconnect.h \
    CMtoCore.h \
    ilabel.h \
    cdivisions.h \
    cnomenclature.h \
    covd.h \
    cstatusdevice.h


FORMS += \
    designerDivisions.ui \
    designerCNomenclature.ui \
    designerOvd.ui \
    designerStatusDevice.ui
