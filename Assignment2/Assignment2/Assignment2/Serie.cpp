#include "Serie.hpp"
#include <iostream>
using namespace std;
Serie::Serie()
{
}
//Funtion that starts in the start of a serie and generate all the numbers of the serie, one by one, inserting them on the Data Structures
void Serie::generateSerie(hashTable* hash,List* l)
{
	int x=start;
	while(x<=end)
	{
		//cout<<x<<" " ;
		hash->insert(x);
		l->insert(x);
		x=x+step;
	}
}
void Serie::setStart(int n)
{
	start=n;
}
void Serie::setEnd(int n)
{
	end=n;
}
void Serie::setStep(int n)
{
	step=n;
}
int Serie::getStart()
{
	return start;
}
int Serie::getEnd()
{
	return end;
}
int Serie::getStep()
{
	return step;
}
Serie::~Serie()
{
}

