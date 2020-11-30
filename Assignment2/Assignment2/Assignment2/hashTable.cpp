#include "hashTable.hpp"
#include <stdio.h>
#include <iostream>
using namespace std;
hashTable::hashTable()
{
	for(int i=0;i<10;i++)
	{
		table[i]=NULL;
	}
}
void hashTable::insert(int x)
{
	int bucket;
	hashTableElement* oldheader;
	if(member(x)==false)
	{
		bucket=h(x);
		oldheader=table[bucket];
		hashTableElement* newElement;
		newElement=new(hashTableElement);
		newElement->setValue(x);
		newElement->setOccurrences(1);
		newElement->setNext(oldheader);
		table[bucket]=newElement;
	}else
	{
		hashTableElement* element;
		element=Search(x);
		int number=element->getOccurrences();
		number++;
		element->setOccurrences(number);
	}
}
hashTableElement** hashTable::getTable()
{
	return table;
}
void hashTable::eliminate(int x)
{
	hashTableElement* current;
	hashTableElement* disposable;
	int bucket;
	bucket = h(x);
	if (table[bucket] != NULL)
	{
		if(table[bucket]->getValue()==x)
		{
			disposable=table[bucket];
			table[bucket]=table[ bucket]->getNext();
			delete(disposable);
		}else
		{
			current=table[bucket];
			while(current!=NULL)
			{
				if(current->getNext()->getValue()==x)
				{
					disposable=current->getNext();
					current->setNext(current->getNext()->getNext());
					delete(disposable);
				}else
				{
					current=current->getNext();
				}
			}
		}
	}
}
hashTableElement* hashTable::Search(int x)
{
	hashTableElement* current;
	current=table[h(x)];
	while(current!=NULL)
	{
		if(current->getValue() == x)
		{
			return current;
		}else
		{
			current = current->getNext();
		}
	}
	return NULL;
}
bool hashTable::member(int x)
{
	hashTableElement* current;
	current=table[h(x)];
	while(current!=NULL)
	{
		if(current->getValue() == x)
		{
			return true;
		}else
		{
			current = current->getNext();
		}
	}
	return false;
}
int hashTable::h(int x)
{
	return x%10;
}
hashTable::~hashTable()
{
}

