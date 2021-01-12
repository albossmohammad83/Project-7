#include <string>
using namespace std;

class IntException{
public:
	IntException(string v) { value = v;	}
	string getvalue() {return value;}
private: 
	string value;
};