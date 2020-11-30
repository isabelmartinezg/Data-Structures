#include "clientGenerator.hpp"
#include <iostream>
#include <time.h>
clientGenerator::clientGenerator(Stack sc1,Stack sv1,Stack sc2,Stack sv2)
{
	STCO1=sc1;
	STCO2=sc2;
	STVO1=sv1;
	STVO2=sv2;
}
Queue clientGenerator::generateClient(Queue q)
//Client generation, random number between 120 and 150 is created and then added to the Queue provided
{
	int n=rand()%30 + 120;
	for (int i=0;i<n;i++)
	{
		Client c;
		std::string name = STCO1.pop()+STVO1.pop()+STCO2.pop()+STVO2.pop();
		c.createClient(name,i+1);
		cout<<"Name: "<<c.getName()<<", ID: "<<c.getNumber()<<endl;
		q.enqueue(c);
	}
	return q;
}
clientGenerator::~clientGenerator()
{
}


