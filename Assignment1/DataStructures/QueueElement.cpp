#include "QueueElement.hpp"

QueueElement::QueueElement()
{
}
void QueueElement::setNextClient(QueueElement* n)
{
	nextClient=n;
}
void QueueElement::setClient(Client c)
{
	client=c;
}
QueueElement* QueueElement::getNextClient()
{
	return nextClient;
}
Client QueueElement::getClient()
{
	return client;
}
QueueElement::~QueueElement()
{
}

