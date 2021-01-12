#include "Video.h"


class VHSVideo: public Video {
private:
	bool used;
public:

	VHSVideo(): Video() { }

	VHSVideo(string name, int number, bool use): Video(name,number) , used(use){ }


	void setUsed(bool);
	bool getUsed();

	void printDetails(ostream& out );
	double cost() ;
};