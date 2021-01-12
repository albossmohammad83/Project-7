#include <string>
using namespace std;

class IntListException{
public:
	IntListException(string outstr) {
	   out = outstr;	
	}

	string getMsg() {
		return out;
	}

private:
	string out;
};