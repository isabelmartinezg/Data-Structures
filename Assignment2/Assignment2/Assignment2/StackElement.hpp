#ifndef STACKELEMENT_HPP
#define STACKELEMENT_HPP
#include <stdlib.h>
#include <stdio.h>
#include "Serie.hpp"
using namespace std;

class StackElement
{
private:
	Serie serie;
	StackElement* nextSerie;
public:
	StackElement();
	Serie getSerie();
	void setSerie(Serie);
	void setNextSerie(StackElement*);
	StackElement* getNextSerie();
	~StackElement();

};

#endif // STACKELEMENT_HPP
