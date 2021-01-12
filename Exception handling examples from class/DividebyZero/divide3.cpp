#include "IntException.h"


double divide(int dividend, int divisor) throw (IntException){
   
	if (divisor == 0)
		 throw IntException(dividend, divisor);

	 return dividend/(double) divisor;

}