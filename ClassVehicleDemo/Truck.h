#include "Vehicle.h"

class Truck : public Vehicle {

private:
	int bedsize;
	bool towPackage;

public:
	Truck();
    Truck(string man, bool tow);
	Truck(string man, int esize);
	Truck(string man, int esize, Person per, bool tow);
    Truck(string man, int esize, int year, int bsz, bool tow);

	void bedsze(int size);    // sets and gets for bedsize
	int getBed() const;
	
	void tow(bool isTow);    // sets and gets for tow package
	bool getTow() const;

	void display(ostream& out)const;

	double getOwnerPrice() const;

	int getWarranty()const;
	
	 friend ostream& operator<<(ostream& out, const Truck& obj);

	


};