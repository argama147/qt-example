#ifndef TESTVIEW_H
#define TESTVIEW_H

#include "myview.h"

#include <QWidget>
#include <QLabel>

class TestView : public MyView
{
    Q_OBJECT
public:
    explicit TestView(QWidget *parent = nullptr);
    void updateView(const QModelIndex &index, const QVariant &data) override;
private:
    QLabel *m_label;
};

#endif // TESTVIEW_H
