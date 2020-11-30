#include "Stack.hpp"
Stack::Stack()
{
	top=NULL;
}
void Stack::push(std::string c)
{
	StackElement* newElement;
	newElement=new (StackElement);
	newElement->setLetter(c);
	if(top!=NULL)
	{
		newElement->setNextLetter(top);
	}
	top=newElement;

}
void Stack::pushLetters(std::string l)
//This method is and extra adition to this ADT, its purpose is to fill the stacks with the letters thanks to the Letters class that has the letters
{
	Letters let;
	for (int i=0;i<150;i++)
	{
		if(l=="consonants")
		{
			std::string* consonants=let.getCO();
		int n=rand()% 21;
		push(consonants[n]);
		}else
		{
			std::string* vowels=let.getVO();
		int n=rand()% 5;
		push(vowels[n]);
		}
		
	}
}
std::string Stack::pop()
{
	if (empty()){
		return "Error";
	}else{
		StackElement* auxp;
		std::string value;
		//auxp=new(StackElement);
		auxp=top;
		top=top->getNextLetter();
		value=auxp->getLetter();
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

