#include "dlg_addcommo.h"
#include "ui_dlg_addcommo.h"
#include <QFile>
#include <QMessageBox>

Dlg_addCommo::Dlg_addCommo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dlg_addCommo)
{
    ui->setupUi(this);
}

Dlg_addCommo::~Dlg_addCommo()
{
    delete ui;
}

void Dlg_addCommo::setType(bool isAdd, CommoInfo info)
{
    m_isAdd = isAdd;
    m_info = info;
    ui->le_name->setText(m_info.name);
    ui->le_priceIn->setText(QString::number(m_info.priceIn));
    ui->le_priceOut->setText(QString::number(m_info.priceOut));
    ui->c_unit->setCurrentText(m_info.unit);
    ui->le_Numstock->setText(QString::number(m_info.stockNum));
    ui->c_state->setCurrentText(m_info.state);
}

void Dlg_addCommo::on_btn_save_clicked()
{
    //CommoInfo类
    CommoInfo info;
    //数据库指针
    auto ptr = commoSql::getinstance();
    //获取输入的值
    info.id = m_info.id;//因为id不能修改，这里的id取的是成员变量m_info的值
    info.name = ui->le_name->text();
    info.priceIn = ui->le_priceIn->text().toUInt();
    info.priceOut = ui->le_priceOut->text().toUInt();
    info.unit = ui->c_unit->currentText();
    info.stockNum = ui->le_Numstock->text().toUInt();
    info.state = ui->c_state->currentText();

    if(m_isAdd)
    {
        ptr->addCommo(info);
    }
    else
    {
        ptr->updateCommoInfo(info);
    }
    QMessageBox::information(nullptr, "信息", "保存成功");
    this->hide();
}

void Dlg_addCommo::on_btn_cancel_clicked()
{
    this->hide();
}
