#ifndef STACK_HPP
#define STACK_HPP
#include "StackElement.hpp"
#include <stdlib.h>
#include <stdio.h>
#include "Serie.hpp"
using namespace std;
class Stack
{
private:
	StackElement* top;
public:
	Stack();
	void push(Serie);
	Serie pop();
	bool empty();
	~Stack();

};

#endif // STACK_HPP