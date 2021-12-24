#ifndef REDDIALOG_H
#define REDDIALOG_H

#include <QDialog>

class RedDialog : public QDialog
{
    Q_OBJECT
public:
    explicit RedDialog(QWidget *parent = nullptr);
protected:
    void paintEvent(QPaintEvent *event) override;
};

#endif // REDDIALOG_H
