#include "registerdialog.h"
#include "ui_registerdialog.h"

RegisterDialog::RegisterDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegisterDialog)
{
    ui->setupUi(this);
    //lineEdit->setEchoMode(QLineEdit::Password);//输入的时候就显示圆点
    //lineEdit->setEchoMode(QLineEdit::PasswordEchoOnEdit);//输入时显示数字，失去焦点时显示圆点
}

RegisterDialog::~RegisterDialog()
{
    delete ui;
}
