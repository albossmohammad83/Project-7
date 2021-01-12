#include "StrException.h"
#include <cctype>
#include <string>
using namespace std;



int convert(string digstr) throw (StrException){
    int val = 0;
    for (int i = 0; i< (int)digstr.length(); i++) 
		if(isdigit(digstr[i]) ){
		   val = val * 10 + digstr[i]- '0';
		}
	   else 
		 throw StrException(digstr);

	 return val;

}