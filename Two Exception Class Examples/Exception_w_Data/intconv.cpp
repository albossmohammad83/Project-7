#include "IntException.h"
#include <cctype>
using namespace std;



int convert(string digstr) throw (IntException){
	int val = 0;
    for (int i = 0; i< (int)digstr.length(); i++) 
		if(isdigit(digstr[i]) ){
		   val = val * 10 + digstr[i]- '0';
		}
	   else 
		 throw IntException(digstr);

	 return val;

}