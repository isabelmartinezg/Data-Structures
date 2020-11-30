#include "Kitchen.hpp"

Kitchen::Kitchen()
{
}
/*
 * In these three functions the three types of plates stacks are created.
*/
Stack Kitchen::elaborateA(Stack sA)
{
	int n_plates=rand()%16 + 20;
	for(int i=0;i<n_plates;i++)
	{
		sA.push("A");
	}
	return sA;
}
Stack Kitchen::elaborateB(Stack sB)
{
	int n_plates=rand()%16 + 20;
	for(int i=0;i<n_plates;i++)
	{
		sB.push("B");
	}
	return sB;
}
Stack Kitchen::elaborateC(Stack sC)
{
	int n_plates=rand()%16 + 20;
	for(int i=0;i<n_plates;i++)
	{
		sC.push("C");
	}
	return sC;
}
Kitchen::~Kitchen()
{
}

