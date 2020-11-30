#include "elemManager.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdio>
using namespace std;

elemManager::elemManager()
{
}

//Function that regenerates the Series of the program and adds the numbers of the series to the Hash Table
void elemManager::hashRegenerator(Stack* stack2,hashTable* hash)
{
	Stack* auxS=new(Stack);//An auxiliary stack is used in order to keep the series in memory and don't loose them while popping them
	Serie s=stack2->pop();
	//Going through the Hash Table
	while(s.getEnd() != 0 && s.getStart() != 0 && s.getStep() != 0)
	{
		auxS->push(s);
		int x=s.getStart();
		while(x<=s.getEnd())
		{
			hash->insert(x);
			x=x+s.getStep();
		}
		s=stack2->pop();
		
	}
	//When the hash has been restored, the stack2 is filled again with the series stored in the auxiliar stack
	s=auxS->pop();
	while(s.getEnd() != 0 && s.getStart() != 0 && s.getStep() != 0)
	{
		stack2->push(s);
		s=auxS->pop();
	}
}

//Function that regenerates the Series of the program and adds the numbers of the series to the List
void elemManager::listRegenerator(Stack* stack2,List* l)
{
	Stack* auxS=new(Stack);//An auxilliary stack is used in order to keep the series in memory and don't loose them while popping them
	Serie s=stack2->pop();
	//Going through the List
	while(s.getEnd() != 0 && s.getStart() != 0 && s.getStep() != 0)
	{
		auxS->push(s);
		int x=s.getStart();
		while(x<=s.getEnd())
		{
			l->insert(x);
			x=x+s.getStep();
		}
		s=stack2->pop();
	}
	//When the list has been restored, the stack2 is filled again with the series stored in the auxiliar stack
	s=auxS->pop();
	while(s.getEnd() != 0 && s.getStart() != 0 && s.getStep() != 0)
	{
		stack2->push(s);
		s=auxS->pop();
	}
}
//Function that generates all the series that have been read from the file and added to the first stack
void elemManager::seriesGenerator(hashTable* hash, List* l, Stack* stack1,Stack* stack2)
{
	Serie s=stack1->pop();
	//When the file is readed, a serie that has 0,0,0 is pushed, so the final serie of the stack is that one
	while(s.getEnd() != 0 && s.getStart() != 0 && s.getStep() != 0)
	{
		
		stack2->push(s);//The second stack is filled with the series in order to keep the series in memory
		s.generateSerie(hash,l);
		s=stack1->pop();
	}
	
}

//Function that receives a list and sort it using the bubble algorithm
void elemManager::bubbleSort(List* l)
{
	ListElement* aux1 = l->getHeader();
	while(aux1 != NULL)
	{
		ListElement* aux2=aux1->getNext();
		while (aux2 != NULL)
		{
			if((aux1->getValue()) > (aux2->getValue()))
			{
				int oc=aux1->getOccurrences();
				int val=aux1->getValue();
				aux1->setValue(aux2->getValue());
				aux1->setOccurrences(aux2->getOccurrences());
				aux2->setValue(val);
				aux2->setOccurrences(oc);
			}
			aux2=aux2->getNext();
		}
		aux1=aux1->getNext();
	}
	
}

//Function that reads the series from the file and push them into the first stack
void elemManager::readAndStoreSeries(char const* file, Stack* st)
{
	std::string line;
	int n_spaces=0;
	char c;
	ifstream myfile(file);
	if(myfile.is_open())
	{
		while(getline(myfile, line))//Reading the file line by line
		{
			std::string n1;
			std::string n2;
			std::string n3;
			for(unsigned i=0;i<line.length();i++)
			{
				c=line.at(i);
				if(c != ' ')
				{
					if(n_spaces==0)
					{
						n1+=c;
					}else if(n_spaces==1)
					{
						n2+=c;
					}else
					{
						n3+=c;
					}
				}else
				{
					n_spaces++;
				}
			}
			n_spaces=0;
			int start,end,step;
			//Here, a conversion from string to int is done in order to create the Series
			std::istringstream ( n1 ) >> start;
			std::istringstream ( n2 ) >> end;
			std::istringstream ( n3 ) >> step;
			//cout<<start<<", "<<end<<", "<<step<<endl;
			Serie s;
			s.setStart(start);
			s.setEnd(end);
			s.setStep(step);
			st->push(s);
		}
	}else{
		cout<<"error";
		exit(1);
	}
}
elemManager::~elemManager()
{
}

