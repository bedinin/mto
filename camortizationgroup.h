#ifndef CAMORTIZATIONGROUP_H
#define CAMORTIZATIONGROUP_H

#include <QWidget>
#include "global.h"
#include "ui_designerAmortizationGroup.h"
#include "ilabel.h"

class CAmortizationGroup : public QWidget,private Ui::designerAmortizationGroup
{
    Q_OBJECT
public:
    explicit CAmortizationGroup(QWidget *parent = 0);
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

#endif // CAMORTIZATIONGROUP_H
