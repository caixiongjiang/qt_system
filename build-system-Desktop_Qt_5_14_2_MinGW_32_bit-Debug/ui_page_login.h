/********************************************************************************
** Form generated from reading UI file 'page_login.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE_LOGIN_H
#define UI_PAGE_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Page_login
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QWidget *widget_2;
    QGridLayout *gridLayout_3;
    QLineEdit *userpwd;
    QLabel *lb1;
    QSpacerItem *horizontalSpacer;
    QLineEdit *username;
    QLabel *lb2;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *btn_login;
    QPushButton *btn_signup;

    void setupUi(QWidget *Page_login)
    {
        if (Page_login->objectName().isEmpty())
            Page_login->setObjectName(QString::fromUtf8("Page_login"));
        Page_login->resize(600, 360);
        Page_login->setMaximumSize(QSize(600, 360));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Page_login->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(Page_login);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_3 = new QLabel(Page_login);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setFamily(QString::fromUtf8(".PingFang SC"));
        font.setPointSize(18);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        widget_2 = new QWidget(Page_login);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout_3 = new QGridLayout(widget_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        userpwd = new QLineEdit(widget_2);
        userpwd->setObjectName(QString::fromUtf8("userpwd"));
        userpwd->setMaximumSize(QSize(300, 16777215));
        QFont font1;
        font1.setFamily(QString::fromUtf8(".PingFang SC"));
        font1.setPointSize(10);
        userpwd->setFont(font1);
        userpwd->setMaxLength(16);
        userpwd->setEchoMode(QLineEdit::Password);
        userpwd->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(userpwd, 2, 2, 1, 1);

        lb1 = new QLabel(widget_2);
        lb1->setObjectName(QString::fromUtf8("lb1"));
        QFont font2;
        font2.setFamily(QString::fromUtf8(".PingFang SC"));
        font2.setPointSize(12);
        lb1->setFont(font2);
        lb1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(lb1, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 3, 1, 1);

        username = new QLineEdit(widget_2);
        username->setObjectName(QString::fromUtf8("username"));
        username->setMinimumSize(QSize(300, 0));
        username->setMaximumSize(QSize(500, 16777215));
        username->setFont(font1);
        username->setMaxLength(8);
        username->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(username, 0, 2, 1, 1);

        lb2 = new QLabel(widget_2);
        lb2->setObjectName(QString::fromUtf8("lb2"));
        lb2->setFont(font2);
        lb2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(lb2, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 0, 1, 1);


        gridLayout_2->addWidget(widget_2, 1, 0, 1, 1);

        widget = new QWidget(Page_login);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btn_login = new QPushButton(widget);
        btn_login->setObjectName(QString::fromUtf8("btn_login"));
        btn_login->setEnabled(true);
        btn_login->setMinimumSize(QSize(0, 40));
        btn_login->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(btn_login, 2, 0, 2, 1);

        btn_signup = new QPushButton(widget);
        btn_signup->setObjectName(QString::fromUtf8("btn_signup"));
        btn_signup->setMinimumSize(QSize(0, 40));
        btn_signup->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(btn_signup, 2, 1, 2, 1);


        gridLayout_2->addWidget(widget, 2, 0, 1, 1);

        QWidget::setTabOrder(username, userpwd);
        QWidget::setTabOrder(userpwd, btn_login);
        QWidget::setTabOrder(btn_login, btn_signup);

        retranslateUi(Page_login);

        QMetaObject::connectSlotsByName(Page_login);
    } // setupUi

    void retranslateUi(QWidget *Page_login)
    {
        Page_login->setWindowTitle(QCoreApplication::translate("Page_login", "\347\231\273\345\275\225", nullptr));
#if QT_CONFIG(tooltip)
        Page_login->setToolTip(QCoreApplication::translate("Page_login", "\350\277\231\346\230\257\347\231\273\345\275\225\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("Page_login", "\345\215\227\345\272\267\345\256\266\345\205\267\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        userpwd->setPlaceholderText(QCoreApplication::translate("Page_login", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201\357\274\210\346\234\200\351\225\277\344\270\27216\344\275\215\357\274\211", nullptr));
        lb1->setText(QCoreApplication::translate("Page_login", "\347\224\250\346\210\267\345\220\215", nullptr));
        username->setPlaceholderText(QCoreApplication::translate("Page_login", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215\357\274\210\346\234\200\351\225\277\344\270\2728\344\275\215\357\274\211", nullptr));
        lb2->setText(QCoreApplication::translate("Page_login", "\345\257\206\347\240\201", nullptr));
        btn_login->setText(QCoreApplication::translate("Page_login", "\347\231\273\345\275\225", nullptr));
        btn_signup->setText(QCoreApplication::translate("Page_login", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Page_login: public Ui_Page_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_LOGIN_H
