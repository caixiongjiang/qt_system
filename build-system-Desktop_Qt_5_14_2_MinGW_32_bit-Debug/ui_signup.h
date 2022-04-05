/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Signup
{
public:
    QGridLayout *gridLayout_3;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QLabel *username;
    QLineEdit *le_username;
    QLabel *pwd;
    QLineEdit *le_pwd;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *btn_cancel;
    QPushButton *btn_save;

    void setupUi(QDialog *Signup)
    {
        if (Signup->objectName().isEmpty())
            Signup->setObjectName(QString::fromUtf8("Signup"));
        Signup->resize(400, 300);
        gridLayout_3 = new QGridLayout(Signup);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        widget_2 = new QWidget(Signup);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        username = new QLabel(widget_2);
        username->setObjectName(QString::fromUtf8("username"));

        gridLayout_2->addWidget(username, 0, 0, 1, 2);

        le_username = new QLineEdit(widget_2);
        le_username->setObjectName(QString::fromUtf8("le_username"));

        gridLayout_2->addWidget(le_username, 0, 2, 1, 1);

        pwd = new QLabel(widget_2);
        pwd->setObjectName(QString::fromUtf8("pwd"));

        gridLayout_2->addWidget(pwd, 1, 0, 1, 1);

        le_pwd = new QLineEdit(widget_2);
        le_pwd->setObjectName(QString::fromUtf8("le_pwd"));

        gridLayout_2->addWidget(le_pwd, 1, 1, 1, 2);


        gridLayout_3->addWidget(widget_2, 0, 0, 1, 1);

        widget = new QWidget(Signup);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btn_cancel = new QPushButton(widget);
        btn_cancel->setObjectName(QString::fromUtf8("btn_cancel"));
        btn_cancel->setMinimumSize(QSize(120, 40));
        btn_cancel->setMaximumSize(QSize(120, 40));

        gridLayout->addWidget(btn_cancel, 1, 1, 1, 1);

        btn_save = new QPushButton(widget);
        btn_save->setObjectName(QString::fromUtf8("btn_save"));
        btn_save->setMinimumSize(QSize(120, 40));
        btn_save->setMaximumSize(QSize(120, 40));

        gridLayout->addWidget(btn_save, 1, 0, 1, 1);


        gridLayout_3->addWidget(widget, 1, 0, 1, 1);


        retranslateUi(Signup);

        QMetaObject::connectSlotsByName(Signup);
    } // setupUi

    void retranslateUi(QDialog *Signup)
    {
        Signup->setWindowTitle(QCoreApplication::translate("Signup", "\346\263\250\345\206\214", nullptr));
        username->setText(QCoreApplication::translate("Signup", "\347\224\250\346\210\267\345\220\215", nullptr));
        pwd->setText(QCoreApplication::translate("Signup", "\345\257\206\347\240\201", nullptr));
        btn_cancel->setText(QCoreApplication::translate("Signup", "\345\217\226\346\266\210", nullptr));
        btn_save->setText(QCoreApplication::translate("Signup", "\344\277\235\345\255\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Signup: public Ui_Signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
