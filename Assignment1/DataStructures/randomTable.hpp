#ifndef RANDOMTABLE_HPP
#define RANDOMTABLE_HPP
#include "Stack.hpp"

class randomTable
{
private:
	int num_tables[100];
public:
	randomTable();
	Stack createTablesAvailable();
	bool checkTables();
	~randomTable();

};

#endif // RANDOMTABLE_HPP
