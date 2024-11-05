#ifndef SINGLYLIST_H
#define SINGLYLIST_H

#include<iostream>
#include <string> // Need to include for nullptr.			

class Node
{
public:
	Node() : data(0), next(nullptr) {}
	Node(int theData, Node *newNext) 
		: data(theData), next(newNext){}
	Node* getNext() const { return next; }
	int getData( ) const { return data; }
	void setData(int theData) { data = theData; }
	void setNext(Node *newNext) { next = newNext; }
	~Node(){}
private:
	int data;		
	Node *next; // Pointer that points to next node.
};


class SinglyList
{
public:
	SinglyList() : first(nullptr), count(0) {}

	void insertFront(int);	

	void print() const;

	void clearList();
	~SinglyList();

private:
	Node *first;
	// Pointer to point to the first node in the list.
	int count;
	// Variable to keep track of number of nodes in the list.
};

#endif