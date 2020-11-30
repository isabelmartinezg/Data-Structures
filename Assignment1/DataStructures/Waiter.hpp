#ifndef WAITER_HPP
#define WAITER_HPP
#include <string>
#include "Stack.hpp"
class Waiter
{
private:
	Stack plateStack;
	int fatigue;
public:
	Waiter();
	void setStack(Stack);
	std::string Serve();
	~Waiter();

};

#endif // WAITER_HPP
