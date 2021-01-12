
#include "Truck.h"


int main() {

       // create simple inventory
   Person per1("Joe");   
   Vehicle t1("Ford", 500, per1);
   Truck trk("GMC", 450, 2001, 1000, true);

   t1.setCost(3000);
   t1.setYear(1999); 
  
   t1 = trk;
   t1.display(cout);
   trk.display(cout);
  


}  
	 




