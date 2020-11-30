#include "StackElement.hpp"

StackElement::StackElement()
{
	letter="";
	nextLetter=NULL;
}
std::string StackElement::getLetter()
{
	return letter;
}
StackElement* StackElement::getNextLetter()
{
	return nextLetter;
}
void StackElement::setLetter(std::string l)
{
	letter=l;
}
void StackElement::setNextLetter(StackElement* n)
{
	nextLetter=n;
}
StackElement::~StackElement()
{
}

