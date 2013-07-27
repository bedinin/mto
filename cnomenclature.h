#ifndef CNOMENCLATURE_H
#define CNOMENCLATURE_H

#include <QWidget>
#include "global.h"
#include "ui_designerCNomenclature.h"
#include "ilabel.h"
class CNomenclature : public QWidget,private Ui::designerNomenclature
{
    Q_OBJECT
public:
    explicit CNomenclature(QWidget *parent = 0);
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

#endif // CNOMENCLATURE_H
