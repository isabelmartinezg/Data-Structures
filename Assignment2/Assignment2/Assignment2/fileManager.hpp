#ifndef FILEMANAGER_HPP
#define FILEMANAGER_HPP
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include "Stack.hpp"
using namespace std;
class fileManager
{
public:
	fileManager();
	void readAndStoreSeries(char*,Stack*);
	~fileManager();

};

#endif // FILEMANAGER_HPP
