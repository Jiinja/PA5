/*****************************************************************************************
* Programmer: Josh Maloy                                                                 *
* Class: CptS 122, Fall 2021; Lab Section 1                                              *
* Programming Assignment: PA5                                                            *
* Date: October 18, 2021                                                                 *
* Description: this program defines a data storage object used in the queue nodes		 *
******************************************************************************************/

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

