#include "dialog.h"
#include "./ui_dialog.h"
#include "bluedialog.h"
#include "reddialog.h"
#include "yellowdialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButtonBlue_clicked()
{
    showDialog(new BlueDialog);
}


void Dialog::on_pushButtonYellow_clicked()
{
    showDialog(new YellowDialog);
}

void Dialog::on_pushButtonRed_clicked()
{
    showDialog(new RedDialog);
}

void Dialog::showDialog(QDialog *dialog)
{
    connect(dialog, &QDialog::finished, this,
            [=](){
        delete dialog;
    });
    dialog->exec();
}
