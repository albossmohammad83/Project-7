#include "DivException.h"


double divide(int dividend, int divisor) throw (DivException){
                if (divisor == 0)
		 throw DivException();
	 return dividend/(double) divisor;

}