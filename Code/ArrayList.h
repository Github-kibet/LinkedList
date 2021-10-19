#pragma once
class ArrayList
{
	int *m_data;
	int m_count;
	int m_capacity;
public :
	ArrayList(int max) {
		m_data = new int[max],
		m_count = 0, 
		m_capacity = max;
	}
	~ArrayList()
	{
		delete[] m_data;
	}
	void insert(int index, int item);
	void remove(int index);
	int retrieve(int index);
	bool isEmpty();
	bool isFull();
	int getLength();
			
};

