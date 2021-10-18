#pragma once
#include "LinkedList.h"
class Data
{
public:
	Data(int newNum = 0, int newTime = 0);
	void addTime();
	int getID() const;
	int getTotalTime() const;
	int getTime() const;
	void incrementTime();
	~Data();
private:
	int customerNumber;
	int serviceTime;
	int totalTime;
};

std::ostream& operator<< (std::ostream& lhs, const Data& data);

