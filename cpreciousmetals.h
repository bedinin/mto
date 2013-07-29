#ifndef CPRECIOUSMETALS_H
#define CPRECIOUSMETALS_H

#include <QWidget>
#include "global.h"
#include "ui_designerPreciousMetals.h"
#include "ilabel.h"

class CPreciousMetals : public QWidget,private Ui::designerPreciousMetals
{
    Q_OBJECT
public:
    explicit CPreciousMetals(QWidget *parent = 0);
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

#endif // CPRECIOUSMETALS_H
