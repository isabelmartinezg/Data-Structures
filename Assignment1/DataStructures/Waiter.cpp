#include "Waiter.hpp"

Waiter::Waiter()
{
	fatigue=30;
}
void Waiter::setStack(Stack s)
{
	plateStack=s;
}
std::string Waiter::Serve()
//This method serve a plate to a client, checking if a plate of the correspondent type is required and if the waiter has an accident.
{
	int accident=rand()%1001;
	if(accident<=fatigue)
	{
		return "No plate, the waiter has suffered an accident.";
	}else
	{
		if(plateStack.empty()==false)
		{
			fatigue=fatigue+2;
			return plateStack.pop();
		}else
		{
			return "No plates available of the type requested.";
		}
	}
}
Waiter::~Waiter()
{
}

