#include "resEatProcess.hpp"

resEatProcess::resEatProcess()
{
}
void resEatProcess::eatProcess(Queue Q2,resExit exit,Waiter waiterA,Waiter waiterB,Waiter waiterC)
//This method is the eating process of the clients, when a client has eaten, it shows the exit status (Name,ID,Table and Plate consumed)
{
		while(Q2.empty()==false)
	{
		int aux=rand()%3;//this random number determinates what plate is the client going to eat.
		if(aux==0)
		{
			Client c=Q2.dequeue();
			c.setPlate(waiterA.Serve());
			exit.clientLeave(c);//exit shows the exit status
		}
		else if(aux==1)
		{
			Client c=Q2.dequeue();
			c.setPlate(waiterB.Serve());
			exit.clientLeave(c);
		}
		else
		{
			Client c=Q2.dequeue();
			c.setPlate(waiterC.Serve());
			exit.clientLeave(c);
		}
	}
}
resEatProcess::~resEatProcess()
{
}

