#include "Queue.hpp"

Queue::Queue()
{
	front=NULL;
	rear=NULL;
}
void Queue::enqueue(Client c)
{
	if (empty())
	{
		QueueElement* aux;
		aux=new (QueueElement);
		front=aux;
		front->setClient(c);
		front->setNextClient(NULL);
		rear=front;
	}else
	{
		QueueElement* aux;
		aux=new (QueueElement);
		rear->setNextClient(aux);
		rear=rear->getNextClient();
		rear->setClient(c);
		rear->setNextClient(NULL);
	}
}
void Queue::makenull()
{
	front=NULL;
	rear=NULL;
}
Client Queue::dequeue()
{
	if(empty())
	{
		printf("Error, the queue is empty.");
	}else if(front==rear)
	{
		Client auxClient;
		auxClient=front->getClient();
		delete(front);
		makenull();
		return auxClient;
	}else
	{
		Client auxClient;
		QueueElement* auxCell;
		auxClient=front->getClient();
		auxCell=front;
		front=front->getNextClient();
		delete(auxCell);
		return auxClient;
	}
}
QueueElement* Queue::getFront()
{
	return front;
}
QueueElement* Queue::getRear()
{
	return rear;
}
bool Queue::empty()
{
	if((front==rear) && (front==NULL))
	{
		return true;
	}else
	{
		return false;
	}
}
Queue::~Queue()
{
}

