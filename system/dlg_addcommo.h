#ifndef DLG_ADDCOMMO_H
#define DLG_ADDCOMMO_H

#include <QDialog>
#include "commosql.h"

namespace Ui {
class Dlg_addCommo;
}

class Dlg_addCommo : public QDialog
{
    Q_OBJECT

public:
    explicit Dlg_addCommo(QWidget *parent = nullptr);
    ~Dlg_addCommo();


    void setType(bool isAdd, CommoInfo info = {});
private slots:
    void on_btn_save_clicked();

    void on_btn_cancel_clicked();

private:
    Ui::Dlg_addCommo *ui;
    bool m_isAdd;
    CommoInfo m_info;
};

#endif // DLG_ADDCOMMO_H
