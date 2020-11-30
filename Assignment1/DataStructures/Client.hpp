#ifndef CLIENT_HPP
#define CLIENT_HPP
#include "string"

class Client
{
private:
	std::string name;
	int number;
	std::string table,plate;
public:
	Client();
	int getNumber();
	void setName(std::string);
	void setNumber(int n);
	void setTable(std::string);
	std::string getTable();
	std::string getName();
	void setPlate(std::string);
	std::string getPlate();
	void createClient(std::string,int);
	~Client();

};

#endif // CLIENT_HPP
