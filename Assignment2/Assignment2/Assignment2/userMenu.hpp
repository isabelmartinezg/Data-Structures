#ifndef USERMENU_HPPclTabCtrl
#define USERMENU_HPP
#include "userOptions.hpp"
#include <stdio.h>

using namespace std;
class userMenu
{
private:
	hashTable* hash;
	userOptions* user;
	elemManager* manager;
	List* l;
	Stack* stack1;
	Stack* stack2;
public:
	userMenu(hashTable*,List*,Stack*,Stack*,userOptions*,elemManager*);
	void mainMenu();
	void start();
	~userMenu();

};

#endif // USERMENU_HPP
