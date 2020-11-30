#ifndef LISTELEMENT_HPP
#define LISTELEMENT_HPP

class ListElement
{
private:
	int value;
	int occurrences;
	ListElement* next;
public:
	ListElement();
	void setValue(int);
	int getValue();
	void setNext(ListElement*);
	ListElement* getNext();
	void setOccurrences(int);
	int getOccurrences();
	~ListElement();

};

#endif // LISTELEMENT_HPP
