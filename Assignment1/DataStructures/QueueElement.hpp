#ifndef QUEUEELEMENT_HPP
#define QUEUEELEMENT_HPP
#include "Client.hpp"

class QueueElement
{
	Client client;
	QueueElement* nextClient;
public:
	QueueElement();
	void setNextClient(QueueElement*);
	void setClient(Client);
	QueueElement* getNextClient();
	Client getClient();
	~QueueElement();

};

#endif // QUEUEELEMENT_HPP
