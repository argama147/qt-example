#ifndef BLUEDIALOG_H
#define BLUEDIALOG_H

#include "colordialog.h"

class BlueDialog : public ColorDialog
{
    Q_OBJECT
public:
    explicit BlueDialog(QWidget *parent = nullptr);
protected:
    QColor getColor() override;
};

#endif // BLUEDIALOG_H
