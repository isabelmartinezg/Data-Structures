#ifndef SERIE_HPP
#define SERIE_HPP
#include "List.hpp"
#include "hashTable.hpp"
class Serie
{
private:
	int start,end,step;
public:
	Serie();
	void generateSerie(hashTable*,List*);
	void setStart(int);
	void setEnd(int);
	void setStep(int);
	int getStart();
	int getEnd();
	int getStep();
	~Serie();

};

#endif // SERIE_HPP
