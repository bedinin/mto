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
    cstatusdevice.cpp \
    cnecessaryedit.cpp \
    cpreciousmetals.cpp \
    camortizationgroup.cpp

HEADERS += \
    global.h \
    cmysqlconnect.h \
    CMtoCore.h \
    ilabel.h \
    cdivisions.h \
    cnomenclature.h \
    covd.h \
    cstatusdevice.h \
    cnecessaryedit.h \
    cpreciousmetals.h \
    camortizationgroup.h


FORMS += \
    designerDivisions.ui \
    designerCNomenclature.ui \
    designerOvd.ui \
    designerStatusDevice.ui \
    designerNecessaryEdit.ui \
    designerPreciousMetals.ui \
    designerAmortizationGroup.ui






