#ifndef KITCHEN_HPP
#define KITCHEN_HPP
#include "Stack.hpp"
#include <string>
class Kitchen
{
public:
	Stack elaborateA(Stack);
	Stack elaborateB(Stack);
	Stack elaborateC(Stack);
	Kitchen();
	~Kitchen();

};

#endif // KITCHEN_HPP
