#include "cmysqlconnect.h"

CMysqlConnect::CMysqlConnect(QObject *parent) :
    QObject(parent)
{
    this->db = QSqlDatabase::addDatabase("QMYSQL");
    this->status = false;
    this->query = NULL;
    //this->query-> = new QSqlQuery(this->db);
};

//***

void CMysqlConnect::setParam(QString DatabaseName,
                             QString UserName,
                             QString HostName,
                             QString Password)
{
    db.setDatabaseName(DatabaseName);
    db.setUserName(UserName);
    db.setHostName(HostName);
    db.setPassword(Password);
};

//***

void CMysqlConnect::setDataBaseName(QString DatabaseName){
    this->db.setDatabaseName(DatabaseName);
};

//***

void CMysqlConnect::setUserName(QString UserName){
    this->db.setUserName(UserName);
};

//***

void CMysqlConnect::setHostName(QString HostName){
    this->db.setHostName(HostName);
};

//***

void CMysqlConnect::setPassword(QString Password){
    this->db.setPassword(Password);
};

//***

bool CMysqlConnect::mysqlConnect(){

    if(this->status = this->db.open()){
        this->query = new QSqlQuery(this->db);
    }
    return this->status;
};

//***

void CMysqlConnect::mysqlDisconnect(){

    this->db.close();
    if(this->status == true){
        delete this->query;
        this->query = NULL;
    }
    this->status = false;
};

//***

QSqlQuery* CMysqlConnect::getQuery(){
    if(this->status){
        return this->query;
    }
    else
        return NULL;
};

//***

QString CMysqlConnect::getError(){

    return QString(this->db.lastError().text());
};

//***

CMysqlConnect::~CMysqlConnect(){
    this->mysqlDisconnect();
};

bool CMysqlConnect::getStatus()
{
    return this->status;
}

