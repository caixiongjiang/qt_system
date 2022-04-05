#ifndef SIGNUP_H
#define SIGNUP_H

#include <QDialog>
#include "commosql.h"

namespace Ui {
class Signup;
}

class Signup : public QDialog
{
    Q_OBJECT

public:
    explicit Signup(QWidget *parent = nullptr);
    ~Signup();

private slots:
    void on_btn_cancel_clicked();

    void on_btn_save_clicked();

private:
    Ui::Signup *ui;
};

#endif // SIGNUP_H
