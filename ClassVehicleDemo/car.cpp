#include "Car.h"

int Car::getDoors(){
   return doors;
}
void Car::setDoors(int n){
    doors = n;

}

Car::Car(){
   doors = 4; 
   setManu("ford");
   setEng(2);
   Person temp("Jon");
   setOwner(temp);
   setType('C');
}

Car::Car(string m, int eng) {
	setManu(m);
	doors = 2;
	setEng(eng);
	 setType('C');
}

Car::Car(string m, int e, Person p, int d) : Vehicle(m,e,p) {
	doors = d;
	 setType('C');
}

int Car::getWarranty()const{
	 return 5;
}

ostream& operator<<(ostream& out, const Car& obj){

	//out <<  static_cast<Vehicle>(obj);
	obj.Vehicle::display(out);

	out << "Doors" << obj.doors;
	
	return out;
}




