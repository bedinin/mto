#ifndef CDIVISIONS_H
#define CDIVISIONS_H

#include <QWidget>
#include "global.h"
#include "ui_designerDivisions.h"
#include "ilabel.h"

class CDivisions : public QWidget, private Ui::designerDivisions
{
    Q_OBJECT
public:
    explicit CDivisions(QWidget *parent = 0);
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

#endif // CDIVISIONS_H
