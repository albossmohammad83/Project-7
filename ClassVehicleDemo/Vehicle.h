// Used to store Vehicle info for Johnny's Car Consignment
// owner leaves car w/ Johnny, Johnny sells it for 10% more than owner wants

#include <string>
using namespace std;
#include "Person.h"

#ifndef VCLASS
#define VCLASS

const int BASE = 500;   // minimal vehicle owner price
class Vehicle{
public:
	 Vehicle();
	 Vehicle(const string& manu, int esize, const Person& owns);

     void setManu(string manu);
	 void setEng(int esize);
	 void setOwner(const Person& owns);
	 void setYear(int ayear);
	 void setCost(double ownercost);

	 string getManu() const;
     int getSize() const;
	 Person getOwner() const;
	 int getYear() const;
	 virtual double getOwnerPrice() const;       // returnspurchase price that owner want

	 double getLotPrice() const;     // returns price Johnny will sell car for	 
	 virtual void display(ostream& out) const; // output vehicle details

	 void setType(char ty) { type = ty; }
	 char getType() const { return type; }

	 friend ostream& operator<<(ostream& out, const Vehicle& obj);

	 virtual int getWarranty()const =0;   // abstract function

private: 
	string manufacturer;
	int engine;                // engine size
	Person owner;
	int year;
	double ownerPrice;  //price owner wants for car
    char type;      // 'C'  or 'T'
};

#endif






