#ifndef ENTRANCE_HPP
#define ENTRANCE_HPP

#include "Queue.hpp"
#include "Stack.hpp"
#include "Client.hpp"
#include <iostream>
using namespace std;

class Entrance
{
public:
	Entrance();
	Queue resEntrance(Queue,Stack);
	~Entrance();

};

#endif // ENTRANCE_HPP
