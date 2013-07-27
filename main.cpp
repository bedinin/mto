
#include <QApplication>
#include <QtGui>
#include "global.h"
#include "CMtoCore.h"

QSqlQuery* query;

int main(int argc,char** argv){

    QApplication app(argc,argv);
    CMtoCore mto;

    return app.exec();
}
