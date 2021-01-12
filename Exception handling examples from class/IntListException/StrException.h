
#include <string>
using namespace std;

class StrException{
public:
	StrException(string v) { value = v;}
	string getvalue() {return value;}
private: 
	string value;
	
};