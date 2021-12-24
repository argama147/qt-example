#ifndef REDDIALOG_H
#define REDDIALOG_H

#include "colordialog.h"

class RedDialog : public ColorDialog
{
    Q_OBJECT
public:
    explicit RedDialog(QWidget *parent = nullptr);
protected:
    QColor getColor() override;
};

#endif // REDDIALOG_H
