#include "IntException.h"
#include <iostream>
using namespace std;

int convert(string);
int main() {
    string number;
	bool goodflag;

	do {

	  goodflag = true;
	  cout << "enter an integer value ";
	  cin >> number;

	  try{
	     cout << "converted to " << convert(number);
	  }
	  catch(IntException e){
         cout << "Please, digits only " << e.getvalue() << endl;
	     goodflag = false;
	  }

	}while (!goodflag);


     


}