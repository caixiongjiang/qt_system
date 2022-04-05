#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "page_login.h"
#include "commosql.h"
#include "dlg_addcommo.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_exit_clicked();

    void on_btn_simulation_clicked();

    void on_btn_add_clicked();

    void on_btn_clear_clicked();

    void on_btn_del_clicked();

    void on_btn_update_clicked();

    void on_btn_search_clicked();

    void getText(QString l);

private:
    //界面刷新
    void updateTable();

private:
    Ui::MainWindow *ui;
    Page_login m_dlgLogin;
    commoSql *m_ptrCommoSql;
    Dlg_addCommo m_dlgAddCommo;
    QString m_username;
};
#endif // MAINWINDOW_H
