#ifndef RESEATPROCESS_HPP
#define RESEATPROCESS_HPP
#include "resExit.hpp"
#include "Queue.hpp"
#include "Client.hpp"
#include "Waiter.hpp"
class resEatProcess
{
public:
	resEatProcess();
	void eatProcess(Queue,resExit,Waiter,Waiter,Waiter);
	~resEatProcess();

};

#endif // RESEATPROCESS_HPP
