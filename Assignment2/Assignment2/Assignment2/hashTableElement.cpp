#include "hashTableElement.hpp"
#include <stdio.h>
hashTableElement::hashTableElement()
{
	value=NULL;
	occurrences=0;
}
int hashTableElement::getValue()
{
	return value;
}
void hashTableElement::setValue(int n)
{
	value=n;
}
int hashTableElement::getOccurrences()
{
	return occurrences;
}
void hashTableElement::setOccurrences(int n)
{
	occurrences=n;
}
hashTableElement* hashTableElement::getNext()
{
	return next;
}
void hashTableElement::setNext(hashTableElement* elem)
{
	next=elem;
}
hashTableElement::~hashTableElement()
{
}

