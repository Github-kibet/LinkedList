#include "LinkedList.h"


int main()
{
	LinkedList list;
	
	list.Insert(0, 1);
	list.Insert(1, 2);
	list.Insert(2, 3);

	cout << list.Retrieve(0) << endl;
	cout << list.Retrieve(1) << endl;
	cout << list.Retrieve(2) << endl;

	list.Insert(1, 4);
	
	cout << list.Retrieve(0) << endl;
	cout << list.Retrieve(1) << endl;
	cout << list.Retrieve(2) << endl;
	cout << list.Retrieve(3) << endl;

	list.Remove(0);
	list.Remove(1);
	list.Remove(2);

	cout << list.Retrieve(0) << endl;

	return 0;
}