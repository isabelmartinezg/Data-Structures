#include "StackElement.hpp"
#include <stdio.h>
StackElement::StackElement()
{
	nextSerie=NULL;
}
Serie StackElement::getSerie()
{
	return serie;
}
StackElement* StackElement::getNextSerie()
{
	return nextSerie;
}
void StackElement::setSerie(Serie s)
{
	serie=s;
}
void StackElement::setNextSerie(StackElement* s)
{
	nextSerie=s;
}
StackElement::~StackElement()
{
}


