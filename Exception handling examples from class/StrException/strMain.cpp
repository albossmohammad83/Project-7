#include "StrException.h"
#include <iostream>
using namespace std;

int convert(string);
int main() {
    string number;
     bool errflag;

	do{
      errflag = false;
	  cout << "enter an integer value ";
	  cin >> number;

	  try{
	     cout << "converted to  " << convert(number) << endl;
	  }
	  catch(StrException e){
         cout << "Please, digits only " << e.getvalue() << endl;
		 errflag = true;
	  }

	}while ( errflag );




     


}