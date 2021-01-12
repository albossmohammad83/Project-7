#include "Car.h"
#include "Truck.h"


int main() {

 const int SIZE = 10;
 int resp;
 string strIn;
 int door, esize;

 Car* cars[SIZE];
 int carNo = 0;

 Truck* trucks[SIZE];
 int truckNo = 0;

 cout << "do you wish to enter a vehicle?  (1-yes, 2-no)" << endl;
 cin >> resp;
 while (resp != 2) {
   cout << "is it a car or a truck(1- car 2- truck " << endl;
   cin >> resp;
   if (resp == 1){
	     cout << "what is the manu" << endl;
		 cin >> strIn;
		 cout << "what is the engine size " << endl;
		 cin >> esize;
		 cout << "what is the doors " << endl;
		 cin >> door;


        cars[carNo]  = new Car(strIn, door);
		cars[carNo]->setEng(esize);

		cout << "just created " << *cars[carNo] << endl;
		carNo++;
   }
    if (resp == 2){    //truck
	     cout << "what is the manu" << endl;
		 cin >> strIn;
		 cout << "what is the engine size " << endl;
		 cin >> esize;
		 cout << "what is the bedsize " << endl;
		 cin >> door;


        trucks[truckNo]  = new Truck(strIn,esize);
		trucks[truckNo]->bedsze(door);

		cout << "just created " << *trucks[truckNo] << endl;
		truckNo++;
   }

   cout << "do you wish to enter a vehicle?  (1-yes, 2-no)" << endl;
   cin >> resp;
 }

  for (int i = 0; i< carNo; i++)
	  cout << *cars[i] << endl;

   for (int i = 0; i< truckNo; i++)
	  cout << *trucks[i] << endl;

   cout << "search for manu " << endl;
   cin >> strIn;

 for (int i = 0; i< carNo; i++)
	if (cars[i]->getManu() == strIn)  
	  cout << *cars[i] << endl;

   for (int i = 0; i< truckNo; i++)
	if (trucks[i]->getManu() == strIn)  
	  cout << *trucks[i] << endl;



  

}  
	 




