#include "fileManager.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdio>
#include "Serie.hpp"

using namespace std;
fileManager::fileManager()
{
}
void fileManager::readAndStoreSeries(char* file, Stack* st)
{
	std::string line;
	int n_spaces=0;
	char c;
	ifstream myfile(file);
	if(myfile.is_open())
	{
		while(getline(myfile, line))
		{
			std::string n1;
			std::string n2;
			std::string n3;
			for(int i=0;i<line.length();i++)
			{
				c=line.at(i);
				if(c != ' ')
				{
					if(n_spaces==0)
					{
						n1+=c;
					}else if(n_spaces==1)
					{
						n2+=c;
					}else
					{
						n3+=c;
					}
				}else
				{
					n_spaces++;
				}
			}
			n_spaces=0;
			int start,end,step;
			std::istringstream ( n1 ) >> start;
			std::istringstream ( n2 ) >> end;
			std::istringstream ( n3 ) >> step;
			//cout<<start<<", "<<end<<", "<<step<<endl;
			Serie s;
			s.setStart(start);
			s.setEnd(end);
			s.setStep(step);
			st->push(s);
		}
	}else{
		cout<<"error";
		exit(1);
	}
}
fileManager::~fileManager()
{
}

