#include <string>
#include<iostream>
using namespace std;

#ifndef PERSON_CLS
#define PERSON_CLS

class Person{
   public:
      Person();
	  Person(const string& name);
	  void setName(const string& name);
	  string getName();
	  friend ostream& operator<<(ostream& out, const Person& per);
   private:
	  string name;
};


#endif





