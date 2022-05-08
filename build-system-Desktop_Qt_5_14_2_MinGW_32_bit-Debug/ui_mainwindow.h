/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QTreeWidget *treeWidget;
    QWidget *bg_title;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QLabel *lb_user;
    QPushButton *btn_exit;
    QLabel *label_2;
    QLabel *label_3;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_4;
    QTableWidget *tableWidget;
    QPushButton *btn_update;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_search;
    QLineEdit *le_search;
    QPushButton *btn_add;
    QPushButton *btn_del;
    QPushButton *btn_simulation;
    QCheckBox *checkBox;
    QPushButton *btn_clear;
    QLabel *lb_cnt;
    QWidget *page_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1100, 600);
        MainWindow->setMinimumSize(QSize(1024, 480));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        treeWidget = new QTreeWidget(centralwidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setMinimumSize(QSize(200, 0));
        treeWidget->setMaximumSize(QSize(200, 16777215));
        treeWidget->setStyleSheet(QString::fromUtf8(""));
        treeWidget->setAutoScroll(true);
        treeWidget->header()->setVisible(false);

        gridLayout_3->addWidget(treeWidget, 1, 0, 1, 1);

        bg_title = new QWidget(centralwidget);
        bg_title->setObjectName(QString::fromUtf8("bg_title"));
        bg_title->setMinimumSize(QSize(0, 50));
        bg_title->setMaximumSize(QSize(16777215, 50));
        bg_title->setStyleSheet(QString::fromUtf8(""));
        gridLayout_2 = new QGridLayout(bg_title);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(264, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        label = new QLabel(bg_title);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8(".PingFang SC"));
        font.setPointSize(18);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8(""));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 1, 1, 1);

        widget_2 = new QWidget(bg_title);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(5, 0, 5, 0);
        lb_user = new QLabel(widget_2);
        lb_user->setObjectName(QString::fromUtf8("lb_user"));
        lb_user->setMaximumSize(QSize(120, 16777215));
        lb_user->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(lb_user, 0, 2, 1, 1);

        btn_exit = new QPushButton(widget_2);
        btn_exit->setObjectName(QString::fromUtf8("btn_exit"));
        btn_exit->setMaximumSize(QSize(60, 16777215));
        btn_exit->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(btn_exit, 0, 4, 1, 1);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(40, 40));
        label_2->setMaximumSize(QSize(40, 40));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/icon1.png);"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(75, 0));
        label_3->setMaximumSize(QSize(75, 16777215));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 0, 1, 1, 1);


        gridLayout_2->addWidget(widget_2, 0, 2, 1, 1);

        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 1);
        gridLayout_2->setColumnStretch(2, 1);

        gridLayout_3->addWidget(bg_title, 0, 0, 1, 3);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_4 = new QGridLayout(page);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(9, 9, 9, 6);
        tableWidget = new QTableWidget(page);
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setMinimumSize(QSize(0, 0));
        tableWidget->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);

        gridLayout_4->addWidget(tableWidget, 2, 0, 1, 10);

        btn_update = new QPushButton(page);
        btn_update->setObjectName(QString::fromUtf8("btn_update"));
        btn_update->setMinimumSize(QSize(0, 0));
        btn_update->setMaximumSize(QSize(16777215, 16777215));
        btn_update->setStyleSheet(QString::fromUtf8(""));

        gridLayout_4->addWidget(btn_update, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(80, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 1, 4, 1, 1);

        btn_search = new QPushButton(page);
        btn_search->setObjectName(QString::fromUtf8("btn_search"));
        btn_search->setStyleSheet(QString::fromUtf8(""));

        gridLayout_4->addWidget(btn_search, 1, 6, 1, 1);

        le_search = new QLineEdit(page);
        le_search->setObjectName(QString::fromUtf8("le_search"));
        le_search->setMinimumSize(QSize(300, 0));
        le_search->setMaximumSize(QSize(300, 16777215));

        gridLayout_4->addWidget(le_search, 1, 5, 1, 1);

        btn_add = new QPushButton(page);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));
        btn_add->setStyleSheet(QString::fromUtf8(""));

        gridLayout_4->addWidget(btn_add, 1, 1, 1, 1);

        btn_del = new QPushButton(page);
        btn_del->setObjectName(QString::fromUtf8("btn_del"));
        btn_del->setStyleSheet(QString::fromUtf8(""));

        gridLayout_4->addWidget(btn_del, 1, 3, 1, 1);

        btn_simulation = new QPushButton(page);
        btn_simulation->setObjectName(QString::fromUtf8("btn_simulation"));

        gridLayout_4->addWidget(btn_simulation, 5, 0, 1, 1);

        checkBox = new QCheckBox(page);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        gridLayout_4->addWidget(checkBox, 1, 0, 1, 1);

        btn_clear = new QPushButton(page);
        btn_clear->setObjectName(QString::fromUtf8("btn_clear"));

        gridLayout_4->addWidget(btn_clear, 5, 1, 1, 1);

        lb_cnt = new QLabel(page);
        lb_cnt->setObjectName(QString::fromUtf8("lb_cnt"));

        gridLayout_4->addWidget(lb_cnt, 5, 2, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);

        gridLayout_3->addWidget(stackedWidget, 1, 2, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1100, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(btn_update, btn_exit);
        QWidget::setTabOrder(btn_exit, tableWidget);
        QWidget::setTabOrder(tableWidget, btn_add);
        QWidget::setTabOrder(btn_add, btn_search);
        QWidget::setTabOrder(btn_search, treeWidget);
        QWidget::setTabOrder(treeWidget, le_search);
        QWidget::setTabOrder(le_search, btn_del);
        QWidget::setTabOrder(btn_del, checkBox);
        QWidget::setTabOrder(checkBox, btn_simulation);
        QWidget::setTabOrder(btn_simulation, btn_clear);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\345\215\227\345\272\267\345\256\266\345\205\267\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
#if QT_CONFIG(tooltip)
        MainWindow->setToolTip(QCoreApplication::translate("MainWindow", "\350\277\231\346\230\257\345\256\266\345\205\267\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("MainWindow", "\345\215\227\345\272\267\345\256\266\345\205\267\346\231\272\350\203\275\345\267\245\345\216\202\347\211\251\350\201\224\347\275\221\345\272\224\347\224\250\345\271\263\345\217\260", nullptr));
        lb_user->setText(QString());
        btn_exit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        btn_exit->setProperty("btn", QVariant(QCoreApplication::translate("MainWindow", "main", nullptr)));
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        btn_update->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271", nullptr));
        btn_update->setProperty("btn", QVariant(QCoreApplication::translate("MainWindow", "main", nullptr)));
        btn_search->setText(QCoreApplication::translate("MainWindow", "\346\220\234\347\264\242", nullptr));
        btn_search->setProperty("btn", QVariant(QCoreApplication::translate("MainWindow", "main", nullptr)));
        btn_add->setText(QCoreApplication::translate("MainWindow", "\345\242\236\345\212\240", nullptr));
        btn_add->setProperty("btn", QVariant(QCoreApplication::translate("MainWindow", "main", nullptr)));
        btn_del->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        btn_del->setProperty("btn", QVariant(QCoreApplication::translate("MainWindow", "main", nullptr)));
        btn_simulation->setText(QCoreApplication::translate("MainWindow", "\346\250\241\346\213\237\346\225\260\346\215\256", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "\345\205\250\351\200\211", nullptr));
        btn_clear->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\345\256\266\345\205\267\344\277\241\346\201\257", nullptr));
        lb_cnt->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
