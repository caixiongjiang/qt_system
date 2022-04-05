#include "signup.h"
#include "ui_signup.h"

#include <QMessageBox>


Signup::Signup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Signup)
{
    ui->setupUi(this);
}

Signup::~Signup()
{
    delete ui;
}

void Signup::on_btn_cancel_clicked()
{
    this->hide();
}

void Signup::on_btn_save_clicked()
{
    //CommoInfo类
    UserInfo info;
    //数据库指针
    auto ptr = commoSql::getinstance();
    //获取输入的值
    info.username = ui->le_username->text();
    info.pwd = ui->le_pwd->text();
    info.aut = QString("普通用户");

    ptr->AddUser(info);

    QMessageBox::information(nullptr, "信息", "保存成功");
    this->hide();
}
