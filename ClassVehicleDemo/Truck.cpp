#include "Truck.h"

Truck::Truck() {     //Vehicle() is called
  bedsize = -1;
  towPackage = false;

  //setYear(1800);
 // Person p("unknown");
 // setOwner(  p  );
 // setManu("unknown");
 // setEng(-1);
  setCost(0.0);
  setType('T');

}

Truck::Truck(string man, bool istow): bedsize(-1), towPackage(istow){
 // bedsize = -1;
 // towPackage = istow;
  setManu(man);
  setCost(0.0);
    setType('T');
}

Truck::Truck(string man, int esize): Vehicle(man, esize, Person("noname")){
     bedsize = -1;
	 towPackage = false;
	   setType('T');
}


Truck::Truck(string man, int esize, Person per, bool tow): Vehicle(man, esize, per){
	 bedsize = -1;
	 towPackage = tow;
	   setType('T');
}


Truck::Truck(string man, int esize, int iyear, int bsz, bool tow):Vehicle(man,esize,Person("unknown1")){
   bedsize = bsz;
  towPackage = tow;
    setType('T');

 setYear(iyear);
 // Person p("unknown");
 // setOwner(  p  );
 // setManu(man);
 // setEng(esize);
  setCost(0.0);


}
void Truck::bedsze(int size){
	bedsize = size;
}

int Truck::getBed  ()  const{
	return bedsize;}

void Truck::tow(bool isTow){
    towPackage = isTow;
}

bool Truck::getTow()  const{ 
	return towPackage;
}



void Truck::display(ostream& out)const  {
	Vehicle::display(out);

   out << "bedsize " << bedsize << endl;
   out << "towPackage " << towPackage << endl;

}

ostream& operator<<(ostream& out, const Truck& obj){

	//out <<  static_cast<Vehicle>(obj);
	obj.Vehicle::display(out);

	out << "Bedsize " << obj.bedsize;
	out << "Tow Package? " << obj.towPackage;
	return out;
}

double Truck::getOwnerPrice()const {
	return Vehicle::getOwnerPrice() + 10;
	}

int Truck::getWarranty()const{
	return 10;}