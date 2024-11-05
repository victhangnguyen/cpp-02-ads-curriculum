#include "libs/CH02-Doubly-Linked-Lists/DoublyList.h"
#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main()
{
	DoublyList intList;

	intList.insertFront(5);
	intList.insertFront(4);
	intList.insertFront(3);
	intList.insertFront(2);
	intList.insertFront(1);	

	intList.printForward();
	cout << "\n";
	intList.printReverse();

	cout << endl;
	return 0;
}
