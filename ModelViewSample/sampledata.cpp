#include "sampledata.h"

SampleData::SampleData()
{

}

SampleData::SampleData(const SampleData &obj)
{
    m_data = obj.m_data;
}

QString SampleData::data()
{
    return m_data;
}

void SampleData::setData(const QString &data)
{
    m_data = data;
}
