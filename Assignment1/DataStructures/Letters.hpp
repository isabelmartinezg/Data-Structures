#ifndef LETTERS_HPP
#define LETTERS_HPP
#include <string>
using namespace std;
class Letters
{
private:
	std::string VO[5];
	std::string CO[21];
public:
	Letters();
	std::string* getVO();
	std::string* getCO();
	~Letters();

};

#endif // LETTERS_HPP
