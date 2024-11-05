#include "SinglyList.h"

using namespace std;

void SinglyList::insertFront(int newData)
{	
	first = new Node(newData, first);
	++count;
}

void SinglyList::print() const
{
	if (first == nullptr) 
	// Check if the list is empty.
	// You can also use: if (count == 0)
		cerr << "List is empty.";  
		// Use cerr, instead of cout. Why?
	else
	{
        	Node *current = first;   
		// Create a pointer to traverse the list.		
		// This pointer will point to the first node in the list.

		while (current != nullptr)	
		// While the current pointer is NOT a nullptr,
		// that is, while the current pointer has not reached  
		// the end of the list.
		{	                        
			// Output the data. 
			cout << current->getData() << " "; 
			// Move the pointer current forward.
			current = current->getNext();                         
		}		
	}
}

// This function does not delete the 
// list object; it ONLY deletes the nodes.
void SinglyList::clearList()
{ 	
	Node  *temp = first; 	
	// Pointer to delete the node, which	
	// starts by pointing to the first node.
	
	while (first != nullptr)
	{
		first = first->getNext();
		delete temp;
		temp = first;
	}

	// Update the count outside the loop.
   	count = 0;
}

SinglyList::~SinglyList()
{
	if (first != nullptr)
		 clearList();
}