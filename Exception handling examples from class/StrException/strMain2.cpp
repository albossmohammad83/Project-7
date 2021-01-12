#include "strException.h"
#include <iostream>
using namespace std;

int convert(string);
int main() {
    string number;

	
	  cout << "enter an integer value ";
	  cin >> number;

	  try{
	     cout << "converted to " << convert(number);
	  }
	  catch(StrException e){
         cout << "Please, digits only " << e.getvalue() << endl;
	  }




     


}