#include "yellowdialog.h"

YellowDialog::YellowDialog(QWidget *parent) : QDialog(parent)
{
}

void YellowDialog::paintEvent(QPaintEvent *event)
{
    QPalette palette = this->palette();
    palette.setColor(QPalette::Window, Qt::yellow);
    this->setAutoFillBackground(true);
    this->setPalette(palette);
}
