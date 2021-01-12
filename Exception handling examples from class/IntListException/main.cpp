#include "IntList.h"
#include "StrException.h"
int convert(string digstr);

int main () {

   string strvalue;
   int value;
   IntList mylist(4);    // create w/ capacity of 2
  
   try{

      mylist.insert(10);
       mylist.insert(14);
      mylist.insert(16);
      mylist.insert(19); 
      cout << mylist << endl;

	  //  mylist.insert(199); 
   	
   ///delete a value from mylist
	  cout << "enter a value to delete " << endl;
	  cin >> strvalue;

	  value = convert(strvalue);

      mylist.deleteItem(value);
	}
	catch (IntListException ee) {
       cout << ee.getMsg() << endl;
	}
	catch (StrException x) {
		cout << "can't convert " << x.getvalue() << endl;
	}
   
	
	cout << "mylist " << mylist << endl;

	
}