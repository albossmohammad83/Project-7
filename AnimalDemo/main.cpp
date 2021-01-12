#include "cat.h"
#include "dog.h"
#include <iostream>
using namespace std;

int main() {

  // Animal aobj("fred");
   Cat cobj("sam", 10);
   Dog dobj("cleo");

  // aobj.displayName(cout);
  // cout << endl ;
   cobj.displayName(cout);
   //cobj.Animal::displayName(cout);
   cobj.displayType(cout);
   cout << endl;

   dobj.displayName(cout);
   dobj.displayType(cout);


}