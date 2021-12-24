#ifndef COLORDIALOG_H
#define COLORDIALOG_H

#include <QDialog>

class ColorDialog : public QDialog
{
    Q_OBJECT
public:
    explicit ColorDialog(QWidget *parent = nullptr);
protected:
    virtual QColor getColor() = 0;
    void paintEvent(QPaintEvent *event) override;
};

#endif // COLORDIALOG_H
