#include "cnecessaryedit.h"

CNecessaryEdit::CNecessaryEdit(QWidget *parent) :
    QWidget(parent)
{
    this->setupUi(this);

     //Кодировка
    QTextCodec *russian =QTextCodec::codecForName("utf-8");
    QTextCodec::setCodecForTr(russian);

    this->flagSelectDivision = false;

    QObject::connect(this->cbDivisions,SIGNAL(currentIndexChanged(int)),
                     this,SLOT(slotSelectDivisions(int)));
    QObject::connect(this->table,SIGNAL(itemSelectionChanged()),
                     this,SLOT(slotSelect()));
    QObject::connect(this->btSave,SIGNAL(clicked()),
                     this,SLOT(slotSave()));
    QObject::connect(this->btCancel,SIGNAL(clicked()),this,SLOT(close()));
}

void CNecessaryEdit::slotSetOvd(QString id, QString name)
{
    this->idOvd = id;
    this->nameOvd = name;

    this->setWindowTitle(QObject::tr("Положенность для ") + this->nameOvd);
    this->getDbDivisions();
}

void CNecessaryEdit::getDbDivisions()
{
     QString format = "CALL get_divisions();";
     if(query->exec(format)){
        this->loadDivisions();
     }else{
        qDebug() << QObject::tr("Ошибка базы данных(CNecessaryEdit::getDbDivisions)");
     }
}

void CNecessaryEdit::loadDivisions()
{
    this->cbDivisions->clear();
    while(query->next()){
        QSqlRecord rec = query->record();
        this->cbDivisions->addItem(query->value(rec.indexOf("name")).toString(),QVariant(query->value(rec.indexOf("id")).toInt()));
    }
    this->flagSelectDivision = true;
    this->cbDivisions->setCurrentIndex(0);
    this->slotSelectDivisions(this->cbDivisions->currentIndex());
}

void CNecessaryEdit::slotSelectDivisions(int index)
{
    if(this->flagSelectDivision){
        this->getDbNomenclature();
    }/**/
}

void CNecessaryEdit::getDbNomenclature()
{
    QString divisionsId = this->cbDivisions->itemData(this->cbDivisions->currentIndex()).toString();
    QString format = "CALL get_nomenclature_to_devisions(%1,%2);";
    QString sql = format.arg(this->idOvd).arg(divisionsId);
    if(query->exec(sql)){
       this->loadNomenclature();
    }else{
       qDebug() << QObject::tr("Ошибка базы данных(CNecessaryEdit::getDbNomenclature)");
    }
}

void CNecessaryEdit::loadNomenclature()
{
    this->clearTable();
    this->table->setRowCount(query->size());
    int row=0;
    while(query->next()){
        QSqlRecord rec = query->record();
        ILabel *lb = new ILabel();
        //id
        lb->setId(query->value(rec.indexOf("nomenclature_id")).toInt());
        //name
        lb->setText(query->value(rec.indexOf("nomenclature_name")).toString());
        this->table->setCellWidget(row,0,lb);

        lb = new ILabel();
        lb->setId(query->value(rec.indexOf("id")).toInt());
        lb->setText(query->value(rec.indexOf("necessary")).toString());
        this->table->setCellWidget(row++,1,lb);
    }
}

void CNecessaryEdit::clearTable()
{
    for(int i = 0;i<this->table->rowCount();i++){
        this->table->removeRow(i);
    }
}


void CNecessaryEdit::slotSelect()
{
    int row = this->table->currentRow();
    if(row >= 0 && row < this->table->rowCount()){
        this->btSave->setEnabled(true);
        this->leName->setText((dynamic_cast<ILabel*>(this->table->cellWidget(row,1)))->text());
        this->leName->selectAll();
        this->leName->setFocus();
    }else{
        this->btSave->setEnabled(false);
        this->leName->setText("");
    }
}

void CNecessaryEdit::slotSave()
{
    int row = this->table->currentRow();
    if(row >= 0 && row < this->table->rowCount()){
        ILabel *lb = dynamic_cast<ILabel*>(this->table->cellWidget(row,0));
        QString divisionsId = this->cbDivisions->itemData(this->cbDivisions->currentIndex()).toString();
        QString nomenclatureId = QString::number(lb->getId());
        lb = dynamic_cast<ILabel*>(this->table->cellWidget(row,1));
        QString id = QString::number(lb->getId());
        QString format = "CALL set_nomenclature_to_devisions(%1,%2,%3,%4,'%5');";
        QString sql = format.arg(id).arg(this->idOvd).arg(divisionsId).arg(nomenclatureId).arg(this->leName->text());
        qDebug() << sql;
        if(query->exec(sql)){
            this->save();
        }else{
            qDebug() << QObject::tr("Ошибка базы данных(CNecessaryEdit::slotSave)");
        }
    }
}
void CNecessaryEdit::save()
{
    while(query->next()){
        QSqlRecord rec = query->record();
        if(query->value(rec.indexOf("return_text")).toString() == "NORMAL"){
            ILabel *lb = dynamic_cast<ILabel*>(this->table->cellWidget(this->table->currentRow(),1));
            //name
            lb->setText(this->leName->text());
            this->table->clearSelection();
            this->table->setCurrentIndex(QModelIndex());
            this->slotSelect();
        }
    }
}
