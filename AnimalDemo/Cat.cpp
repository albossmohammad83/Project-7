#include "Cat.h"

Cat::Cat(string newname, int sz): Animal(newname) {
	//setName(newname);
	size = sz;
}

int Cat::getSize(){
	return size;
}

void Cat::displayName(ostream& out){
    out << "name is " <<getName() << endl;
	out << "size is " << size << endl;

}

void Animal::displayName(ostream& out){
	out << "Animal's name is" << name << endl;
}


void Cat::displayType(ostream& out){
	out << "type is " << "cat";
}