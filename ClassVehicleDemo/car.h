#include "Vehicle.h"

class Car :public Vehicle   {
private:
	 int doors;

public:
	Car();
	Car(string m, int d);
	Car(string m, int e, Person p, int d);

	int getDoors();
	void setDoors(int);

   friend ostream& operator<<(ostream& out, const Car& obj);
	
   int getWarranty()const;
};