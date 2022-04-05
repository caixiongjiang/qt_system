#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QCoreApplication>
#include <QKeyEvent>
#include <QFile>
#include <QRandomGenerator>
#include <QMessageBox>
#include <QDebug>
#include "page_login.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    ,m_ptrCommoSql(nullptr)
{
    ui->setupUi(this);

    //登录界面加载样式
    QFile fread;
    fread.setFileName(":/login.css");
    fread.open(QIODevice::ReadOnly);
    QString strLoginQss = fread.readAll();
    m_dlgLogin.setStyleSheet(strLoginQss);

    //主界面加载样式
    fread.close();
    fread.setFileName(":/mainwindow.css");
    fread.open(QIODevice::ReadOnly);
    QString strMainQss = fread.readAll();
    this->setStyleSheet(strMainQss);


    m_dlgLogin.show();
    auto f = [&](){
        this->show();
    };
    connect(&m_dlgLogin,&Page_login::sendLoginSuccess, this, f);
    //加载成功登录的人的姓名
    connect(&m_dlgLogin, SIGNAL(sendData(QString)), this, SLOT(getText(QString)));
    ui->treeWidget->clear();
    ui->treeWidget->setColumnCount(1);
    QStringList l;
    l << "南康家具管理系统";
    QTreeWidgetItem *pf = new QTreeWidgetItem(ui->treeWidget, l);
    ui->treeWidget->addTopLevelItem(pf);

    l.clear();
    l << "订单管理";
    QTreeWidgetItem *p1 = new QTreeWidgetItem(pf, l);

    l.clear();
    l << "商品管理";
    QTreeWidgetItem *p2 = new QTreeWidgetItem(pf, l);

    pf->addChild(p1);
    pf->addChild(p2);

    ui->treeWidget->expandAll();//默认全部展开
    ui->stackedWidget->setCurrentIndex(0);//默认显示stackedWidget

    m_ptrCommoSql = commoSql::getinstance();
    //从数据库获取表格数据
    updateTable();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_exit_clicked()
{
    exit(1);
}

void MainWindow::on_btn_simulation_clicked()
{
    QRandomGenerator g;
    g.seed(0);

    QList<CommoInfo> l;
    //制作1000条学生数据
    for(int i = 0; i < 1000; ++i)
    {
        CommoInfo info;
        auto inPrice = g.bounded(200,601);
        int outPrice = 0;
        outPrice = (int)inPrice + 100;
        info.priceIn = (int)inPrice;
        info.priceOut = outPrice;
        QString str1 = "只";
        QString str2 = "在售";
        info.unit = str1;
        info.state = str2;
        if(i == 0)
        {
            info.name = QString("豪华被单%1号").arg(i % 200);
            info.stockNum = 8;
        }
        else if(i % 3)
        {
            info.name = QString("真皮沙发%1号").arg(i % 200);
            info.stockNum = 15;
        }
        else if(i % 7)
        {
            info.name = QString("高端桌子%1号").arg(i % 200);
            info.stockNum = 16;
        }
        else if(i % 2)
        {
            info.name = QString("丝滑床单%1号").arg(i % 200);
            info.stockNum = 17;
        }
        else
        {
            info.name = QString("熊猫枕头%1号").arg(i % 200);
            info.stockNum = 25;
        }
        //m_ptrCommoSql->addCommo(info);
        l.append(info);
    }
    m_ptrCommoSql->addCommo(l);
    updateTable();
}

void MainWindow::on_btn_add_clicked()
{
    //加载样式
    QFile fread;
    fread.setFileName(":/login.css");
    fread.open(QIODevice::ReadOnly);
    QString strLoginQss = fread.readAll();
    m_dlgAddCommo.setStyleSheet(strLoginQss);

    //模态对话框
    m_dlgAddCommo.setType(true);
    m_dlgAddCommo.exec();
    updateTable();
}

void MainWindow::on_btn_clear_clicked()
{
    m_ptrCommoSql->clearCommoTable();
    updateTable();
}

void MainWindow::updateTable()
{
    //清空信息（为了更新信息）
    ui->tableWidget->clear();
    //设置表头内容
    ui->tableWidget->setColumnCount(8);//总共有8列
    QStringList l;
    l << "序号" << "id" <<  "名称" << "购入价格" << "出售价格" << "单位" << "库存" << "状态";
    ui->tableWidget->setHorizontalHeaderLabels(l);

    //只能选中行
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    //使得表格不可编辑
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

    auto cnt = m_ptrCommoSql->getCommoCnt();//获取家具种类的数量
    ui->lb_cnt->setText(QString("家具种类数量：%1").arg(cnt));
    QList<CommoInfo> lCommodity = m_ptrCommoSql->getPageCommo(0, cnt);//返回所有页数的学生
    /*向界面填充数据*/
    ui->tableWidget->setRowCount(cnt);
    for(int i = 0; i < lCommodity.size(); ++i)
    {
        //如果为数字必须转换为string来显示
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(QString::number(i + 1)));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(QString::number(lCommodity[i].id)));
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem(lCommodity[i].name));
        ui->tableWidget->setItem(i, 3, new QTableWidgetItem(QString::number(lCommodity[i].priceIn)));
        ui->tableWidget->setItem(i, 4, new QTableWidgetItem(QString::number(lCommodity[i].priceOut)));
        ui->tableWidget->setItem(i, 5, new QTableWidgetItem(lCommodity[i].unit));
        ui->tableWidget->setItem(i, 6, new QTableWidgetItem(QString::number(lCommodity[i].stockNum)));
        ui->tableWidget->setItem(i, 7, new QTableWidgetItem(lCommodity[i].state));
    }
}

void MainWindow::on_btn_del_clicked()
{
    //i为当前选中的行的信息
    int i = ui->tableWidget->currentRow();
    if(i >= 0)
    {
        int id = ui->tableWidget->item(i, 1)->text().toUInt();
        m_ptrCommoSql->delCommo(id);
    }
    updateTable();
    QMessageBox::information(nullptr, "信息", "删除成功");
}

void MainWindow::on_btn_update_clicked()
{
    CommoInfo info;
    int i = ui->tableWidget->currentRow();
    if(i >= 0)
    {
        info.id = ui->tableWidget->item(i, 1)->text().toUInt();
        //qDebug() << QString::number(info.id);
        info.name = ui->tableWidget->item(i, 2)->text();
        info.priceIn = ui->tableWidget->item(i, 3)->text().toUInt();
        info.priceOut= ui->tableWidget->item(i, 4)->text().toUInt();
        info.unit= ui->tableWidget->item(i, 5)->text();
        info.stockNum = ui->tableWidget->item(i, 6)->text().toUInt();
        info.state = ui->tableWidget->item(i, 7)->text();
        //修改为update模式
        m_dlgAddCommo.setType(false, info);
        //模态对话框
        m_dlgAddCommo.exec();
    }
    updateTable();
}

void MainWindow::on_btn_search_clicked()
{
    QString strFilter = ui->le_search->text();//搜索框输入的内容

    if(strFilter.isEmpty())
    {
        QMessageBox::information(nullptr, "警告", "名字筛选为空");
        updateTable();
        return;
    }

    //清空信息（为了更新信息）
    ui->tableWidget->clear();
    //设置表头内容
    ui->tableWidget->setColumnCount(8);//总共有8列
    QStringList l;
    l << "序号" << "id" <<  "名称" << "购入价格" << "出售价格" << "单位" << "库存" << "状态";
    ui->tableWidget->setHorizontalHeaderLabels(l);

    //只能选中行
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    //使得表格不可编辑
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

    auto cnt = m_ptrCommoSql->getCommoCnt();//获取家具种类的数量
    ui->lb_cnt->setText(QString("家具种类数量：%1").arg(cnt));
    QList<CommoInfo> lCommodity = m_ptrCommoSql->getPageCommo(0, cnt);//返回所有页数的学生
    /*向界面填充数据*/
    int index = 0;
    for(int i = 0; i < lCommodity.size(); ++i)
    {
        if(!lCommodity[i].name.contains(strFilter))//如果不包含
        {
            continue;
        }
        //如果为数字必须转换为string来显示
        ui->tableWidget->setItem(index, 0, new QTableWidgetItem(QString::number(index + 1)));
        ui->tableWidget->setItem(index, 1, new QTableWidgetItem(QString::number(lCommodity[i].id)));
        ui->tableWidget->setItem(index, 2, new QTableWidgetItem(lCommodity[i].name));
        ui->tableWidget->setItem(index, 3, new QTableWidgetItem(QString::number(lCommodity[i].priceIn)));
        ui->tableWidget->setItem(index, 4, new QTableWidgetItem(QString::number(lCommodity[i].priceOut)));
        ui->tableWidget->setItem(index, 5, new QTableWidgetItem(lCommodity[i].unit));
        ui->tableWidget->setItem(index, 6, new QTableWidgetItem(QString::number(lCommodity[i].stockNum)));
        ui->tableWidget->setItem(index, 7, new QTableWidgetItem(lCommodity[i].state));
        ++index;
    }
    ui->tableWidget->setRowCount(index);
}

void MainWindow::getText(QString l)
{
    ui->lb_user->setText(l);
}
