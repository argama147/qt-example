#include "widget.h"
#include "ui_widget.h"
#include "mymodel.h"
#include "sampledata.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    model = new MyModel(this);
    ui->widget->setModel(model);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_setTestData1Button_clicked()
{
    int data = 100;
    model->setTestData(data);
}

void Widget::on_setSampleDataButton_clicked()
{
    SampleData sampleData;
    sampleData.setData(QString("test"));
    model->setSampleData(sampleData);
}
