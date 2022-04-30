#ifndef HOMEGUI_H
#define HOMEGUI_H

#include <QMainWindow>
#include <QDebug>
#include <QMessageBox>
#include "ProductGuiWidget.h"
#include "Controller.h"

QT_BEGIN_NAMESPACE
namespace Ui { class HomeGui; }
QT_END_NAMESPACE

class HomeGui : public QMainWindow
{
    Q_OBJECT

public:
    HomeGui(Controller *users, QWidget *parent = nullptr);
    ~HomeGui();

private slots:
    void on_btn1_bar1_signUp_3_clicked();
    void on_btn2_bar1_login_3_clicked();
    void on_btn_login_1_clicked();

    void on_btn_sign_2_clicked();

private:
    void GoToHome();

public:
    Ui::HomeGui *ui;
    ProductGuiWidget *wd;
    Controller *users;
    string Category;
};
#endif // HOMEGUI_H
