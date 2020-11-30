#include "randomTable.hpp"
#include <string>
#include <sstream>
#include <iostream>

randomTable::randomTable()
{
	for(int i=0;i<100;i++)
	{
		num_tables[i]=i+1;
	}
}
//This function fills a Stack with random numbers between 0-100 not repeated

Stack randomTable::createTablesAvailable()
{
	Stack s;
	while(checkTables())
	{
		int n=rand()%100;
		if(num_tables[n]!=0)
		{
			ostringstream str1;
			str1<<num_tables[n];
			std::string str=str1.str();
			s.push(str);
			num_tables[n]=0;
		}
	}
	return s;
}
bool randomTable::checkTables()
//Check if there are tables available, if all tables are occuped, returns false
{
	for(int i=0;i<100;i++)
	{
		if(num_tables[i]!=0)
		{
			return true;
		}
	}
	return false;
}
randomTable::~randomTable()
{
}

