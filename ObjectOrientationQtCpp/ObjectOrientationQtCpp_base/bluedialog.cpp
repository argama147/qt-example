#include "bluedialog.h"

BlueDialog::BlueDialog(QWidget *parent) : QDialog(parent)
{
}

void BlueDialog::paintEvent(QPaintEvent *event)
{
    QPalette palette = this->palette();
    palette.setColor(QPalette::Window, Qt::blue);
    this->setAutoFillBackground(true);
    this->setPalette(palette);
}
