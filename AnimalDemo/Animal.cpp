#include "Animal.h"


Animal::Animal(){
    name = "unknown";
}


Animal::Animal(string newname){
   name = newname; 
}
	
void Animal::setName(string newname){
   name = newname;
}
string Animal::getName(){
    return name;
}
	
void Animal::displayName(ostream& out){
   out << "Animal's name is" << name << endl;
}

