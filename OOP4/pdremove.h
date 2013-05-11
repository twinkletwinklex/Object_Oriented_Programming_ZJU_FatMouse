#ifndef PDREMOVE_H_
#define PDREMOVE_H_
#include "DiaryBase.h"
#include <iostream>
#include <string>
using namespace std;

class pdremove : public DiaryBase
{
public:
	pdremove();
	virtual ~pdremove();
private:
	int year, month, day;
	void read();
};

pdremove::pdremove()
{
	this->ReadFile();
	this->read();
	this->DeleteByTime(year, month, day);
}

pdremove::~pdremove()
{

}

void pdremove::read()
{
	cin>>month>>day>>year;
}



#endif