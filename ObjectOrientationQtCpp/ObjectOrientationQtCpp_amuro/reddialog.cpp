#include "reddialog.h"

RedDialog::RedDialog(QWidget *parent) : QDialog(parent)
{
}

void RedDialog::paintEvent(QPaintEvent *event)
{
    QPalette palette = this->palette();
    palette.setColor(QPalette::Window, Qt::red);
    this->setAutoFillBackground(true);
    this->setPalette(palette);
}
