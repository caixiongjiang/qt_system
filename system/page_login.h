#ifndef PAGE_LOGIN_H
#define PAGE_LOGIN_H

#include "signup.h"

#include <QWidget>

namespace Ui {
class Page_login;
}

class Page_login : public QWidget
{
    Q_OBJECT

public:
    explicit Page_login(QWidget *parent = nullptr);
    ~Page_login();

private slots:
    void on_btn_login_clicked();

    void on_btn_signup_clicked();

signals:
    void sendLoginSuccess();
    void sendData(QString); //用来传递数据的信号
private:
    Ui::Page_login *ui;
    Signup m_Signup;
};

#endif // PAGE_LOGIN_H
