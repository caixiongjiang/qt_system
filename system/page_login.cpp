#include "page_login.h"
#include "ui_page_login.h"
#include "mainwindow.h"
#include <QDebug>
#include <QFile>
#include <QMessageBox>

Page_login::Page_login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Page_login)
{
    ui->setupUi(this);
}

void Page_login::on_btn_login_clicked()
{
    //数据库查找用户名和密码
    commoSql *ptr = commoSql::getinstance();
    auto num = ptr->getUserCnt();//获取用户的数量
    QList<UserInfo> luser = ptr->getAllUser();//返回所有用户
    bool flag = false;
    qDebug() << num;
    for(int i = 0; i < (int)num; ++i)
    {
        if(luser[i].username == ui->username->text() && luser[i].pwd == ui->userpwd->text())
        {
            flag = true;
            break;
        }
    }
    //失败就提示
    if(!flag)
    {
        QMessageBox::information(nullptr, "警告", "请输入正确的用户名和密码");
        ui->username->clear();
        ui->userpwd->clear();
    }

    //成功进入主界面
    else
    {
        emit sendLoginSuccess();
        emit sendData(ui->username->text());
        this->hide();
    }

}

Page_login::~Page_login()
{
    delete ui;
}

void Page_login::on_btn_signup_clicked()
{
    //加载样式
    QFile fread;
    fread.setFileName(":/login.css");
    fread.open(QIODevice::ReadOnly);
    QString strLoginQss = fread.readAll();
    m_Signup.setStyleSheet(strLoginQss);

    m_Signup.exec();
}
