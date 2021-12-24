#ifndef YELLOWDIALOG_H
#define YELLOWDIALOG_H

#include "colordialog.h"

class YellowDialog : public ColorDialog
{
    Q_OBJECT
public:
    explicit YellowDialog(QWidget *parent = nullptr);
protected:
    QColor getColor() override;
};

#endif // YELLOWDIALOG_H
