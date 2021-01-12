#include "Animal.h"

class Dog : public Animal {

public:
	Dog(string newname);
	void displayName(ostream& out);
	void displayType(ostream& out);

};