#ifndef COMMOSQL_H
#define COMMOSQL_H

#include <QObject>
#include <QSqlDatabase>

struct CommoInfo
{
    int id;
    QString name;
    int priceIn;
    int priceOut;
    QString unit;
    int stockNum;
    QString state;
};

struct UserInfo
{
    QString username;
    QString pwd;
    QString aut;
};

class commoSql : public QObject
{
    Q_OBJECT
public:
    //单例模式
    static commoSql *ptrcommoSql;
    static commoSql *getinstance()
    {
        if(nullptr == ptrcommoSql)
        {
            ptrcommoSql = new commoSql;
        }
        return ptrcommoSql;
    }

    explicit commoSql(QObject *parent = nullptr);

    void init();

    //查询所有家具的数量
    quint32 getCommoCnt();
    //查询第几页的家具数据，页数从0开始
    QList<CommoInfo> getPageCommo(quint32 page, quint32 uiCnt);//页数 单页条数
    //添加家具
    bool addCommo(CommoInfo info);
    bool addCommo(QList<CommoInfo> l);//数据模拟的时候使用事务加快速度
    //删除家具
    bool delCommo(int id);
    //清空家具表格
    bool clearCommoTable();
    //修改家具信息
    bool updateCommoInfo(CommoInfo info);
    //查询所有用户的数量
    quint32 getUserCnt();
    //查询所有用户
    QList<UserInfo> getAllUser();
    //查询用户名是否存在
    bool isExit(QString strUser);
    //更新用户信息
    bool updateUserInfo(UserInfo info);
    //添加单个用户
    bool AddUser(UserInfo info);
    //删除单个用户
    bool delUser(QString strUserName);
signals:

private:
    QSqlDatabase m_db;
};

#endif // COMMOSQL_H
