#ifndef MYMODEL_H
#define MYMODEL_H

#include <QAbstractItemModel>
#include <QObject>

class SampleData;

class MyModel : public QAbstractItemModel
{
    Q_OBJECT
public:
    explicit MyModel(QObject *parent = nullptr);

    QModelIndex index(int row, int column, const QModelIndex &parent = QModelIndex()) const override;
    QModelIndex parent(const QModelIndex &child) const override;
    int rowCount(const QModelIndex &parent) const override;
    int columnCount(const QModelIndex &parent) const override;
    QVariant data(const QModelIndex &index, int role) const override;
    bool setData(const QModelIndex &index, const QVariant &value, int role = Qt::EditRole) override;

    void setTestData(int data);
    void setSampleData(const SampleData& data);
private:
    QMap<QModelIndex, QVariant> m_data;
public:
};

#endif // MYMODEL_H
