#include "LargeInt.h"

int main () {

   LargeInt list;
   list.insert(55);
   list.insert(34);
   list.insert(99);
   cout << "list is " << list << endl;


   LargeInt list2 = list;
   cout << "list2 is " << list2 << endl;
   list2.insert(606);
   cout << "list is " << list << endl;
   cout << "list2 is " << list2 << endl<< endl;

   LargeInt list3;
   list3 = list;
   cout << "list3 is " << list3 << endl;
   list3.insert(106);
   cout << "list is " << list << endl;
   cout << "list3 is " << list3 << endl;

   cout << "list largest is " << list.getLargeVal() << endl;
   cout << "list2 largest is " << list2.getLargeVal() << endl;
   cout << "list3 largest is " << list3.getLargeVal() << endl;

   


  /* int value;
   IntList mylist(2);    // create w/ capacity of 2
  
    mylist.insert(10);
    mylist.insert(14);
    mylist.insert(16);
    mylist.insert(19);  
	cout << mylist << endl;

	IntList mylist2;

	mylist2 = mylist;
	cout << mylist2 << endl;

      ///delete a value from mylist
	cout << "enter a value to delete " << endl;
	cin >> value;

	if (mylist.isThere(value) )
	   mylist.deleteItem(value);
	else
	   cout << "cannot delete  not there " << endl;

	cout << "mylist " << mylist << endl;
	cout << "mylist2 " << mylist2 << endl;
	*/
}