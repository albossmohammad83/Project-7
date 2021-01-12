#include "Dog.h"

Dog::Dog(string newname): Animal(newname){}


void Dog::displayName(ostream& out){
	out << "this is a dog " << endl;
	Animal::displayName(out);
}

void Dog::displayType(ostream& out){
   out << "type " << "dog" << endl;
}