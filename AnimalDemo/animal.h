#include <string>
using namespace std;

#ifndef ANIMALCLS
#define ANIMALCLS

class Animal {
private:
	string name;
	string type;
public:
	Animal();
	Animal(string name);
	void setName(string newname);
	string getName();
	virtual void displayName(ostream& out);    //virtual function

	virtual void displayType(ostream& out)=0; //pure virtual function 
};

#endif
