#include "VHSVideo.h"

void VHSVideo::setUsed(bool val){
       used = val;
}

bool VHSVideo::getUsed(){
	return used;
}

void VHSVideo::printDetails(ostream& out ){
    out << "Quantity " << getQuantity() << "title " << getTitle() << "Used " << used << endl;
}


double VHSVideo::cost(){
	double baseCost =   Video::cost();	
	if (! used)
		 return baseCost;
	else 
		return baseCost - (.25 * baseCost);
}