#ifndef CMTOCORE_H
#define CMTOCORE_H

#include <QObject>

#include "global.h"
#include "cmysqlconnect.h"
class CMtoCore : public QObject
{
    Q_OBJECT
private:
    CMysqlConnect mysql;
public:
    explicit CMtoCore(QObject *parent = 0);
    void CreateMysqlConnect(QString DatabaseName,
                                QString UserName,
                                QString HostName,
                                QString Password);
signals:

public slots:

};

#endif // CMTOCORE_H
