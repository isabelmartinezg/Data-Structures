#ifndef CLIENTGENERATOR_HPP
#define CLIENTGENERATOR_HPP
#include "Stack.hpp"
#include "Client.hpp"
#include <string.h>
#include "Queue.hpp"
using namespace std;

class clientGenerator
{
private:
	Stack STCO1;
	Stack STVO1;
	Stack STCO2;
	Stack STVO2;
public:
	clientGenerator(Stack,Stack,Stack,Stack);
	Queue generateClient(Queue);
	~clientGenerator();

};

#endif // CLIENTGENERATOR_HPP

