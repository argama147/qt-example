#include "mymodel.h"
#include "sampledata.h"
#include <QVariant>

MyModel::MyModel(QObject *parent) : QAbstractItemModel(parent)
{

}


QModelIndex MyModel::index(int row, int column, const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return createIndex(row, column);
}

QModelIndex MyModel::parent(const QModelIndex &child) const
{
    Q_UNUSED(child);
    return QModelIndex();
}

int MyModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return 1;
}

int MyModel::columnCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return 2;
}

QVariant MyModel::data(const QModelIndex &index, int role) const
{
    Q_UNUSED(role);
    if (index.isValid()) {
        return m_data[index];
    }
    return QVariant();
}


bool MyModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
    Q_UNUSED(role);
    if (index.isValid()) {
        m_data[index] = value;
        emit dataChanged(index, index);
        return true;
    }
    return false;
}

void MyModel::setTestData(int data)
{
    setData(index(0, 0), QVariant(data));
}

void MyModel::setSampleData(const SampleData &data)
{
    setData(index(0, 1), QVariant::fromValue(data));
}
