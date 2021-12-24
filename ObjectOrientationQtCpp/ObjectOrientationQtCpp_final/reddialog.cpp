#include "reddialog.h"

RedDialog::RedDialog(QWidget *parent)
    : ColorDialog(parent)
{
}

QColor RedDialog::getColor()
{
    return Qt::red;
}
