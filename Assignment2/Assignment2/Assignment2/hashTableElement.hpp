#ifndef HASHTABLEELEMENT_HPP
#define HASHTABLEELEMENT_HPP
#include <stdio.h>
class hashTableElement
{
private:
	int value;
	int occurrences;
	hashTableElement* next;
public:
	hashTableElement();
	int getValue();
	void setValue(int);
	int getOccurrences();
	void setOccurrences(int);
	hashTableElement* getNext();
	void setNext(hashTableElement*);
	~hashTableElement();

};

#endif // HASHTABLEELEMENT_HPP
