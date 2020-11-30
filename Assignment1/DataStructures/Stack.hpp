#ifndef STACK_HPP
#define STACK_HPP
#include "StackElement.hpp"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include "Letters.hpp"

using namespace std;
class Stack
{
private:
	StackElement* top;
public:
	Stack();
	void pushLetters(std::string);
	void push(std::string);
	std::string pop();
	bool empty();
	~Stack();

};

#endif // STACK_HPP
