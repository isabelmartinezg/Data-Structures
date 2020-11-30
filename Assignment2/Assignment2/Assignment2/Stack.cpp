#include "Stack.hpp"
Stack::Stack()
{
	top=NULL;
}
void Stack::push(Serie s)
{
	StackElement* newElement;
	newElement=new (StackElement);
	newElement->setSerie(s);
	if(top!=NULL)
	{
		newElement->setNextSerie(top);
	}
	top=newElement;

}
Serie Stack::pop()
{
	if (empty()){
		Serie s;
		s.setEnd(0);
		s.setStart(0);
		s.setStep(0);
		return s;
	}else{
		StackElement* auxp;
		Serie value;
		auxp=top;
		top=top->getNextSerie();
		value=auxp->getSerie();
		delete(auxp);
		return value;
	}
}
bool Stack::empty()
{
	if(top==NULL){
		return true;
	}else{
		return false;
	}
}
Stack::~Stack()
{
}
