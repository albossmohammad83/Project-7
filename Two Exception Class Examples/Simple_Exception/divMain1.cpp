
#include "DivException.h"


double divide(int quo, int divisor) throw (DivException);

int main () {
   int dividend, divisor;
   cout << "enter dividend and divisor " <<endl;
   cin >> dividend >>divisor;

   try{
       cout << "result is " << divide(dividend, divisor) << endl;

   }
   catch ( DivException ) {
      divisor = 5;
	  cout << "division will be done using divisor of 5 " << endl;
      cout << "result is " << divide(dividend, divisor) << endl;
   }

   return 0;
}



