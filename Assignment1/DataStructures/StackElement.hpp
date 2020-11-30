#ifndef STACKELEMENT_HPP
#define STACKELEMENT_HPP
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string>
using namespace std;

class StackElement
{
private:
	std::string letter;
	StackElement* nextLetter;
public:
	StackElement();
	std::string getLetter();
	void setLetter(std::string);
	void setNextLetter(StackElement*);
	StackElement* getNextLetter();
	~StackElement();

};

#endif // STACKELEMENT_HPP
