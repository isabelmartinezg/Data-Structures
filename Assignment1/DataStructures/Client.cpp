#include "Client.hpp"

Client::Client()
{
	table="";
}

Client::~Client()
{
}
std::string Client::getPlate()
{
	return plate;
}
void Client::setPlate(std::string p)
{
	plate = p;
}

void Client::createClient(std::string n, int num)
//Assingment of the name and the ID to the client
{
	name=n;
	number=num;
}
int Client::getNumber()
{
	return number;
}
void Client::setTable(std::string n)
{
	table=n;
}
std::string Client::getTable()
{
	return table;
}
void Client::setNumber(int n)
{
	number=n;
}
void Client::setName(std::string n)
{
	name=n;
}
std::string Client::getName()
{
	return name;
}

