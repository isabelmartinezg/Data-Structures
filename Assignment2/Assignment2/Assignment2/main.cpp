#include <stdio.h>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <algorithm> 
#include <chrono> 
#include "hashTable.hpp"
#include "userMenu.hpp"
#include "List.hpp"
#include "elemManager.hpp"
#include "userOptions.hpp"
#include "Stack.hpp"
using namespace std;
using namespace std::chrono;
int main()
{
	//Creation of all the objects needed in the program
	userOptions* user=new(userOptions);
	hashTable* hash=new(hashTable);;
	List* l=new(List);
	elemManager* manager=new(elemManager);
	Stack* stack1= new (Stack);
	Stack* stack2= new (Stack);
	userMenu menu = userMenu(hash,l,stack1,stack2,user,manager);
	menu.start();
	menu.mainMenu();
	return 0;
}
