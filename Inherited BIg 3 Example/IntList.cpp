#include "IntList.h"   

    IntList::IntList(){
		data = new int [50];
	    howmany = 0;
		capacity = 50;
	}

	IntList::IntList(int size){
		data = new int [size];
	    howmany = 0;
		capacity = size;
	}

	void  IntList::insert(int value){
		if (howmany == capacity){
           int* temp = new int[capacity* 2];
		   for(int i= 0;  i<= howmany; i++)
			   temp[i] = data[i];
		   capacity = capacity*2;
		   delete[] data;
		   data = temp;
		}
		data[howmany++] = value;
	  
	}
	
	void  IntList::deleteItem(int value) {
	
         int index = 0;
		 while (data[index] != value)
			  index++;

		// for (int pos = index+1;  pos <= howmany-1; pos ++)
			// data[pos-1] = data[pos];
	     data[index] = data[howmany-1];

		  howmany--;
	}

	void IntList::deleteAll(int value) {

       



	}

	bool  IntList::isThere(int value) const{
	     int index = 0;
		 while (index < howmany && data[index] != value)
			  index++;


		return (index != howmany);
	}

	IntList::IntList( const IntList& obj){
        howmany = obj.howmany;
		capacity = obj.capacity;
		data = new int[capacity];
		for(int i = 0; i<howmany; i++)
			data[i] = obj.data[i];

	}



	IntList&  IntList::operator=(const IntList& obj){
        howmany = obj.howmany;
		
		data = new int[capacity];

		if( capacity != obj.capacity){
              delete[] data;
			  data = new int[obj.capacity];
		}


        capacity = obj.capacity;
		for(int i = 0; i<howmany; i++)
			data[i] = obj.data[i];

		return *this;

	}



	ostream& operator<<(ostream& out, const IntList& list){
        for (int i = 0; i< list.howmany ; i++)
			out << list.data[i] << " " ;
		return out;

	}

	