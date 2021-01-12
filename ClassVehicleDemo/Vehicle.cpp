#include "Vehicle.h"


Vehicle::Vehicle(){
  manufacturer = "Manu not known";
  engine = -1;
  Person p("Unknown");
  owner = p;
  ownerPrice = BASE;
  year = 1800;
}

Vehicle::Vehicle(const string& manu, int esize, const Person& owns) {
 
   manufacturer = manu;
   engine = esize;
   owner = owns;
   year = 1800;
   ownerPrice =BASE;
}
 
//mutator functions
 void Vehicle::setManu(string manu){
		 manufacturer = manu;
 }
	 
 void Vehicle::setEng(int esize){
       engine = esize;
 }

 void Vehicle::setCost(double ownercost) {
	 ownerPrice = ownercost;
 }

void Vehicle::setOwner(const Person& owns){
      owner = owns;   
 }

 void Vehicle::setYear(int ayear){
	 year = ayear;
 }

 // access functions
 string Vehicle::getManu() const{
	   return manufacturer;
 }
     
 int Vehicle::getSize() const {
	 return engine;
 }

 double Vehicle::getOwnerPrice() const{
     return ownerPrice;
 }

 double Vehicle::getLotPrice()const {
    return getOwnerPrice() + getOwnerPrice() * 0.10;
 }
 
 Person Vehicle::getOwner() const {
   return owner;
 }

 int Vehicle::getYear() const {
	 return year;
 }

 void Vehicle::display(ostream& out) const{
   out <<  "\nVehicle manufacturer -" << manufacturer << 
	   "\nYear - " << year <<
	   "\nEngine size - " << engine << "\nOwner: " << owner <<
	   "\nPrice to buyer $" << getLotPrice() << 
		   "\nOwner desired price $ " << getOwnerPrice() << endl;
 
 }

 ostream& operator<<(ostream& out, const Vehicle& obj){
     out <<  "\nVehicle manufacturer -" << obj.manufacturer << 
	   "\nYear - " << obj.year <<
	   "\nEngine size - " << obj.engine << "\nOwner: " << obj.owner <<
	   "\nPrice to buyer $" << obj.getLotPrice() << 
		   "\nOwner desired price $ " << obj.getOwnerPrice() << endl;
	 return out;
 }



 