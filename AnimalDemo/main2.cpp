#include "cat.h"
#include "dog.h"
#include <iostream>
using namespace std;

int main() {
   
	Animal*  zoo[5]; 

	zoo[0] =  new Cat("fred" , 5);
	zoo[1] =  new Dog("sam");
    zoo[2] = new Cat("Pearl", 15);

	for (int i = 0;  i<3; i++){
		zoo[i]->displayType(cout);
		zoo[i]->displayName(cout);
	}





}