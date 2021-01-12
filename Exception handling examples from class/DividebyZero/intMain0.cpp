#include <iostream>
using namespace std;
#include "IntException.h"


double divide(int quo, int divisor) throw (IntException) ;  

int main () {
   int dividend, divisor;

   cout << "enter dividend and divisor " <<endl;
   cin >> dividend >>divisor;

   try{
      cout << "result is " << divide(dividend, divisor) << endl;
   }

   catch (IntException ex){
     cout << "division could not be completed " << endl;
	 cout << "dividend is " << ex.getvalue1() << endl;
	 cout << "divisor is  " << ex.getvalue2() << endl;
   }


   return 0;
}



