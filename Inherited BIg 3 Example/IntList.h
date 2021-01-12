#include <iostream>
using namespace std;

class IntList {
public:
	 // creates empty IntList with initial capacity of 50
	IntList();

	~IntList() {  delete[] data;         }
	
	// creates empty IntList with initial capacity of 'size'
	IntList(int size);

	IntList( const IntList& obj);

	IntList& operator=(const IntList& obj);

	// insert 'value' into the list
	// if the list is full, capacity doubles
	void insert(int value);

	// deletes first occurrance of 'value' from the list
	// precondition:  at least one occurrance of value is in the list
	void deleteItem(int value);

	// delete all occurances of value from the list
	void deleteAll(int value);

	// determines if 'value' is in the list
	bool isThere(int value) const;

	// for output of IntList object to an ostream
	friend ostream& operator<<(ostream& out, const IntList& list);

	protected:
	int *data;          //storage for int values
	int howmany;           //number of int values currently stored
	int capacity;          //current capacity of list

};
