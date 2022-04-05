#include "commosql.h"
#include <QCoreApplication>
#include <QSqlError>
#include <QSqlQuery>
#include <QtDebug>

commoSql * commoSql::ptrcommoSql = nullptr;

commoSql::commoSql(QObject *parent) : QObject(parent)
{
    init();
    //test:
//    CommoInfo com;
//    com.id = 8;
//    com.name = "dd";
//    for(int i = 0; i < 10; ++i) {
//        addCommo(com);
//    }
//    getCommoCnt();
//    getPageCommo(2, 3);
//    delCommo(4);
//    updateCommoInfo(com);
//    UserInfo info;
//    info.username = "蔡雄江";
//    info.pwd = "6116226cai";
//    info.aut = "admin";
//    AddUser(info);
//    AddUser(info);
//    auto l = getAllUser();
//    qDebug() << isExit("蔡雄江");
//    info.pwd = "666";
//    updateUserInfo(info);
//    delUser("蔡雄江");
}

void commoSql::init()
{
    if(QSqlDatabase::drivers().isEmpty())
        qDebug() << "No database drivers found";
    m_db = QSqlDatabase::addDatabase("QSQLITE");
#if 1
    auto str = QCoreApplication::applicationDirPath() + "/data.db";//应用程序的输出目录
    qDebug() << str;
#endif
    m_db.setDatabaseName(str); //设置数据库路径
    if(!m_db.open())
        qDebug() << "Unable to open database";
}

quint32 commoSql::getCommoCnt()
{
    QSqlQuery sql(m_db);
    QString strSql = QString("select count(id) from commodity");
    quint32 uiCnt = 0;
    sql.exec(strSql);
    while(sql.next())
    {
        uiCnt = sql.value(0).toUInt();
    }
    return uiCnt;
}

QList<CommoInfo> commoSql::getPageCommo(quint32 page, quint32 uiCnt)
{
    QList<CommoInfo> l;
    QSqlQuery sql(m_db);
    QString strSql = QString("select * from commodity order by id limit %1 offset %2").
            arg(uiCnt).
            arg(page * uiCnt);
    sql.exec(strSql);
    CommoInfo info;
    while(sql.next())
    {
        info.id = sql.value(0).toUInt();
        info.name = sql.value(1).toString();
        info.priceIn = sql.value(2).toUInt();
        info.priceOut = sql.value(3).toUInt();
        info.unit = sql.value(4).toString();
        info.stockNum = sql.value(5).toUInt();
        info.state = sql.value(6).toString();
        l.push_back(info);
    }
    return l;
}

bool commoSql::addCommo(CommoInfo info)
{
    QSqlQuery sql(m_db);
    QString strSql = QString("insert into commodity values(null, '%1', %2, %3, '%4', %5, '%6')").
            arg(info.name).
            arg(info.priceIn).
            arg(info.priceOut).
            arg(info.unit).
            arg(info.stockNum).
            arg(info.state);
    return sql.exec(strSql);
}

bool commoSql::addCommo(QList<CommoInfo> l)
{
    QSqlQuery sql(m_db);
    m_db.transaction();//开启事务
    for(auto info : l)
    {
        QString strSql = QString("insert into commodity values(null, '%1', %2, %3, '%4', %5, '%6')").
                arg(info.name).
                arg(info.priceIn).
                arg(info.priceOut).
                arg(info.unit).
                arg(info.stockNum).
                arg(info.state);
        sql.exec(strSql);
    }
    m_db.commit();
    return true;
}

bool commoSql::delCommo(int id)
{
    QSqlQuery sql(m_db);
    QString strSql = QString("delete from commodity where id = %1").arg(id);
    return sql.exec(strSql);
}

bool commoSql::clearCommoTable()
{
    QSqlQuery sql(m_db);
    QString strSql = QString("delete from commodity");
    sql.exec(strSql);
    return sql.exec(QString("delete from sqlite_sequence where name = 'commodity'"));
}

bool commoSql::updateCommoInfo(CommoInfo info)
{
    QSqlQuery sql(m_db);
    QString strSql = QString("update commodity set name = '%1', priceIn = %2, priceOut = %3, "
                             "unit = '%4', stockNum = %5, state = '%6' where id = %7").
            arg(info.name).
            arg(info.priceIn).
            arg(info.priceOut).
            arg(info.unit).
            arg(info.stockNum).
            arg(info.state).
            arg(info.id);
    bool res = sql.exec(strSql);
    //qDebug() << strSql;
    //检查sql语句的正确性
    QSqlError e = sql.lastError();
    if(e.isValid())
    {
        qDebug() << e.text();
    }
    return res;
}

quint32 commoSql::getUserCnt()
{
    QSqlQuery sql(m_db);
    QString strSql = QString("select count(password) from username");
    quint32 cnt = 0;
    sql.exec(strSql);
    while(sql.next())
    {
        cnt = sql.value(0).toUInt();
    }
    return cnt;
}

QList<UserInfo> commoSql::getAllUser()
{
    QList<UserInfo> l;
    QSqlQuery sql(m_db);
    QString strSql = QString("select * from username");
    sql.exec(strSql);
    UserInfo info;
    while(sql.next())
    {
        info.username = sql.value(0).toString();
        info.pwd = sql.value(1).toString();
        info.aut = sql.value(2).toString();
        l.push_back(info);
    }
    return l;
}

bool commoSql::isExit(QString strUser)
{
    QSqlQuery sql(m_db);
    QString strSql = QString("select * from username where username = '%1'").arg(strUser);
    sql.exec(strSql);
    return sql.next();
}

bool commoSql::updateUserInfo(UserInfo info)
{
    QSqlQuery sql(m_db);
    QString strSql = QString("update username set password = '%1', auth = '%2' "
                             "where username = '%3'").
            arg(info.pwd).
            arg(info.aut).
            arg(info.username);
    bool res = sql.exec(strSql);
    //检查sql语句的正确性
    QSqlError e = sql.lastError();
    if(e.isValid())
    {
        qDebug() << e.text();
    }
    return res;
}

bool commoSql::AddUser(UserInfo info)
{
    QSqlQuery sql(m_db);
    QString strSql = QString("insert into username values('%1', '%2', '%3')").
            arg(info.username).
            arg(info.pwd).
            arg(info.aut);
    return sql.exec(strSql);
}

bool commoSql::delUser(QString strUserName)
{
    QSqlQuery sql(m_db);
    QString strSql = QString("delete from username where username = '%1'").arg(strUserName);
    return sql.exec(strSql);
}
