#ifndef RESTAURANT_HPP
#define RESTAURANT_HPP
#include "Letters.hpp"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <sstream>
#include "resExit.hpp"
#include "Stack.hpp"
#include "Waiter.hpp"
#include "Entrance.hpp"
#include "Kitchen.hpp"
#include "clientGenerator.hpp"
#include "Queue.hpp"
#include "resEatProcess.hpp"
#include "randomTable.hpp"
class Restaurant
{
private:
	Entrance entrance;
	resExit exit;
	resEatProcess eat;
	randomTable num_Tables;
	Queue Q2;
	Queue Q1;
	Kitchen kitchen;
	Stack GRD1;
	Stack GRD2;
	Stack GRD3;
	Stack tablesAvailable;
	Stack STVO1;
	Stack STVO2;
	Stack STCO1;
	Stack STCO2;
	Waiter waiterA;
	Waiter waiterB;
	Waiter waiterC;
public:
	Restaurant();
	void clientAndQ1Creation();
	void platesCreation();
	void entranceInRestaurant();
	void waiterCreation();
	void eatAndExitProcess();
	void userMenu();
	~Restaurant();

};

#endif // RESTAURANT_HPP
