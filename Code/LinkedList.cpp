#include "LinkedList.h"

void LinkedList::Insert(int index, int item)
{
#pragma region 예외처리
    if (index > m_count)
    {
        cout << "배열 길이에 비해 Index가 큽니다." << endl;
        return;
    }
    else if (index < 0)
    {
        cout << "Index는 0보다 항상 커야 합니다." << endl;
        return;
    }
#pragma endregion

    if (index == 0)
    {
        m_head->Data = item; 
        if (m_head->Next == nullptr)
        {
            m_head->Next = new node;
        }
    }
    else if (index == m_count)
    {
        node* headtemp = m_head;
        for (int i = 0; i < index; i++)
        {
            headtemp = headtemp->Next;
        }
        headtemp->Next = new node;
        headtemp->Next->Data = item;
    }
    else
    {
        node* headtemp = m_head;
        node* temp;
        for (int i = 0; i < index-1; i++)
        {
            headtemp = headtemp->Next;
        }
        temp = headtemp->Next;
        temp->Data = item;
        headtemp->Next = temp;
    }
    m_count++;
}

void LinkedList::Remove(int index)
{
#pragma region 예외처리
    if (index > m_count)
    {
        cout << "배열 길이에 비해 Index가 큽니다." << endl;
        return;
    }
    else if (index < 0)
    {
        cout << "Index는 0보다 항상 커야 합니다." << endl;
        return;
    }
#pragma endregion
    if (index == 0)
    {
        m_head = m_head->Next;
    }
    else if (index == m_count)
    {
        node* headtemp = m_head;
        for (int i = 0; i < index; i++)
        {
            headtemp = headtemp->Next;
        }
        delete headtemp;
    }
    else
    {
        node* headtemp = m_head;
        node* temp;
        for (int i = 0; i < index - 1; i++)
        {
            headtemp = headtemp->Next;
        }
        temp = headtemp->Next;
        headtemp->Next = temp->Next;
        delete temp;
    }
    m_count--;

}

int LinkedList::Retrieve(int index)
{
#pragma region 예외처리
    if (index > m_count)
    {
        cout << "배열 길이에 비해 Index가 큽니다." << endl;
        return -1;
    }
    else if (index < 0)
    {
        cout << "Index는 0보다 항상 커야 합니다." << endl;
        return -1;
    }
#pragma endregion
    node* headtemp = m_head;
    for (int i = 0; i < index; i++)
    {
        headtemp = headtemp->Next;
    }
    return headtemp->Data;
}


int LinkedList::Count()
{
    return 0;
}

bool LinkedList::isEmpty()
{
    return m_count==0?true:false;
}
