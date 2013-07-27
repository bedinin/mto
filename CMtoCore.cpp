#include "CMtoCore.h"

CMtoCore::CMtoCore(QObject *parent) :
    QObject(parent)
{
    this->CreateMysqlConnect("mto","root","localhost","");
    //qDebug() << this->mysql.getError();
}

void CMtoCore::CreateMysqlConnect(QString DatabaseName, QString UserName, QString HostName, QString Password)
{
    this->mysql.setParam(DatabaseName,UserName,HostName,Password);
    if(this->mysql.mysqlConnect() == false){
        qDebug() << this->mysql.getError();
    }
    else{
        query = this->mysql.getQuery();
    }
}
