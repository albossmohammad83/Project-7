#include "Video.h"

void Video::setQuantity( int howmany){
	 quantity = howmany;
}

string Video::getTitle()const{
     return title;
}
int Video::getQuantity() const{
	 return quantity;
}

void Video::setTitle(string name) {
	title = name;
}

 

 double Video::cost(){
              return 5.00;
		 }

 double Video::mondayCost(){
     return cost() * .5;
 }