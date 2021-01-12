#include "StrException.h"
#include <iostream>
using namespace std;


int convert(string) throw (StrException);

int main() {
  string strval;
  int value;
   bool badinput = false;

   do{

     cout << "enter an int " << endl;

     try{
	    badinput = false;
        cin >> strval;
        value = convert(strval);
	    value = value + 5;
        cout << "result is " << value << endl;
     }
     catch (StrException e) {
	     cout << "non digit entered : " << e.getvalue() << endl;
		 badinput = true;
    }

} while (  badinput   );
 
     
}