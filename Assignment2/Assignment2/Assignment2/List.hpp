#ifndef LIST_HPP
#define LIST_HPP
#include "ListElement.hpp"
class List
{
private: 
	ListElement* header;
public:
	List();
	void insert(int);
	bool empty();
	ListElement* locate(int);
	ListElement* Previous(ListElement* );
	ListElement* getHeader();
	int eliminate(int);
	int length();
	~List();

};

#endif // LIST_HPP
