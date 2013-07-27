#ifndef CNECESSARYEDIT_H
#define CNECESSARYEDIT_H

#include <QWidget>
#include "global.h"
#include "ui_designerNecessaryEdit.h"
#include "ilabel.h"

class CNecessaryEdit : public QWidget, private Ui::designerNecessaryEdit
{
    Q_OBJECT
private:
    QString nameOvd;
    QString idOvd;
    bool flagSelectDivision;
public:
    explicit CNecessaryEdit(QWidget *parent = 0);
private:
    void getDbDivisions();
    void getDbNomenclature();
    void loadDivisions();
    void loadNomenclature();
    void save();
    void clearTable();
signals:

public slots:
    void slotSetOvd(QString id, QString name);
    void slotSelectDivisions(int index);
private slots:
    void slotSelect();
    void slotSave();
};

#endif // CNECESSARYEDIT_H
