#ifndef HASHTABLE_HPP
#define HASHTABLE_HPP
#include "hashTableElement.hpp"
class hashTable
{
private:
	hashTableElement* table[10];
public:
	hashTable();
	void insert(int);
	void eliminate(int);
	bool member(int);
	hashTableElement** getTable();
	hashTableElement* Search(int);
	int h(int);
	~hashTable();

};

#endif // HASHTABLE_HPP
