#include <iostream>
#include "DivException.h"
using namespace std;


double divide(int quo, int divisor);

int main () {
   int dividend, divisor;
   bool errFlag;
   do{
	   errFlag = false;
       try{
          cout << "enter dividend and divisor " <<endl;
          cin >> dividend >>divisor;
          cout << "result is " << divide(dividend, divisor) << endl;
       }
       catch (DivException) {
          errFlag = true;
       }
   } while (errFlag == true);
   return 0;
}



