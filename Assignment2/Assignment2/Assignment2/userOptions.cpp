#include "userOptions.hpp"
 
userOptions::userOptions()
{
}
//Function that finish the program, writting all the series (the old ones and the ones that the user has added) in the file.
void userOptions::finishProgram(Stack* stack2)
{
	ofstream myfile("file.txt");
	if(myfile.is_open())
	{
		Serie s=stack2->pop();//The second stack is emptied in order to write the series that are inside it in the file
		while(s.getEnd() != 0 && s.getStart() != 0 && s.getStep() != 0)
		{
			myfile<<s.getStart()<<" "<<s.getEnd()<<" "<<s.getStep()<<" "<<endl;
			s=stack2->pop();
		}
		myfile.close();
	}else{
		cout<<"error";
		exit(1);
	}
}


//Function that empties the Hash Table
void userOptions::emptyHash(hashTable* hash)
{
	hashTableElement** auxT=hash->getTable();
	for(int i=0;i<10;i++)
	{
		hashTableElement* aux;
		aux=auxT[i];
		while(aux!=NULL)
		{
			int number = aux->getValue();
			aux=aux->getNext();
			hash->eliminate(number);
		}
	}
}
//Function that empties the List
void userOptions::emptyList(List* l)
{
	ListElement* elem=l->getHeader();
	while(elem != NULL)
	{
		int number=elem->getValue();
		elem=elem->getNext();
		l->eliminate(number);
	}
}

//Function that shows the number that has the most occurrences in the List
void userOptions::searchHigherOccurrencesList(List* l)
{
	auto start = std::chrono::steady_clock::now();
	int maxOccurrences=0;
	ListElement* elem=l->getHeader();
	ListElement* aux;
	while(elem != NULL)
	{
		if(elem->getOccurrences() >= maxOccurrences)
		{
			maxOccurrences = elem->getOccurrences();
			aux=elem;
		}
		elem=elem->getNext();
	}
	auto end = std::chrono::steady_clock::now();
	double elapsed_time_ms = double(std::chrono::duration_cast <std::chrono::microseconds> (end-start).count());
	cout<<endl<<"The number with most occurrences in the List is: "<<aux->getValue()<<endl;
	cout<<endl<<"Elapsed Time (seconds): "<<elapsed_time_ms / 1e6 <<endl;
}

//Function that shows the number that has the most occurrences in the Hash
void userOptions::searchHigherOccurrencesHash(hashTable* hash)
{
	auto start = std::chrono::steady_clock::now();
	hashTableElement** auxT=hash->getTable();
	int maxOccurrences=0;
	hashTableElement* elem;
	for(int i=0;i<10;i++)
	{
		hashTableElement* aux;
		aux=auxT[i];
		while(aux!=NULL)
		{
			if(aux->getOccurrences() >= maxOccurrences)
			{
				maxOccurrences = aux->getOccurrences();
				elem=aux;
			}
			aux=aux->getNext();
		}
	}
	auto end = std::chrono::steady_clock::now();
	double elapsed_time_ms = double(std::chrono::duration_cast <std::chrono::microseconds> (end-start).count());
	cout<<endl<<"The number with most occurrences in the List is: "<<elem->getValue()<<endl;
	cout<<endl<<"Elapsed Time (seconds): "<<elapsed_time_ms / 1e6 <<endl;
}

//Function that shows the 100 lower and bigger numbers in the Hash (if there are 100 numbers)
void userOptions::getGreater_LowerNumbersHash(hashTable* hash)
{
	auto start = std::chrono::steady_clock::now();
	List* l=new(List);
	hashTableElement** auxT=hash->getTable();
	//Inserts the numbers of the hash in a list and then bubble sort algorithm is used so that the numbers of the hash are sorted
	for(int i=0;i<10;i++)
	{
		hashTableElement* aux;
		aux=auxT[i];
		while(aux!=NULL)
		{
			l->insert(aux->getValue());
			aux=aux->getNext();
		}
	}
	elemManager man;
	man.bubbleSort(l);
	ListElement* elem=l->getHeader();
	int counter = 0;
	if (l->length()<100)
	{
		cout<<endl<<"There are not 100 numbers in the Hash Table!!";
		cout<<endl<<endl<<"****************** NUMBERS (HASH) ******************"<<endl;
		while(elem != NULL)
		{
			cout<<" "<<elem->getValue()<<" ";
			elem=elem->getNext();
			counter++;
		}
	}else
	{
		cout<<endl<<endl<<"****************** 100 LOWEST NUMBERS (HASH) ******************"<<endl;
		while(elem != NULL && counter<100)
		{
			cout<<" "<<elem->getValue()<<" ";
				elem=elem->getNext();
			counter++;
		}
	
		cout<<endl<<endl<<"****************** 100 BIGGEST NUMBERS (HASH) ******************"<<endl;
		counter=0;
		elem = l->getHeader();
		
		//Moving the element that is going to be showed to the position of the last element - 100
		while(elem != NULL && counter<l->length()-100)
		{
			elem=elem->getNext();
			counter++;
		}
		while(elem!=NULL && counter<=l->length())
		{
			cout<<" "<<elem->getValue()<<" ";
			counter++;
			elem=elem->getNext();
		}
	}
	auto end = std::chrono::steady_clock::now();
	double elapsed_time_ms = double(std::chrono::duration_cast <std::chrono::microseconds> (end-start).count());
	cout<<endl<<"Elapsed Time (seconds): "<<elapsed_time_ms / 1e6 <<endl;

}

//Funtion that searchs for a number that the user introduces in the list
void userOptions::searchNumberList(List* l,int number)
{
	int x=number;
	auto start = std::chrono::steady_clock::now();
	elemManager man;
	man.bubbleSort(l);
	ListElement* elem=l->locate(x);
	ListElement* elem1=elem;
	if(elem == NULL)
	{
		cout<<"Number not found. "<<endl;
	}else{
		cout<<"Number found. "<<endl;
	}
	int counter=0;
	cout<<endl<<"*************** These are the 10 numbers before the number that you have searched for in the List*************** "<<endl;
	elem=l->Previous(elem);
	while(elem!=NULL && counter<=10)
	{
		cout<<endl<<elem->getValue()<<" ";
		elem=l->Previous(elem);
		if(elem==NULL && counter<10)
		{
			cout<<endl<<"Not enough elements before. "<<endl;
		}
		counter++;
	}
	counter=0;
	cout<<endl<<"*************** These are the 10 numbers after the number that you have searched for in the List*************** "<<endl;
	elem1=elem1->getNext();
	while(elem1!=NULL && counter<=10)
	{
		cout<<endl<<elem1->getValue()<<" ";
		elem1=elem1->getNext();
		if(elem1==NULL && counter<10)
		{
			cout<<endl<<"Not enough element after. "<<endl;
		}
		counter++;
	}
	auto end = std::chrono::steady_clock::now();
	double elapsed_time_ms = double(std::chrono::duration_cast <std::chrono::microseconds> (end-start).count());
	cout<<endl<<"Elapsed Time (seconds): "<<elapsed_time_ms / 1e6 <<endl;
}

//Function that searchs for a number that the user introduces in the Hash
void userOptions::searchNumberHash(hashTable* hash, int number)
{
	int x=number;
	auto start = std::chrono::steady_clock::now();
	List* l=new(List);
	hashTableElement** auxT=hash->getTable();
	for(int i=0;i<10;i++)
	{
		hashTableElement* aux;
		aux=auxT[i];
		while(aux!=NULL)
		{
			l->insert(aux->getValue());
			aux=aux->getNext();
		}
	}
	elemManager man;
	man.bubbleSort(l);
	ListElement* elem=l->locate(x);
	ListElement* elem1=elem;
	if(elem == NULL)
	{
		cout<<"Number not found. "<<endl;
	}else{
		cout<<"Number found. "<<endl;
	}
	int counter=0;
	cout<<endl<<"*************** These are the 10 numbers before the number that you have searched for in the Hash*************** "<<endl;
	elem=l->Previous(elem);
	while(elem!=NULL && counter<=10)
	{
		cout<<endl<<elem->getValue()<<" ";
		elem=l->Previous(elem);
		if(elem==NULL && counter<10)
		{
			cout<<endl<<"Not enough elements before. "<<endl;
		}
		counter++;
	}
	counter=0;
	cout<<endl<<"*************** These are the 10 numbers after the number that you have searched for in the Hash *************** "<<endl;
	elem1=elem1->getNext();
	while(elem1!=NULL && counter<=10)
	{
		cout<<endl<<elem1->getValue()<<" ";
		elem1=elem1->getNext();
		if(elem1==NULL && counter<10)
		{
			cout<<endl<<"Not enough element after. "<<endl;
		}
		counter++;
	}
	auto end = std::chrono::steady_clock::now();
	double elapsed_time_ms = double(std::chrono::duration_cast <std::chrono::microseconds> (end-start).count());
	cout<<endl<<"Elapsed Time (seconds): "<<elapsed_time_ms / 1e6 <<endl;
}

//Function that shows the 100 lower and bigger numbers in the list (if there are 100 numbers)
void userOptions::getGreater_LowerNumbersList(List* l)
{
	auto start = std::chrono::steady_clock::now();
	elemManager man;
	man.bubbleSort(l);
	ListElement* elem=l->getHeader();
	int counter = 0;
	
	if (l->length()<100)
	{
		cout<<endl<<"There are not 100 numbers in the list!!";
		cout<<endl<<endl<<"****************** NUMBERS (LIST) ******************"<<endl;
		while(elem != NULL)
		{
			cout<<" "<<elem->getValue()<<" ";
			elem=elem->getNext();
			counter++;
		}
	}else
	{
		cout<<endl<<endl<<"****************** 100 LOWEST NUMBERS (LIST) ******************"<<endl;
		while(elem != NULL && counter<100)
		{
			cout<<" "<<elem->getValue()<<" ";
				elem=elem->getNext();
			counter++;
		}
	
		cout<<endl<<endl<<"****************** 100 BIGGEST NUMBERS (LIST) ******************"<<endl;
		counter=0;
		elem=l->getHeader();
		//Moving the element that is going to be showed to the position of the last element - 100
		while(elem != NULL && counter<l->length()-100)
		{
			elem=elem->getNext();
			counter++;
		}
		while(elem!=NULL && counter<=l->length())
		{
			cout<<" "<<elem->getValue()<<" ";
			counter++;
			elem=elem->getNext();
		}
	}
	auto end = std::chrono::steady_clock::now();
	double elapsed_time_ms = double(std::chrono::duration_cast <std::chrono::microseconds> (end-start).count());
	cout<<endl<<"Elapsed Time (seconds): "<<elapsed_time_ms / 1e6 <<endl;

}
//Function that counts the number of different numbers in the Hash Table
void userOptions::countDistinctHash(hashTable* hash)
{
	auto start = std::chrono::steady_clock::now();
	int counter=0;
	hashTableElement** auxT=hash->getTable();
	for(int i=0;i<10;i++)
	{
		hashTableElement* aux;
		aux=auxT[i];
		while(aux!=NULL)
		{
			counter++;
			aux=aux->getNext();
		}
	}
	cout<<"There are "<<counter<<" distinct numbers in the Hash Table."<<endl;
	auto end = std::chrono::steady_clock::now();
	double elapsed_time_ms = double(std::chrono::duration_cast <std::chrono::microseconds> (end-start).count());
	cout<<endl<<"Elapsed Time (seconds): "<<elapsed_time_ms / 1e6 <<endl;
}

//Function that shows the max and the min numbers in the Hash Table
void userOptions::max_minHash(hashTable* hash)
{
	auto start = std::chrono::steady_clock::now();
	int maxNumber=-999999999;
	int minNumber=999999999;
	hashTableElement** auxT=hash->getTable();
	
	for(int i=0;i<10;i++)
	{
		hashTableElement* aux;
		aux=auxT[i];
		while(aux!=NULL)
		{
			if(aux->getValue()>maxNumber)
			{
				maxNumber=aux->getValue();
			}
			if(aux->getValue()<minNumber)
			{
				minNumber=aux->getValue();
			}
			aux=aux->getNext();
		}
	}
	cout<<"The maximum value in the Hash Table is: "<<maxNumber<<endl;
	cout<<"The minimun value in the Hash Table is: "<<minNumber<<endl;
	auto end = std::chrono::steady_clock::now();
	double elapsed_time_ms = double(std::chrono::duration_cast <std::chrono::microseconds> (end-start).count());
	cout<<endl<<"Elapsed Time (seconds): "<<elapsed_time_ms / 1e6 <<endl;
}

//Function that calculates the average of the numbers in the Hash Table
void userOptions::averageHash(hashTable* hash)
{
	auto start = std::chrono::steady_clock::now();
	int counter=0;
	int sum=0;
	hashTableElement** auxT=hash->getTable();
	for(int i=0;i<10;i++)
	{
		hashTableElement* aux;
		aux=auxT[i];
		while(aux!=NULL)
		{
			counter++;
			sum= sum + aux->getValue()*aux->getOccurrences();
			aux=aux->getNext();
		}
	}
	float avg=(float)sum/counter;
	cout<<"The average of the number in the Hash Table is: "<<avg<<endl;
	auto end = std::chrono::steady_clock::now();
	double elapsed_time_ms = double(std::chrono::duration_cast <std::chrono::microseconds> (end-start).count());
	cout<<endl<<"Elapsed Time (seconds): "<<elapsed_time_ms / 1e6 <<endl;
}
//Function that shows the max and min numbers in the List
void userOptions::max_minList(List* l)
{
	auto start = std::chrono::steady_clock::now();
	int maxNumber=-999999999;
	int minNumber=999999999;
	ListElement* elem=l->getHeader();
	while(elem != NULL)
	{
		if(elem->getValue()>maxNumber)
			{
				maxNumber=elem->getValue();
			}
			if(elem->getValue()<minNumber)
			{
				minNumber=elem->getValue();
			}
		elem=elem->getNext();
	}
	cout<<"The maximum value in the List is: "<<maxNumber<<endl;
	cout<<"The minimun value in the List is: "<<minNumber<<endl;
	auto end = std::chrono::steady_clock::now();
	double elapsed_time_ms = double(std::chrono::duration_cast <std::chrono::microseconds> (end-start).count());
	cout<<endl<<"Elapsed Time (seconds): "<<elapsed_time_ms / 1e6 <<endl;
}

//Function that calculate the average of the numbers in the List
void userOptions::averageList(List* l)
{
	auto start = std::chrono::steady_clock::now();
	int counter=0;
	int sum=0;
	ListElement* elem=l->getHeader();
	while(elem != NULL)
	{
		counter++;
		sum=sum + elem->getValue()*elem->getOccurrences();
		elem=elem->getNext();
	}
	float avg=(float)sum/counter;
	cout<<"The average of numbers in the List is: "<<avg<<endl;
	auto end = std::chrono::steady_clock::now();
	double elapsed_time_ms = double(std::chrono::duration_cast <std::chrono::microseconds> (end-start).count());
	cout<<endl<<"Elapsed Time (seconds): "<<elapsed_time_ms / 1e6 <<endl;
}

//Function that counts the number of elements that are different in the List
void userOptions::countDistinctList(List* l)
{
	auto start = std::chrono::steady_clock::now();
	int counter=0;
	ListElement* elem=l->getHeader();
	while(elem != NULL)
	{
		counter++;
		elem=elem->getNext();
	}
	cout<<endl<<endl<<"There are "<<counter<<" distinct numbers in the List."<<endl;
	auto end = std::chrono::steady_clock::now();
	double elapsed_time_ms = double(std::chrono::duration_cast <std::chrono::microseconds> (end-start).count());
	cout<<endl<<"Elapsed Time (seconds): "<<elapsed_time_ms / 1e6 <<endl;
}

//Function that allows the user to add a serie in the program
void userOptions::addSeries(Stack* stack2,hashTable* hash,List* l)
{
	int start,end,step;
	cout<<"Write the start of the series: ";
	cin>>start;
	while(cin.fail())//Error treatment if the user does not introduce a number
	{
		cin.clear();
		cin.ignore();
		cout<<"Introduce a number please!: "<<endl;
		cin>>start;
		
	}
	cout<<"Write the end of the series: ";
	cin>>end;
	while(cin.fail())
	{
		cin.clear();
		cin.ignore();
		cout<<"Introduce a number please!: "<<endl;
		cin>>end;
	}
	cout<<"Write the step of the series: ";
	cin>>step;
	while(cin.fail())
	{
		cin.clear();
		cin.ignore();
		cout<<"Introduce a number please!: "<<endl;
		cin>>step;
	}
	Serie s;
	s.setEnd(end);
	s.setStart(start);
	s.setStep(step);
	s.generateSerie(hash,l);
	stack2->push(s); //The serie is added to the stack that stores the series in order to write the serie in the file at the end of the program
}
userOptions::~userOptions()
{
}

