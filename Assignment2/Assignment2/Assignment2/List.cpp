#include "List.hpp"
#include <stdio.h>
#include <iostream>
using namespace std;
List::List()
{
	header=NULL;
}
ListElement* List::getHeader()
{
	return header;
}
int List::length()
{
	int counter=0;
	ListElement* aux=header;
	while(aux!=NULL)
	{
		counter++;
		aux=aux->getNext();
	}
	return counter;
}
int List::eliminate(int x)
{
	if(empty())
	{
		cout<<"Error, the list is empty.";
		return NULL;
	}else
	{
		ListElement* aux = locate(x);
		if(aux==NULL)
		{
			cout<<"Error, the element doesn't exist";
			return NULL;
		}else
		{
			ListElement* temp;
			temp=header;
			while(temp != NULL)
			{
				if(temp->getValue()==x)
				{
					int number;
					if(temp==header)
					{
						header=temp->getNext();
						number=temp->getValue();
						delete(temp);
						return number;
					}
					ListElement* aux;
					aux=Previous(temp);
					aux->setNext(temp->getNext());
					number=temp->getValue();
					delete(temp);
					return number;
				}else
				{
					temp=temp->getNext();
				}
				
			}
		}
	}
}
ListElement* List::Previous(ListElement* elem)
{
	ListElement* temp;
	temp=header;
	if (header==elem)
	{
		return NULL;
	}
	while(temp->getNext()!=NULL)
	{
		if(temp->getNext()==elem)
		{
			return temp;
		}else
		{
			temp=temp->getNext();
		}
	}
	return NULL;
}
void List::insert(int x)
{
	if(empty())
	{
		ListElement* temp;
		temp=new(ListElement);
		temp->setValue(x);
		temp->setOccurrences(1);
		temp->setNext(NULL);
		header=temp;
	}else
	{
		ListElement* aux = locate(x);
		if(aux==NULL)
		{
			ListElement* temp;
			temp=header;
			while(temp->getNext() !=NULL)
			{
				temp=temp->getNext();
			}
			ListElement* newElement;
			newElement = new(ListElement);
			newElement->setValue(x);
			newElement->setOccurrences(1);
			newElement->setNext(NULL);
			temp->setNext(newElement);
		}else
		{
			aux->setOccurrences(aux->getOccurrences()+1);
		}
	}
}
ListElement* List::locate(int x)
{
	ListElement* temp;
	temp=header;
	while(temp != NULL)
	{
		if(temp->getValue()==x)
		{
			return temp;
		}else
		{
			temp=temp->getNext();
		}
	}
	return NULL;
}
bool List::empty()
{
	if (header==NULL)
	{
		return true;
	}else
	{
		return false;
	}
}
List::~List()
{
}

