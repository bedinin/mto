#ifndef CMYSQLCONNECT_H
#define CMYSQLCONNECT_H

#include <QObject>
#include <QtSql>
#include <QtCore>
#include <QWidget>


class CMysqlConnect : public QObject
{
    Q_OBJECT
private:
    QSqlQuery* query;
    QSqlDatabase db;
    bool status;
public:
    CMysqlConnect(QObject *parent = 0);
    void setParam(QString DatabaseName,
                  QString UserName,
                  QString HostName,
                  QString Password);
    void setDataBaseName(QString DatabaseName);
    void setUserName(QString UserName);
    void setHostName(QString HostName);
    void setPassword(QString Password);
    bool mysqlConnect();
    void mysqlDisconnect();
    QSqlQuery* getQuery();
    QString getError();
    bool getStatus();
    ~CMysqlConnect();

signals:

public slots:

};

#endif // CMYSQLCONNECT_H
