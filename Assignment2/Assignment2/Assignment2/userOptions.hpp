#ifndef USEROPTIONS_HPP
#define USEROPTIONS_HPP
#include "Stack.hpp"
#include "List.hpp"
#include "hashTable.hpp"
#include "elemManager.hpp"
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <algorithm> 
#include <chrono>

using namespace std;
using namespace std::chrono;
class userOptions
{
public:
	userOptions();
	void max_minList(List* );
	void getGreater_LowerNumbersHash(hashTable*);
	void max_minHash(hashTable*);
	void countDistinctHash(hashTable* );
	void averageHash(hashTable* );
	void averageList(List* );
	void countDistinctList(List* );
	void finishProgram(Stack*);
	void searchNumberHash(hashTable*,int);
	void getGreater_LowerNumbersList(List*);
	void searchNumberList(List*,int);
	void searchHigherOccurrencesHash(hashTable*);
	void searchHigherOccurrencesList(List*);
	void addSeries(Stack*,hashTable*,List*);
	void emptyHash(hashTable*);
	void emptyList(List*);
	~userOptions();

};

#endif // USEROPTIONS_HPP
