#ifndef FILEMANAGER_HPP
#define FILEMANAGER_HPP
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include "Stack.hpp"
#include "Serie.hpp"
#include "hashTable.hpp"
#include "List.hpp"
using namespace std;
class elemManager
{
public:
	elemManager();
	void bubbleSort(List*);
	void hashRegenerator(Stack*, hashTable*);
	void seriesGenerator(hashTable*,List*,Stack*,Stack*);
	void listRegenerator(Stack*,List*);
	void readAndStoreSeries(char const*,Stack*);
	~elemManager();

};

#endif // FILEMANAGER_HPP
