#include "myview.h"
#include <QLabel>
#include <QDebug>

MyView::MyView(QWidget *parent) : QAbstractItemView(parent)
{
}


QRect MyView::visualRect(const QModelIndex &index) const
{
    Q_UNUSED(index);
    return QRect(0, 0, 300, 200);
}

void MyView::scrollTo(const QModelIndex &index, ScrollHint hint)
{
    Q_UNUSED(index);
    Q_UNUSED(hint);
}

QModelIndex MyView::indexAt(const QPoint &point) const
{
    Q_UNUSED(point);
    Qt:
    return QModelIndex();
}

QModelIndex MyView::moveCursor(CursorAction cursorAction, Qt::KeyboardModifiers modifiers)
{
    Q_UNUSED(cursorAction);
    Q_UNUSED(modifiers);
    return QModelIndex();
}

int MyView::horizontalOffset() const
{
    return 0;
}

int MyView::verticalOffset() const
{
    return 0;
}

bool MyView::isIndexHidden(const QModelIndex &index) const
{
    Q_UNUSED(index)
    return false;
}

void MyView::setSelection(const QRect &rect, QItemSelectionModel::SelectionFlags command)
{
    Q_UNUSED(rect);
    Q_UNUSED(command);
}

QRegion MyView::visualRegionForSelection(const QItemSelection &selection) const
{
    Q_UNUSED(selection);
    return QRegion();
}


void MyView::dataChanged(const QModelIndex &topLeft, const QModelIndex &bottomRight, const QVector<int> &roles)
{
    Q_UNUSED(bottomRight);
    Q_UNUSED(roles);
    //モデルからデータを取得し、表示内容を更新する.
    updateView(topLeft, model()->data(topLeft));
}
