
#include "VHSVideo.h"
#include "DVDVideo.h"
#include <iostream>
using namespace std;

int main () {

VHSVideo v1("gone with the wind" , 5 , true);
VHSVideo v2("harry potter", 1,true);
DVDVideo v3("lord of the rings" ,3, 'W');

// note that if 'cost' function is not virtual, mondayCost performs incorrectly
v1.printDetails(cout);
cout << " cost " << v1.cost() << endl;
cout << " Monday cost " << v1.mondayCost() << endl;

v2.printDetails(cout);
cout << " cost " << v2.cost()  << endl;
cout << " Monday cost " << v2.mondayCost() << endl;

v3.printDetails(cout);
cout << " cost " << v3.cost()  << endl;
cout << " Monday cost " << v3.mondayCost() << endl;



}