#include "bluedialog.h"

BlueDialog::BlueDialog(QWidget *parent)
    : ColorDialog(parent)
{
}

QColor BlueDialog::getColor()
{
    return Qt::blue;
}
