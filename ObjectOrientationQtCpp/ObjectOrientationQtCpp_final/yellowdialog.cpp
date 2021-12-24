#include "yellowdialog.h"

YellowDialog::YellowDialog(QWidget *parent)
    : ColorDialog(parent)
{
}

QColor YellowDialog::getColor()
{
    return Qt::yellow;
}
