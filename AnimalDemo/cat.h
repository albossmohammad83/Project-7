#include "Animal.h"

class Cat : public Animal {
private:
	int size;
public:
	Cat(string newname, int sz);
	int getSize();
	void displayName(ostream& out);
	void displayType(ostream& out);
};