#include "Restaurant.hpp"

Restaurant::Restaurant()
{
}
void Restaurant::userMenu()
{
	std::string aux;
	cout<<"Welcome to  the restaurant, please select what you want to do: "<<endl;
	cout<<"Press N to start the  phase 1 (clients and Q1 creation)"<<endl;
	cout<<"Press F to end the program"<<endl;
	cin>>aux;
	if(aux=="N")
	{
		clientAndQ1Creation();
		cout<<"Press N to continue to the phase 2 (plate preparation)"<<endl;
		cout<<"Press F to exit the program"<<endl;
		cin>>aux;
		if(aux=="N")
		{
			platesCreation();
			cout<<"Press N to continue to the phase 3 (entrance in the restaurant)"<<endl;
			cout<<"Press F to exit the program"<<endl;
			cin>>aux;
			if(aux=="N")
			{
				entranceInRestaurant();
				cout<<"Press N to continue to the final phase (meal and exit)"<<endl;
				cout<<"Press F to exit the program"<<endl;
				cin>>aux;
				if(aux=="N")
				{
					waiterCreation();
					eatAndExitProcess();
				}else
				{
					cout<<"The program has finished";
				}
			}else
			{
				cout<<"The program has finished";
			}
		}else
		{
			cout<<"The program has finished";
		}
	}else
	{
		cout<<"The program has finished";
	}
	
}
void Restaurant::clientAndQ1Creation()
{
	//Here is the creation of the objects needed in the restaurant
	
	/*  Clients generation and adition to Q1:
	 * In this part, clients of the restaurant are generated.
	 * 	First, the four letter stacks are created. The function pushLetters() push the letters into the stack, consonants in two of them and vowels
	 * 		in the other two.
	 * 	Once the four stacks are completed, the clientGenerator creates all the clients and add them to the first Queue.
	*/
	STCO1.pushLetters("consonants");
	STCO2.pushLetters("consonants");
	STVO1.pushLetters("vowels");
	STVO2.pushLetters("vowels");
	clientGenerator Generator=clientGenerator(STCO1,STVO1,STCO2,STVO2);
	Q1=Generator.generateClient(Q1);
}
void Restaurant::platesCreation()
{
	/* Plate preparation:
	 * In this section, the kitchen prepares all the different plates and push them into their correspondent stack.
	 * 	This is done in the functions ellaborateA, ellaborateB and ellaborateC.
	*/
	GRD1=kitchen.elaborateA(GRD1);
	GRD2=kitchen.elaborateB(GRD2);
	GRD3=kitchen.elaborateC(GRD3);
}
void Restaurant::entranceInRestaurant()
{
	/* Entrance Queue and tables assignment:
	 * 	In this part, the table numbers are assigned to the clients (function createTablesAvailable()).
	 * Then the entrance Queue is created (Q2) (function resEntrance()).
	*/
	tablesAvailable=num_Tables.createTablesAvailable();
	Q2=entrance.resEntrance(Q1,tablesAvailable);
}
void Restaurant::waiterCreation()
{
	/* Waiter preparation:
	 * In this part, the three waiters are assigned with their correspondent stack of plates.
	*/
	waiterA.setStack(GRD1);
	waiterB.setStack(GRD2);
	waiterC.setStack(GRD3);
}
void Restaurant::eatAndExitProcess()
{
	/* Eat process and exit status:
	 * Here, the clients eat their meal, and then they show their exit information, including 
	 * 	their name, ID, table and the plate they have consumed.
	*/
	eat.eatProcess(Q2,exit,waiterA,waiterB,waiterC);
}
Restaurant::~Restaurant()
{
}
