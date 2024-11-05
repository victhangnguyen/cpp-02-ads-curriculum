#include "libs/CH01-Singly-Linked-Lists/SinglyList.h"
#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
  SinglyList myList;

  myList.insertFront(8);
  myList.insertFront(7);
  myList.insertFront(4);
  myList.insertFront(2);

  cout << "Inserted: 2 4 7 8\n";
  cout << "List is: ";
  myList.print();
  cout << "\n";

  myList.clearList();
  // The list object still exists,
  // but it has no elements.

  cout << "\nPrint the list after emptying it...";
  cout << "\nList is: ";
  myList.print();
  cout << "\n";

  cout << endl;
  return 0;
}
