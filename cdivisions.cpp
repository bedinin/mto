#include "cdivisions.h"

CDivisions::CDivisions(QWidget *parent) :
    QWidget(parent)
{
    this->setupUi(this);
    this->getDbAll();

    //Кодировка
    QTextCodec *russian =QTextCodec::codecForName("utf-8");
    QTextCodec::setCodecForTr(russian);

    this->setWindowTitle(QObject::tr("Список подразделений"));

    QObject::connect(this->table,SIGNAL(itemSelectionChanged()),
                     this,SLOT(slotSelect()));
    QObject::connect(this->btAdd,SIGNAL(clicked()),
                     this,SLOT(slotAdd()));
    QObject::connect(this->btSave,SIGNAL(clicked()),
                     this,SLOT(slotSave()));
    QObject::connect(this->btDelete,SIGNAL(clicked()),
                     this,SLOT(slotDelete()));
}

void CDivisions::loadAll()
{
    this->clearTable();
    this->table->setRowCount(query->size());
    int row=0;
    while(query->next()){
        QSqlRecord rec = query->record();
        ILabel *lb = new ILabel();
        //id
        lb->setId(query->value(rec.indexOf("id")).toInt());
        //name
        lb->setText(query->value(rec.indexOf("name")).toString());
        this->table->setCellWidget(row++,0,lb);
    }

}

void CDivisions::clearTable()
{
    for(int i = 0;i<this->table->rowCount();i++){
        this->table->removeRow(i);
    }
}

void CDivisions::getDbAll()
{
     QString format = "CALL get_divisions();";
     if(query->exec(format)){
        this->loadAll();
     }else{
        qDebug() << QObject::tr("Ошибка базы данных(CDivisions::getDbAll)");
     }
}

void CDivisions::slotSelect()
{
    int row = this->table->currentRow();
    if(row >= 0 && row < this->table->rowCount()){
        this->btSave->setEnabled(true);
        this->btDelete->setEnabled(true);
        this->btAdd->setEnabled(true);
        this->leName->setText((dynamic_cast<ILabel*>(this->table->cellWidget(row,0)))->text());
        this->leName->selectAll();
        this->leName->setFocus();
    }else{
        this->btSave->setEnabled(false);
        this->btDelete->setEnabled(false);
        this->btAdd->setEnabled(true);
        this->leName->setText("");
    }
}

void CDivisions::slotAdd()
{
    QString format = "CALL add_divisions('%1');";
    if(query->exec(format.arg(this->leName->text()))){
       this->add();
    }else{
       qDebug() << QObject::tr("Ошибка базы данных(CDivisions::slotAdd)");
    }
}

void CDivisions::add()
{
    int row = this->table->rowCount();
    while(query->next()){
        QSqlRecord rec = query->record();
        if(query->value(rec.indexOf("return_text")).toString() == "NORMAL"){
            ILabel *lb = new ILabel();
            //id
            lb->setId(query->value(rec.indexOf("return_id")).toInt());
            //name
            lb->setText(this->leName->text());
            this->table->setRowCount(row+1);
            this->table->setCellWidget(row,0,lb);
        }

    }
    this->leName->selectAll();
    this->leName->setFocus();
}

void CDivisions::slotSave()
{
    int row = this->table->currentRow();
    if(row >= 0 && row < this->table->rowCount()){
        ILabel *lb = dynamic_cast<ILabel*>(this->table->cellWidget(row,0));
        QString format = "CALL set_divisions(%1,'%2');";
        if(query->exec(format.arg(QString::number(lb->getId())).arg(this->leName->text()))){
            this->save();

        }else{
            qDebug() << QObject::tr("Ошибка базы данных(CDivisions::slotSave)");
        }

    }
 }

void CDivisions::save()
{
    while(query->next()){
        QSqlRecord rec = query->record();
        if(query->value(rec.indexOf("return_text")).toString() == "NORMAL"){
            ILabel *lb = dynamic_cast<ILabel*>(this->table->cellWidget(this->table->currentRow(),0));
            //name
            lb->setText(this->leName->text());
            this->table->clearSelection();
            this->table->setCurrentIndex(QModelIndex());
            this->slotSelect();
        }
    }
}

void CDivisions::slotDelete()
{
    int row = this->table->currentRow();
    if(row >= 0 && row < this->table->rowCount()){
        ILabel *lb = dynamic_cast<ILabel*>(this->table->cellWidget(row,0));
        QString format = "CALL delete_divisions(%1);";
        if(query->exec(format.arg(QString::number(lb->getId())))){

            this->del();

        }else{
            qDebug() << QObject::tr("Ошибка базы данных(CDivisions::slotDelete)");
        }

    }
}

void CDivisions::del()
{
    while(query->next()){
        QSqlRecord rec = query->record();
        if(query->value(rec.indexOf("return_text")).toString() == "NORMAL"){
            this->table->removeRow(this->table->currentRow());
            this->table->clearSelection();
            this->table->setCurrentIndex(QModelIndex());
            this->slotSelect();
        }
    }
}
