#ifndef COVD_H
#define COVD_H

#include <QWidget>
#include "global.h"
#include "ui_designerOvd.h"
#include "ilabel.h"

class COvd : public QWidget, private Ui::designerOvd
{
    Q_OBJECT
public:
    explicit COvd(QWidget *parent = 0);
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

#endif // COVD_H
