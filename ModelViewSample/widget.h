#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class MyModel;

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_setTestData1Button_clicked();
    void on_setSampleDataButton_clicked();

private:
    Ui::Widget *ui;
    MyModel *model;
};

#endif // WIDGET_H
