#include "Entrance.hpp"

Entrance::Entrance()
{
}
Queue Entrance::resEntrance(Queue q1,Stack s)
//100 clients of the first queue are dequeued and enqueued to the next queue with a table number
{
	Queue q2;
	for(int i=0;i<100;i++)
	{
		Client c;
		c=q1.dequeue();
		c.setTable(s.pop());
		q2.enqueue(c);
	}
	return q2;
}
Entrance::~Entrance()
{
}

