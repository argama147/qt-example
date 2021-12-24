#ifndef YELLOWDIALOG_H
#define YELLOWDIALOG_H

#include <QDialog>

class YellowDialog : public QDialog
{
    Q_OBJECT
public:
    explicit YellowDialog(QWidget *parent = nullptr);
protected:
    void paintEvent(QPaintEvent *event) override;
};

#endif // YELLOWDIALOG_H
