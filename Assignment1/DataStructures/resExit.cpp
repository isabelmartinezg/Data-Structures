#include "resExit.hpp"
using namespace std;
resExit::resExit()
{
}
void resExit::clientLeave(Client c)
//This method shows the exit status of a the client
{
	cout<<"Client has left--> Name: "<<c.getName()<<"   ID: "<<c.getNumber()<<"   Table: "<<c.getTable()<<"   Plate consumed: "<<c.getPlate()<<endl;
}
resExit::~resExit()
{
}

