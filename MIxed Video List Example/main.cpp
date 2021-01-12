
#include "VHSVideo.h"
#include "DVDVideo.h"
#include <iostream>
using namespace std;

int main () {
const int SIZE = 4;

Video* collection[SIZE];


VHSVideo* v1 =new VHSVideo("gone with the wind" , 5 , true);
VHSVideo* v2 = new VHSVideo("harry potter", 1,true);
DVDVideo* v3  =  new DVDVideo("lord of the rings" ,3, 'W');
DVDVideo* v4  =  new DVDVideo("xxx" ,3, 'F');

collection[0] = v1;
collection[1] = v2;
collection[2] = v3;
collection[3] = v4;


for (int i = 0; i< SIZE; i++){
	 collection[i]->printDetails(cout);
	 cout << endl;
}

string sought = "gone wind";

bool found = false;

for (int i = 0; i < SIZE; i++)
   if (collection[i]->getTitle() == sought)
	     found = true;

if (found)
   cout << "found it" << endl;
else
   cout << "didni't find it " << endl;

}