#include "ListElement.hpp"

ListElement::ListElement()
{
}
int ListElement::getValue()
{
	return value;
}
void ListElement::setValue(int n)
{
	value=n;
}
int ListElement::getOccurrences()
{
	return occurrences;
}
void ListElement::setOccurrences(int n)
{
	occurrences=n;
}
ListElement* ListElement::getNext()
{
	return next;
}
void ListElement::setNext(ListElement* elem)
{
	next=elem;
}
ListElement::~ListElement()
{
}

