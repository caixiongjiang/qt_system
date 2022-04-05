/********************************************************************************
** Form generated from reading UI file 'dlg_addcommo.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_ADDCOMMO_H
#define UI_DLG_ADDCOMMO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dlg_addCommo
{
public:
    QGridLayout *gridLayout_2;
    QComboBox *c_state;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_6;
    QLineEdit *le_priceOut;
    QLineEdit *le_priceIn;
    QLabel *label_3;
    QComboBox *c_unit;
    QLineEdit *le_name;
    QLabel *label_5;
    QLineEdit *le_Numstock;
    QSpacerItem *horizontalSpacer;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *btn_save;
    QPushButton *btn_cancel;

    void setupUi(QDialog *Dlg_addCommo)
    {
        if (Dlg_addCommo->objectName().isEmpty())
            Dlg_addCommo->setObjectName(QString::fromUtf8("Dlg_addCommo"));
        Dlg_addCommo->resize(420, 326);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Dlg_addCommo->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(Dlg_addCommo);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(9, 9, 9, 9);
        c_state = new QComboBox(Dlg_addCommo);
        c_state->addItem(QString());
        c_state->addItem(QString());
        c_state->setObjectName(QString::fromUtf8("c_state"));

        gridLayout_2->addWidget(c_state, 5, 1, 1, 1);

        label_2 = new QLabel(Dlg_addCommo);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(80, 0));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(Dlg_addCommo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(80, 0));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_4 = new QLabel(Dlg_addCommo);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(80, 0));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        label_6 = new QLabel(Dlg_addCommo);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(80, 0));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_6, 5, 0, 1, 1);

        le_priceOut = new QLineEdit(Dlg_addCommo);
        le_priceOut->setObjectName(QString::fromUtf8("le_priceOut"));

        gridLayout_2->addWidget(le_priceOut, 2, 1, 1, 1);

        le_priceIn = new QLineEdit(Dlg_addCommo);
        le_priceIn->setObjectName(QString::fromUtf8("le_priceIn"));

        gridLayout_2->addWidget(le_priceIn, 1, 1, 1, 1);

        label_3 = new QLabel(Dlg_addCommo);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(80, 0));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        c_unit = new QComboBox(Dlg_addCommo);
        c_unit->addItem(QString());
        c_unit->addItem(QString());
        c_unit->addItem(QString());
        c_unit->addItem(QString());
        c_unit->setObjectName(QString::fromUtf8("c_unit"));

        gridLayout_2->addWidget(c_unit, 3, 1, 1, 1);

        le_name = new QLineEdit(Dlg_addCommo);
        le_name->setObjectName(QString::fromUtf8("le_name"));

        gridLayout_2->addWidget(le_name, 0, 1, 1, 1);

        label_5 = new QLabel(Dlg_addCommo);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(80, 0));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_5, 4, 0, 1, 1);

        le_Numstock = new QLineEdit(Dlg_addCommo);
        le_Numstock->setObjectName(QString::fromUtf8("le_Numstock"));

        gridLayout_2->addWidget(le_Numstock, 4, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(100, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 2, 1, 1);

        widget = new QWidget(Dlg_addCommo);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btn_save = new QPushButton(widget);
        btn_save->setObjectName(QString::fromUtf8("btn_save"));
        btn_save->setMinimumSize(QSize(120, 30));
        btn_save->setMaximumSize(QSize(120, 30));

        gridLayout->addWidget(btn_save, 0, 0, 1, 1);

        btn_cancel = new QPushButton(widget);
        btn_cancel->setObjectName(QString::fromUtf8("btn_cancel"));
        btn_cancel->setMinimumSize(QSize(120, 30));
        btn_cancel->setMaximumSize(QSize(120, 30));

        gridLayout->addWidget(btn_cancel, 0, 1, 1, 1);


        gridLayout_2->addWidget(widget, 6, 0, 1, 3);

        QWidget::setTabOrder(le_name, le_priceIn);
        QWidget::setTabOrder(le_priceIn, le_priceOut);
        QWidget::setTabOrder(le_priceOut, c_unit);
        QWidget::setTabOrder(c_unit, le_Numstock);
        QWidget::setTabOrder(le_Numstock, c_state);
        QWidget::setTabOrder(c_state, btn_save);
        QWidget::setTabOrder(btn_save, btn_cancel);

        retranslateUi(Dlg_addCommo);

        QMetaObject::connectSlotsByName(Dlg_addCommo);
    } // setupUi

    void retranslateUi(QDialog *Dlg_addCommo)
    {
        Dlg_addCommo->setWindowTitle(QCoreApplication::translate("Dlg_addCommo", "\345\256\266\345\205\267\344\277\241\346\201\257", nullptr));
        c_state->setItemText(0, QCoreApplication::translate("Dlg_addCommo", "\345\234\250\345\224\256", nullptr));
        c_state->setItemText(1, QCoreApplication::translate("Dlg_addCommo", "\344\270\213\346\236\266", nullptr));

        label_2->setText(QCoreApplication::translate("Dlg_addCommo", "\350\264\255\345\205\245\344\273\267\346\240\274", nullptr));
        label->setText(QCoreApplication::translate("Dlg_addCommo", "\345\256\266\345\205\267\345\220\215\347\247\260", nullptr));
        label_4->setText(QCoreApplication::translate("Dlg_addCommo", "\345\215\225    \344\275\215", nullptr));
        label_6->setText(QCoreApplication::translate("Dlg_addCommo", "\347\212\266    \346\200\201", nullptr));
        label_3->setText(QCoreApplication::translate("Dlg_addCommo", "\345\207\272\345\224\256\344\273\267\346\240\274", nullptr));
        c_unit->setItemText(0, QCoreApplication::translate("Dlg_addCommo", "\345\217\252", nullptr));
        c_unit->setItemText(1, QCoreApplication::translate("Dlg_addCommo", "\344\270\252", nullptr));
        c_unit->setItemText(2, QCoreApplication::translate("Dlg_addCommo", "\346\235\241", nullptr));
        c_unit->setItemText(3, QCoreApplication::translate("Dlg_addCommo", "\344\273\266", nullptr));

        label_5->setText(QCoreApplication::translate("Dlg_addCommo", "\345\272\223    \345\255\230", nullptr));
        btn_save->setText(QCoreApplication::translate("Dlg_addCommo", "\344\277\235\345\255\230", nullptr));
        btn_cancel->setText(QCoreApplication::translate("Dlg_addCommo", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dlg_addCommo: public Ui_Dlg_addCommo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_ADDCOMMO_H
