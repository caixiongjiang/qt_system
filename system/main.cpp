#include "mainwindow.h"
#include "page_login.h"
#include <QApplication>
#include "commosql.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
//    w.show();
    commoSql sql;
    return a.exec();
}
