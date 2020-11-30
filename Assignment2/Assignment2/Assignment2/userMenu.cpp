#include "userMenu.hpp"

userMenu::userMenu(hashTable* h,List* list,Stack* s1, Stack* s2,userOptions* options,elemManager* man)
{
	hash=h;
	l=list;
	stack1=s1;
	stack2=s2;
	user=options;
	manager=man;
}

//Function that read, store and generate all the series
void userMenu::start()
{
	cout<<endl<<"******** WELCOME TO THE PROGRAM ********"<<endl;
	char const * file="file.txt";
	manager->readAndStoreSeries(file,stack1);
	manager->seriesGenerator(hash,l,stack1,stack2);
	cout<<endl<<"The series from the file have been generated!!"<<endl;
}

//Funtion that represents the menu of the program with all the options that the user can select
void userMenu::mainMenu()
{
	int option;
	cout<<endl<<"--------------- MAIN MENU ---------------"<<endl;
	cout<<"Press -1 if you want to finish the program."<<endl;
	cout<<"Press 1 if you want to add a series to the file."<<endl;
	cout<<"Press 2 if you want to count all the distinct numbers in both Data Structures. "<<endl;
	cout<<"Press 3 if you want to calculate the average of numbers in both Data Structures. "<<endl;
	cout<<"Press 4 if you want to check the max and min numbers in both Data Structures. "<<endl;
	cout<<"Press 5 if you want to see the 100 biggest and lowest numbers in both Data Structures. "<<endl;
	cout<<"Press 6 if you want to search for a number. "<<endl;
	cout<<"Press 7 if you want to see the number with most occurrences. "<<endl;
	cout<<"Press 8 if you want to empty both Data Structures and regenerate them. "<<endl;
	cout<<"Choose an option: ";
	cin>>option;
	
	switch(option)
	{
		case -1:
		{
			user->finishProgram(stack2);
			cout<<"The program has been finished, Thank you!!!!";
			exit(1);
			}
		case 1:
		{
			user->addSeries(stack2,hash,l);
			mainMenu();
		}
		case 2:
		{
			user->countDistinctHash(hash);
			user->countDistinctList(l);
			mainMenu();
		}
		case 3:
		{
			user->averageHash(hash);
			user->averageList(l);
			mainMenu();
		}
		case 4:
		{
			user->max_minHash(hash);
			user->max_minList(l);
			mainMenu();
		}
		case 5:
		{
			user->getGreater_LowerNumbersHash(hash);
			user->getGreater_LowerNumbersList(l);
			mainMenu();
		}
		case 6:
		{
			int number;
			cout<<"Introduce the number you want to search for: ";
			cin>>number;
			user->searchNumberHash(hash,number);
			user->searchNumberList(l,number);
			mainMenu();
		}
		case 7:
		{
			user->searchHigherOccurrencesHash(hash);
			user->searchHigherOccurrencesList(l);
			mainMenu();
		}
		case 8:
		{
			auto start = std::chrono::steady_clock::now();
			user->emptyHash(hash);
			manager->hashRegenerator(stack2,hash);
			auto end = std::chrono::steady_clock::now();
			double elapsed_time_ms = double(std::chrono::duration_cast <std::chrono::microseconds> (end-start).count());
			cout<<endl<<"Elapsed Time  to restart the Hash(seconds): "<<elapsed_time_ms / 1e6 <<endl;
			
			auto start1 = std::chrono::steady_clock::now();
			user->emptyList(l);
			manager->listRegenerator(stack2,l);
			auto end1 = std::chrono::steady_clock::now();
			double elapsed_time_ms1 = double(std::chrono::duration_cast <std::chrono::microseconds> (end1-start1).count());
			cout<<endl<<"Elapsed Time  to restart the List(seconds): "<<elapsed_time_ms1 / 1e6 <<endl;
			mainMenu();
		}
		default:
		{
			cout<<"Error, you didn't introduce a valid function!!!! "<<endl;
			cin.clear();
			cin.ignore();
			mainMenu();
		}
	}
}
userMenu::~userMenu()
{
}

