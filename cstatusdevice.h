#ifndef CSTATUSDEVICE_H
#define CSTATUSDEVICE_H

#include <QWidget>
#include <QKeyEvent>
#include "global.h"
#include "ui_designerStatusDevice.h"
#include "ilabel.h"

class CStatusDevice : public QWidget,private Ui::designerStatusDevice
{
    Q_OBJECT
public:
    explicit CStatusDevice(QWidget *parent = 0);
private:
    void loadAll();
    void clearTable();
    void getDbAll();
    void add();
    void save();
    void del();
signals:

public slots:
private slots:
    void slotSelect();
    void slotAdd();
    void slotSave();
    void slotDelete();

};

#endif // CSTATUSDEVICE_H
