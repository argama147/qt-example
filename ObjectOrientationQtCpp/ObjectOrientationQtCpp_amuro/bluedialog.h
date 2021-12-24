#ifndef BLUEDIALOG_H
#define BLUEDIALOG_H

#include <QDialog>

class BlueDialog : public QDialog
{
    Q_OBJECT
public:
    explicit BlueDialog(QWidget *parent = nullptr);
protected:
    void paintEvent(QPaintEvent *event) override;
};

#endif // BLUEDIALOG_H
