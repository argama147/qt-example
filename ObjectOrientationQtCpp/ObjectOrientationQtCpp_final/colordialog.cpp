#include "colordialog.h"

ColorDialog::ColorDialog(QWidget *parent) : QDialog(parent)
{
}

void ColorDialog::paintEvent(QPaintEvent *event)
{
    QPalette palette = this->palette();
    palette.setColor(QPalette::Window, getColor());
    this->setAutoFillBackground(true);
    this->setPalette(palette);
}
