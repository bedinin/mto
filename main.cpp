
#include <QApplication>
#include <QtGui>
#include "global.h"

QSqlQuery* query;

int main(int argc,char** argv){

    QApplication app(argc,argv);

    return app.exec();
}
