#pragma once
#include<iostream>
using namespace std;
struct node {
	int Data=0;
	node* Next=nullptr;
};

class LinkedList
{
	node *m_head;
	int m_count;
public:
	LinkedList() { m_head = new node, m_count = 0; }
	~LinkedList() { delete m_head; }
	void Insert(int index,int item);
	void Remove(int index);
	int Retrieve(int index);
	bool isEmpty();
	int Count();
};

