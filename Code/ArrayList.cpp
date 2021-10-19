#include "ArrayList.h"

void ArrayList::insert(int index, int item)
{
    if (index<m_count)
    {
        m_data[index] = item;
    }
    else
    {
        for (int i = m_count; i >= index; i--)
        {
            m_data[i + 1] = m_data[i];
        }
        m_data[index] = item;
    }

    m_count++;
}

void ArrayList::remove(int index)
{
    for (int i = index; i < m_count; i++)
    {
        m_data[i] = m_data[i+1];
    }
    m_count--;
}

int ArrayList::retrieve(int index)
{
    return m_data[index];
}

bool ArrayList::isEmpty()
{
    return m_count==0?true:false;
}

bool ArrayList::isFull()
{
    return m_count==m_capacity?true:false;
}

int ArrayList::getLength()
{
    return m_count;
}
