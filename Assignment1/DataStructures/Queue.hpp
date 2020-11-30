#ifndef QUEUE_HPP
#define QUEUE_HPP
#include "QueueElement.hpp"

class Queue
{
private:
	QueueElement* front; 
	QueueElement* rear;
public:
	Queue();
	Client dequeue();
	bool empty();
	void makenull();
	QueueElement* getFront();
	QueueElement* getRear();
	void enqueue(Client);
	~Queue();

};

#endif // QUEUE_HPP
