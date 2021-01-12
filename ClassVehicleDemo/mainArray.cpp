#include "Car.h"
#include "Truck.h"


int main() {

 const int SIZE = 50;
 int resp;
 string strIn;
 int door, esize;

 Vehicle*  vehicles[SIZE];
 int vehicleNo = 0;

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


        vehicles[vehicleNo]  = new Car(strIn, door);
		vehicles[vehicleNo]->setEng(esize);

		cout << "just created " << *vehicles[vehicleNo] << endl;
		vehicleNo++;
   }
    if (resp == 2){    //truck
	     cout << "what is the manu" << endl;
		 cin >> strIn;
		 cout << "what is the engine size " << endl;
		 cin >> esize;
		 cout << "what is the bedsize " << endl;
		 cin >> door;


        vehicles[vehicleNo]  = new Truck(strIn,esize);
		((Truck *)vehicles[vehicleNo])->bedsze(door);

		cout << "just created " << *vehicles[vehicleNo] << endl;
		vehicleNo++;
   }

   cout << "do you wish to enter a vehicle?  (1-yes, 2-no)" << endl;
   cin >> resp;
 }

 /*for (int i = 0; i< vehicleNo; i++){
	 if ( vehicles[i]->getType() == 'C')  // vehicle[i] is a car
	  cout << *((Car *)vehicles[i]) << endl;
	 else if ( vehicles[i]->getType() == 'T' )  // vehicle[i] is a truck
		 cout << * ((Truck *)vehicles[i]) << endl;*/

 cout << "print out all trucks with bedsize > 500 " << endl;
    for (int i = 0; i< vehicleNo; i++)
		if ( vehicles[i]->getType() == 'T' )
			if (((Truck *)vehicles[i])->getBed() > 500)
				  vehicles[i]->display(cout);

			  


 
	  // vehicles[i]->display(cout); 

 
/*
   cout << "search for manu " << endl;
   cin >> strIn;

 for (int i = 0; i< vehicleNo; i++)
	if (vehicles[i]->getManu() == strIn)  
	  cout << *vehicles[i] << endl;

 */  



  

}  
	 




