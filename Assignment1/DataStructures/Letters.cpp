#include "Letters.hpp"
#include <stdlib.h>
#include <stdio.h>
using namespace std;

Letters::Letters()
{
	//Letters adition to both constant arrays
	VO[0]="A";
	VO[1]="E";
	VO[2]="I";
	VO[3]="O";
	VO[4]="U";
	
	CO[0]="B";
	CO[1]="C";
	CO[2]="D";
	CO[3]="F";
	CO[4]="G";
	CO[5]="H";
	CO[6]="J";
	CO[7]="K";
	CO[8]="L";
	CO[9]="M";
	CO[10]="N";
	CO[11]="P";
	CO[12]="Q";
	CO[13]="R";
	CO[14]="S";
	CO[15]="T";
	CO[16]="V";
	CO[17]="W";
	CO[18]="X";
	CO[19]="Y";
	CO[20]="Z";
}
std::string* Letters::getVO()
{
	return VO;
}
std::string* Letters::getCO()
{
	return CO;
}
Letters::~Letters()
{
}


