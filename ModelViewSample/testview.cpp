#include "sampledata.h"
#include "testview.h"

#include <QString>

TestView::TestView(QWidget *parent) : MyView(parent)
{
    m_label = new QLabel(this);
    m_label->resize(150, 30);
}


void TestView::updateView(const QModelIndex &index, const QVariant &data)
{
    switch (index.row()) {
    case 0:
        switch (index.column()) {
        case 0:
            m_label->setText(QString::number(data.toInt()));
            break;
        case 1:
            m_label->setText(data.value<SampleData>().data());
            break;
        default:
            break;
        }
        break;
    default:
        break;
    }

}
